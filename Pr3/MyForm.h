#pragma once
#include<random>
#include<ctime>
#include<ctime>
namespace Pr3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Button^ button3;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(17, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(210, 244);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(26, 286);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вивести 12 чисел";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox2
			// 
			this->richTextBox2->Location = System::Drawing::Point(233, 14);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(167, 242);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(240, 290);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 36);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Кількість додатніх";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// richTextBox3
			// 
			this->richTextBox3->Location = System::Drawing::Point(407, 14);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(162, 241);
			this->richTextBox3->TabIndex = 4;
			this->richTextBox3->Text = L"";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(413, 290);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(156, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Кількість від\'ємних";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 446);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	float num;

	public: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();
		for (int i = 1; i <= 12; i++) {
			num = (float)rnd->Next(-100, 100) / 10.0;
			richTextBox1->AppendText(Convert::ToString(num) + "\r\n");
		}
	}
public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	float i=1, k=0;
	while (i <= 12) {
		if (num > 0){
			k++;
		}
		i++;
	}
	richTextBox2->Text = Convert::ToString(k);
}
public: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	float i = 1, k = 0;
	while (i <= 12) {
		if (num < 0) {
			k++;
		}
		i++;
	}
	richTextBox3->Text = Convert::ToString(k);
}
};
}
