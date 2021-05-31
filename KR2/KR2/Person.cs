using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KR2
{
    class Person
    {
        private string name;             // Имя                                               
        private string surname;          // Фамилия
        private DateTime dateOfBirth;    // Дата рождения

        // Конструктор без параметров
        public Person()                  
        {
            name = "-";
            surname = "-";
            dateOfBirth = new DateTime();
        }

        // Конструктор с параметрами
        public Person(string name_,string surname_,DateTime dateOfBirth_)  
        {
            name = name_;
            surname = surname_;
            dateOfBirth = dateOfBirth_;
        }

        // Свойство для доступа к полю с именем
        public string Name
        {
            get 
            {
                return name;
            }
            set
            {
                name = value;
            }
        }

        // Свойство для доступа к полю с фамилией
        public string Surname
        {
            get
            { 
                return surname;
            }
            set
            {
                surname = value;
            }
        }

        // Свойство для доступа к полю с датой рождения
        public DateTime DateOfBirth
        {
            get
            {
                return dateOfBirth;
            }
            set
            {
                dateOfBirth = value;
            }
        }

        // Свойство для получения и изменения года рождения
        public int YearOfBirth
        {
            get
            {
                return dateOfBirth.Year;
            }
            set
            {
                DateTime Date = new DateTime(value, dateOfBirth.Month, dateOfBirth.Day);
                dateOfBirth = Date;
            }
        }

        // Метод возвращает строку со значениями всех полей класса
        public override string ToString()
        {
            return $"\n Имя: {name}\n Фамилия: {surname}\n Дата рождения: {dateOfBirth}";
        }

        // Метод возвращает строку с именем и фамилией
        public virtual string ToShortString()
        {
            return $"Имя: {name}, Фамилия: {surname}";
        }
    }
}
