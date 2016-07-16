#pragma once

namespace Проект5 {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  tb1;
	private: System::Windows::Forms::TextBox^  tb2;
	private: System::Windows::Forms::Button^  b;
	private: System::Windows::Forms::Label^  lb;




	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->b = (gcnew System::Windows::Forms::Button());
			this->lb = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 15);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ваш рост, в см.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(12, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 15);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ваш вес, в кг.";
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(155, 21);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(100, 20);
			this->tb1->TabIndex = 2;
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(155, 49);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(100, 20);
			this->tb2->TabIndex = 3;
			// 
			// b
			// 
			this->b->BackColor = System::Drawing::Color::YellowGreen;
			this->b->Cursor = System::Windows::Forms::Cursors::Default;
			this->b->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->b->ForeColor = System::Drawing::Color::BlanchedAlmond;
			this->b->Location = System::Drawing::Point(90, 221);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(107, 28);
			this->b->TabIndex = 4;
			this->b->Text = L"Рассчитать";
			this->b->UseVisualStyleBackColor = false;
			// 
			// lb
			// 
			this->lb->AutoSize = true;
			this->lb->Location = System::Drawing::Point(12, 91);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(35, 13);
			this->lb->TabIndex = 5;
			this->lb->Text = L"label3";
			this->lb->Click += gcnew System::EventHandler(this, &MyForm::lb_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->b);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Калькулятор ИМТ";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((tb1->Text != "") && (tb2->Text != "")){
			double r, v;
			r = Convert::ToDouble(tb1->Text);
			v = Convert::ToDouble(tb2->Text);
			double z, z0;
			z0 = 25;
			z = v / (r*r);
			if (z<z0)lb->Text = "Нужна диета!";
			else lb->Text = "Не нужна диета.";
		}
		else{
			lb->Text = "Введите все значения!";
		}
	}
	private: System::Void tb1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar<48 || e->KeyChar>57)
		{
			e->Handled = true;
		}
		if (tb1->Text != "")
			if (Convert::ToInt32(tb1->Text)>99)
				e->Handled = true;
	}
private: System::Void tb2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	if ((e->KeyChar<48 || e->KeyChar>57) && e->KeyChar != ',')
	{
		e->Handled = true;
	}
	if (tb2->Text != "")
		if (Convert::ToDouble(tb2->Text) >= 999.2){
			e->Handled = true;
		}
		else{
			if (e->KeyChar == ','){
				if (tb2->Text == "")
				{
					e->Handled = true;
				}
				String ^s = tb2->Text;
				for (int i = 0; i<tb2->Text->Length; i++){
					if (s[i] == ',') e->Handled = true;
				}
			}
		}
}
private: System::Void tb1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tb2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void lb_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
