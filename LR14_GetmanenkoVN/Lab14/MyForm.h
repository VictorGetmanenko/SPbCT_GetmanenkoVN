#pragma once
#include "Matrix.h"
#include "Triangular_matrix.h"
#include<cstdlib>
using namespace std;

int m,n;
int i = 0;
int j = 0;
Matrix A;

namespace Lab14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;



	protected:

	private:

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(24, 104);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 48);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Создать матрицу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(198, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(55, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(24, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 52);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Привести к треугольному виду";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 247);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 52);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Введите количество строк";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Введите количество столбцов";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(198, 61);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(55, 20);
			this->textBox2->TabIndex = 6;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->textBox4->Location = System::Drawing::Point(22, 19);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(194, 194);
			this->textBox4->TabIndex = 8;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(152, 104);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 48);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Заполнить случайными значениями";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Location = System::Drawing::Point(274, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(236, 280);
			this->groupBox1->TabIndex = 10;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вывод матрицы";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(62, 234);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(117, 29);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Очистить";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(152, 173);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 52);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Сохранить матрицу";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(152, 247);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 52);
			this->button7->TabIndex = 12;
			this->button7->Text = L"Загрузить матрицу";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 320);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Матрицы";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "" && textBox2->Text != "")
		{
			n = Convert::ToInt32(textBox1->Text);
			m = Convert::ToInt32(textBox2->Text);
			A.setRows(n);
			A.setCols(m);
			A.mat.resize(n);
			for (int i = 0; i < n; i++)
			{
				A.mat[i].resize(m);
			}
		}
		else
		{
			MessageBox::Show("Введите данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
		
		StringBuilder^ sb = gcnew StringBuilder();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				A.mat[i][j] = 0;
				sb->AppendFormat("{0,4} ", A.mat[i][j]);
			}
			sb->Append("\r\n");
		}
		textBox4->Text = sb->ToString();
	}

	private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {

		textBox4->Text = "";
		StringBuilder^ sb = gcnew StringBuilder();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				A.mat[i][j] = rand() % 100;
				sb->AppendFormat("{0,4} ", A.mat[i][j]);
			}
			sb->Append("\r\n");
		}
		textBox4->Text = sb->ToString();
	}

private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Triangular_matrix B(A);
	if (B.getCols() == B.getRows())
	{
		B.Tmatrix();
		textBox4->Text = "";
		StringBuilder^ sb = gcnew StringBuilder();
		for (int i = 0; i < B.getRows(); i++)
		{
			for (int j = 0; j < B.getCols(); j++)
			{
				sb->AppendFormat("{0,4} ", B.mat[i][j]);
			}
			sb->Append("\r\n");
		}
		textBox4->Text = sb->ToString();
	}
	else
	{
		MessageBox::Show("Матрица должна быть квадратной", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}

private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Text = "";
}

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ path = "Matrix.txt";
	System::IO::File::AppendAllText("Empty.log", "");
	System::IO::File::Replace("Empty.log", path, "copy.log");
	System::IO::File::AppendAllText("Matrix.txt", textBox4->Text);
	textBox4->Text = "Матрица сохранена в Matrix.txt";
}

private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamReader^ sr = gcnew System::IO::StreamReader("Matrix.txt");
	System::String^ text = sr->ReadToEnd();
	textBox4->Text = text;
	sr->Close();
}
};
}
