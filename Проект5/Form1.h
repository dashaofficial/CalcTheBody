#pragma once


namespace проект5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form1
	///
	/// Внимание! При изменении имени этого класса необходимо также изменить
	///          свойство имени файла ресурсов ("Resource File Name") для средства компиляции управляемого ресурса,
	///          связанного со всеми файлами с расширением .resx, от которых зависит данный класс. В противном случае,
	///          конструкторы не смогут правильно работать с локализованными
	///          ресурсами, сопоставленными данной форме.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  b;
	protected: 
	private: System::Windows::Forms::TextBox^  tb1;
	private: System::Windows::Forms::TextBox^  tb2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lb;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->b = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->tb2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lb = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// b
			// 
			this->b->BackColor = System::Drawing::Color::LightGreen;
			this->b->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->b->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->b->ForeColor = System::Drawing::SystemColors::ControlText;
			this->b->Location = System::Drawing::Point(77, 221);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(127, 28);
			this->b->TabIndex = 0;
			this->b->Text = L"Расчитать";
			this->b->UseVisualStyleBackColor = false;
			this->b->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(113, 29);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(159, 20);
			this->tb1->TabIndex = 1;
			this->tb1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::tb1_KeyPress);
			// 
			// tb2
			// 
			this->tb2->Location = System::Drawing::Point(113, 70);
			this->tb2->Name = L"tb2";
			this->tb2->Size = System::Drawing::Size(159, 20);
			this->tb2->TabIndex = 2;
			this->tb2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::tb2_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Ваш рост, в см.";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(12, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 15);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ваш вес, в кг.";
			// 
			// lb
			// 
			this->lb->AutoSize = true;
			this->lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->lb->Location = System::Drawing::Point(12, 112);
			this->lb->Name = L"lb";
			this->lb->Size = System::Drawing::Size(0, 15);
			this->lb->TabIndex = 5;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->lb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tb2);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->b);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Калькулятор ИМТ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if((tb1->Text!="")&&(tb2->Text!="")){
					 double r,v;
					 r=Convert::ToDouble(tb1->Text);
					 v=Convert::ToDouble(tb2->Text);
					 double z;
					 z=(v/(r*r))*10000;
					 if(z>40)lb->Text="Сильное ожирение!\n\nПовышен риск ранней смерти и \nсопутствующих заболеваний. \nНеобходимо срочно похудеть!";
					 if(z<41)lb->Text="Ожирение!\n\nРиск сопутствующих заболеваний\nслегка повышен. Необходимо похудеть!\nОбратитесь к врачу!";
					 if(z<31)lb->Text="Избыточный вес!\n\nУделяйте побольше времени спорту\nи здоровому питанию!";
					 if(z<25)lb->Text="Нормальный вес!\n\nПродолжайте в том же духе!";
					 if(z<20)lb->Text="Недовес!\n\nИз-за недостаточного веса вам угрожает\nнедостаток питательных веществ и\nхрупкость костей. Обратитесь к врачу!";
				 }
				 else{
					 lb->Text="Введите все значения!!!";
				 }
			 }
	private: System::Void tb1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if(e->KeyChar<48||e->KeyChar>57)
				 { e->Handled=true;}
				 if(tb1->Text!="")
					 if(Convert::ToInt32(tb1->Text)>99)
						 e->Handled=true;
			 }
	private: System::Void tb2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if((e->KeyChar<48||e->KeyChar>57)&&e->KeyChar!=',')
				 { e->Handled=true;}
				 if(tb2->Text!="")
					 if(Convert::ToDouble(tb2->Text)>=999.2){
						 e->Handled=true;
				  }
					 else{ if(e->KeyChar==','){
						 if(tb2->Text=="")
						 {e->Handled=true;}
						 String ^s=tb2->Text;
						 for(int i=0;i<tb2->Text->Length;i++){
							 if(s[i]==',') e->Handled=true;
				   }
				  }
				  }
			 }
	};
}

