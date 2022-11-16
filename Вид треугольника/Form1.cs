using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Вид_треугольника
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
            double ab, bc, ca;
            ab = Convert.ToDouble(textBox1.Text);
            bc = Convert.ToDouble(textBox2.Text);
            ca = Convert.ToDouble(textBox3.Text);
            if ((ab >= (bc + ca)) || (bc >= (ab + ca)) || (ca >= (ab + bc)))
            {
                label5.Text = "Треугольник с такими сторонами\n не существует";
                return;
            }
            if (ab == bc && bc == ca && ca == ab)
            {
                label5.Text = "Треугольник равносторонний";
                return;
            }
            if ((ab == bc)||(bc == ca)||(ca == ab))
            {
                label5.Text = "Треугольник равнобедренный";
                return;
            }
            if ((ab*ab == (bc*bc + ca*ca)) || (bc*bc==(ca*ca + ab*ab)) || (ca*ca == (ab*ab + bc * bc)))
            {
                label5.Text = "Треугольник прямоугольный";
                return;
            }
            label5.Text = "Треугольник разносторонний";
        }
    }
}
