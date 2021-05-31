using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace KR2
{
    class Program
    {
        static void Main(string[] args)
        {
            // Создать один объект типа Teacher
            Teacher T = new Teacher();

            // Преобразовать данные в текстовый вид с помощью метода ToShortString() и вывести данные
            Console.WriteLine(T.ToShortString());

            Console.WriteLine();

            // Вывести значения индексатора для значений индекса ScientificDegree.None,
            // ScientificDegree.Candidate и ScientificDegree.Doctor
            Console.WriteLine(T[ScientificDegree.None]);
            Console.WriteLine(T[ScientificDegree.Candidate]);
            Console.WriteLine(T[ScientificDegree.Doctor]);

            // Присвоить значения всем определенным в типе Teacher свойствам
            T.Person.Name = "Иван";
            T.Person.Surname = "Иванов";
            T.Person.DateOfBirth = new DateTime(1981, 5, 4);
            T.Degree = ScientificDegree.Candidate;
            T.PhoneNumber = "465-67-82";

            // C помощью метода AddInstitutions(params Institution[] institutions) добавить элементы в список учебных заведений
            T.AddInstitutions(new Institution("СПБКТ", 2, new DateTime(2014, 11, 2)));
            T.AddInstitutions(new Institution("СПБГУТ", 4, new DateTime(2015, 1, 2)));

            // Вывести данные объекта Teacher, используя метод ToString()
            Console.WriteLine(T.ToString());

            Console.ReadKey();
        }  
    }
}
