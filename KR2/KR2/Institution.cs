using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KR2
{
    class Institution
    {
        // Название учебного заведения
        public string NameOfInstinution { get; set; }

        // Количество читаемых предметов
        public int NumberOfSubjects { get; set; }

        // Дата начала работы в учебном заведении
        public DateTime DateOfBegin { get; set; }

        // Конструктор без параметров
        public Institution()
        {
            NameOfInstinution = "-";
            NumberOfSubjects = 0;
        }

        // Конструктор с параметрами
        public Institution(string NameOfInstinution_, int NumberOfSubjects_,DateTime DateOfBegin_)
        {
            NameOfInstinution = NameOfInstinution_;
            NumberOfSubjects = NumberOfSubjects_;
            DateOfBegin = DateOfBegin_;
        }

        // Метод возвращает строку со значениями всех полей класса
        public override string ToString()
        {
            return $"\n Название учебного заведения: {NameOfInstinution}\n Количество читаемых предметов: {NumberOfSubjects}\n Дата начала работы в учебном заведении: {DateOfBegin}";
        }  
    }
}
