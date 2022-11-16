using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Квадратное_уравнение
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a, b, c;
            double D;
            double x1, x2;
            a = Convert.ToDouble(textBox1.Text);
            b = Convert.ToDouble(textBox2.Text);
            c = Convert.ToDouble(textBox3.Text);
            D = b * b - 4 * a * c;
            if (D < 0)
            {
                label5.Text = "Корней нет";
                return;
            }
            if (D==0)
            {
                x1 = -b / (2 * a);
                label5.Text = $"Один корень Х = {Math.Round(x1,3)}";
                return;
            }
            if (D>0)
            {
                x1 = (-b + Math.Sqrt(D) / (2 * a));
                x2 = (-b - Math.Sqrt(D) / (2 * a));
                label5.Text = $"Два корня Х1 = {Math.Round(x1, 3)}  X2 = {Math.Round(x2, 3)}";
                return;
            }
        }
    }
}
