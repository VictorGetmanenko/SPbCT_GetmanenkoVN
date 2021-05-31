using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KR2
{
    class Teacher
    {
        private Person person;                // Данные преподавателя
        private ScientificDegree degree;      // Информация о ученой степени
        private string phoneNumber;           // Контактный телефон
        private Institution[] institutions;   // Информация о учебных заведениях, в которых работал преподаватель

        // Конструктор без параметров
        public Teacher()
        {
            person = new Person();
            degree = 0;
            phoneNumber = "-";
            institutions = new Institution[0];
        }

        // Конструктор с параметрами
        public Teacher(Person person_, ScientificDegree degree_, string phoneNumber_, Institution[] institutions_)
        {
            person = person_;
            degree = degree_;
            phoneNumber = phoneNumber_;
            institutions = institutions_;
        }

        // Свойство для доступа к полю с данными преподавателя 
        public Person Person 
        {
            get
            {
                return person;
            }
            set
            {
                person = value;
            }
        }

        // Свойство для доступа к полю с информацией о ученой степени
        public ScientificDegree Degree 
        {
            get
            {
                return degree;
            }
            set
            {
                degree = value;
            }  
        }

        // Свойство для доступа к полю с контактным телефоном
        public string PhoneNumber
        { 
            get
            {
                return phoneNumber;
            }
            set
            {
                phoneNumber = value;
            }
        }

        // Свойство для доступа к полю со списком учебных заведений
        public Institution[] Institutions
        {
            get
            {
                return institutions;
            }
        }

        // Свойство в котором вычисляется среднее количество читаемых предметов
        public double MeanOfSubjects
        {
            get
            {
                if (institutions.Length != 0)
                {
                    double sum = 0;
                    for (int i = 0; i < institutions.Length; i++)
                    {
                        sum += institutions[i].NumberOfSubjects;
                    }
                    return sum / institutions.Length;
                }
                else return 0;
            }
        }

        // Индексатор булевского типа; значение индексатора равно true, если значение поля с ученой
        // степенью преподавателя совпадает со значением индекса
        public bool this[ScientificDegree obj]
        {
            get
            {
                return obj==degree;
            }
        }

        // Метод  для добавления элементов в список учебных заведений
        public void AddInstitutions(params Institution[] Institutions)
        {
            Institution[] institutions2 = new Institution[institutions.Length + Institutions.Length];
            for(int i=0,j=0;i<institutions2.Length;i++)
            {
                if(i>institutions.Length-1)
                {
                    institutions2[i] = Institutions[j];
                    j++;
                }
                else institutions2[i] = institutions[i];
            }
            institutions = institutions2;
        }

        // Метод возвращает строку со значениями всех полей класса
        public override string ToString()
        {
            string str=$"\nДанные преподавателя: {person.ToString()}\n Информация о ученой степени: {degree}\n Контактный телефон: {phoneNumber}\nИнформация о учебных заведениях:";
            for(int i=0;i<institutions.Length;i++)
            {
                str += institutions[i].ToString();
            }
            return str;
        }

        // Метод возвращает строку со значениями всех полей класса без списка учебных заведений, 
        // но со значением среднего количества читаемых предметов
        public virtual string ToShortString()
        {
            return $"\nДанные преподавателя: {person.ToString()}\n Информация о ученой степени: {degree}\n Контактный телефон: {phoneNumber}\n Среднее количество читаемых предметов: {MeanOfSubjects}";
        }
    }
}
