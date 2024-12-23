#pragma once

namespace calculator {

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
	private: System::Windows::Forms::Button^ buttonDot;
	private: System::Windows::Forms::Button^ buttonNum0;
	private: System::Windows::Forms::Button^ buttonEqual;
	protected:



	private: System::Windows::Forms::Button^ buttonNum7;
	private: System::Windows::Forms::Button^ buttonNum8;
	private: System::Windows::Forms::Button^ buttonNum9;



	private: System::Windows::Forms::Button^ buttonNum4;
	private: System::Windows::Forms::Button^ buttonNum5;
	private: System::Windows::Forms::Button^ buttonNum6;



	private: System::Windows::Forms::Button^ buttonNum1;
	private: System::Windows::Forms::Button^ buttonNum2;
	private: System::Windows::Forms::Button^ buttonNum3;



	private: System::Windows::Forms::Button^ buttonClear;
	private: System::Windows::Forms::Button^ buttonClearN;


	private: System::Windows::Forms::Button^ buttonPow;

	private: System::Windows::Forms::Button^ buttonDivide;

	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonPlus;



	private: System::Windows::Forms::Button^ buttonPercent;
	private: System::Windows::Forms::Label^ resultlabel;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonDot = (gcnew System::Windows::Forms::Button());
			this->buttonNum0 = (gcnew System::Windows::Forms::Button());
			this->buttonEqual = (gcnew System::Windows::Forms::Button());
			this->buttonNum7 = (gcnew System::Windows::Forms::Button());
			this->buttonNum8 = (gcnew System::Windows::Forms::Button());
			this->buttonNum9 = (gcnew System::Windows::Forms::Button());
			this->buttonNum4 = (gcnew System::Windows::Forms::Button());
			this->buttonNum5 = (gcnew System::Windows::Forms::Button());
			this->buttonNum6 = (gcnew System::Windows::Forms::Button());
			this->buttonNum1 = (gcnew System::Windows::Forms::Button());
			this->buttonNum2 = (gcnew System::Windows::Forms::Button());
			this->buttonNum3 = (gcnew System::Windows::Forms::Button());
			this->buttonClear = (gcnew System::Windows::Forms::Button());
			this->buttonClearN = (gcnew System::Windows::Forms::Button());
			this->buttonPow = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonPercent = (gcnew System::Windows::Forms::Button());
			this->resultlabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonDot
			// 
			this->buttonDot->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonDot->FlatAppearance->BorderSize = 0;
			this->buttonDot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 52, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDot->ForeColor = System::Drawing::Color::White;
			this->buttonDot->Location = System::Drawing::Point(12, 713);
			this->buttonDot->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonDot->Name = L"buttonDot";
			this->buttonDot->Size = System::Drawing::Size(116, 110);
			this->buttonDot->TabIndex = 0;
			this->buttonDot->Text = L".";
			this->buttonDot->UseVisualStyleBackColor = false;
			this->buttonDot->Click += gcnew System::EventHandler(this, &MyForm::buttonDot_Click);
			// 
			// buttonNum0
			// 
			this->buttonNum0->BackColor = System::Drawing::Color::Gray;
			this->buttonNum0->FlatAppearance->BorderSize = 0;
			this->buttonNum0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum0->ForeColor = System::Drawing::Color::Transparent;
			this->buttonNum0->Location = System::Drawing::Point(133, 713);
			this->buttonNum0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum0->Name = L"buttonNum0";
			this->buttonNum0->Size = System::Drawing::Size(116, 110);
			this->buttonNum0->TabIndex = 1;
			this->buttonNum0->Text = L"0";
			this->buttonNum0->UseVisualStyleBackColor = false;
			this->buttonNum0->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonEqual
			// 
			this->buttonEqual->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonEqual->FlatAppearance->BorderSize = 0;
			this->buttonEqual->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEqual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonEqual->ForeColor = System::Drawing::Color::White;
			this->buttonEqual->Location = System::Drawing::Point(256, 713);
			this->buttonEqual->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonEqual->Name = L"buttonEqual";
			this->buttonEqual->Size = System::Drawing::Size(116, 110);
			this->buttonEqual->TabIndex = 2;
			this->buttonEqual->Text = L"=";
			this->buttonEqual->UseVisualStyleBackColor = false;
			this->buttonEqual->Click += gcnew System::EventHandler(this, &MyForm::buttonEqual_Click);
			// 
			// buttonNum7
			// 
			this->buttonNum7->BackColor = System::Drawing::Color::Gray;
			this->buttonNum7->FlatAppearance->BorderSize = 0;
			this->buttonNum7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum7->ForeColor = System::Drawing::Color::White;
			this->buttonNum7->Location = System::Drawing::Point(12, 597);
			this->buttonNum7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum7->Name = L"buttonNum7";
			this->buttonNum7->Size = System::Drawing::Size(116, 110);
			this->buttonNum7->TabIndex = 3;
			this->buttonNum7->Text = L"7";
			this->buttonNum7->UseVisualStyleBackColor = false;
			this->buttonNum7->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum8
			// 
			this->buttonNum8->BackColor = System::Drawing::Color::Gray;
			this->buttonNum8->FlatAppearance->BorderSize = 0;
			this->buttonNum8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum8->ForeColor = System::Drawing::Color::White;
			this->buttonNum8->Location = System::Drawing::Point(133, 597);
			this->buttonNum8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum8->Name = L"buttonNum8";
			this->buttonNum8->Size = System::Drawing::Size(116, 110);
			this->buttonNum8->TabIndex = 4;
			this->buttonNum8->Text = L"8";
			this->buttonNum8->UseVisualStyleBackColor = false;
			this->buttonNum8->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum9
			// 
			this->buttonNum9->BackColor = System::Drawing::Color::Gray;
			this->buttonNum9->FlatAppearance->BorderSize = 0;
			this->buttonNum9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum9->ForeColor = System::Drawing::Color::White;
			this->buttonNum9->Location = System::Drawing::Point(256, 597);
			this->buttonNum9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum9->Name = L"buttonNum9";
			this->buttonNum9->Size = System::Drawing::Size(116, 110);
			this->buttonNum9->TabIndex = 5;
			this->buttonNum9->Text = L"9";
			this->buttonNum9->UseVisualStyleBackColor = false;
			this->buttonNum9->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum4
			// 
			this->buttonNum4->BackColor = System::Drawing::Color::Gray;
			this->buttonNum4->FlatAppearance->BorderSize = 0;
			this->buttonNum4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum4->ForeColor = System::Drawing::Color::White;
			this->buttonNum4->Location = System::Drawing::Point(12, 481);
			this->buttonNum4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum4->Name = L"buttonNum4";
			this->buttonNum4->Size = System::Drawing::Size(116, 110);
			this->buttonNum4->TabIndex = 6;
			this->buttonNum4->Text = L"4";
			this->buttonNum4->UseVisualStyleBackColor = false;
			this->buttonNum4->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum5
			// 
			this->buttonNum5->BackColor = System::Drawing::Color::Gray;
			this->buttonNum5->FlatAppearance->BorderSize = 0;
			this->buttonNum5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum5->ForeColor = System::Drawing::Color::White;
			this->buttonNum5->Location = System::Drawing::Point(133, 481);
			this->buttonNum5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum5->Name = L"buttonNum5";
			this->buttonNum5->Size = System::Drawing::Size(116, 110);
			this->buttonNum5->TabIndex = 7;
			this->buttonNum5->Text = L"5";
			this->buttonNum5->UseVisualStyleBackColor = false;
			this->buttonNum5->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum6
			// 
			this->buttonNum6->BackColor = System::Drawing::Color::Gray;
			this->buttonNum6->FlatAppearance->BorderSize = 0;
			this->buttonNum6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum6->ForeColor = System::Drawing::Color::White;
			this->buttonNum6->Location = System::Drawing::Point(256, 481);
			this->buttonNum6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum6->Name = L"buttonNum6";
			this->buttonNum6->Size = System::Drawing::Size(116, 110);
			this->buttonNum6->TabIndex = 8;
			this->buttonNum6->Text = L"6";
			this->buttonNum6->UseVisualStyleBackColor = false;
			this->buttonNum6->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum1
			// 
			this->buttonNum1->BackColor = System::Drawing::Color::Gray;
			this->buttonNum1->FlatAppearance->BorderSize = 0;
			this->buttonNum1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum1->ForeColor = System::Drawing::Color::White;
			this->buttonNum1->Location = System::Drawing::Point(12, 366);
			this->buttonNum1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum1->Name = L"buttonNum1";
			this->buttonNum1->Size = System::Drawing::Size(116, 110);
			this->buttonNum1->TabIndex = 9;
			this->buttonNum1->Text = L"1";
			this->buttonNum1->UseVisualStyleBackColor = false;
			this->buttonNum1->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum2
			// 
			this->buttonNum2->BackColor = System::Drawing::Color::Gray;
			this->buttonNum2->FlatAppearance->BorderSize = 0;
			this->buttonNum2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum2->ForeColor = System::Drawing::Color::White;
			this->buttonNum2->Location = System::Drawing::Point(133, 366);
			this->buttonNum2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum2->Name = L"buttonNum2";
			this->buttonNum2->Size = System::Drawing::Size(116, 110);
			this->buttonNum2->TabIndex = 10;
			this->buttonNum2->Text = L"2";
			this->buttonNum2->UseVisualStyleBackColor = false;
			this->buttonNum2->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonNum3
			// 
			this->buttonNum3->BackColor = System::Drawing::Color::Gray;
			this->buttonNum3->FlatAppearance->BorderSize = 0;
			this->buttonNum3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNum3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonNum3->ForeColor = System::Drawing::Color::White;
			this->buttonNum3->Location = System::Drawing::Point(256, 366);
			this->buttonNum3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonNum3->Name = L"buttonNum3";
			this->buttonNum3->Size = System::Drawing::Size(116, 110);
			this->buttonNum3->TabIndex = 11;
			this->buttonNum3->Text = L"3";
			this->buttonNum3->UseVisualStyleBackColor = false;
			this->buttonNum3->Click += gcnew System::EventHandler(this, &MyForm::buttonNum_Click);
			// 
			// buttonClear
			// 
			this->buttonClear->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonClear->FlatAppearance->BorderSize = 0;
			this->buttonClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 34, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClear->ForeColor = System::Drawing::Color::White;
			this->buttonClear->Location = System::Drawing::Point(12, 249);
			this->buttonClear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonClear->Name = L"buttonClear";
			this->buttonClear->Size = System::Drawing::Size(116, 110);
			this->buttonClear->TabIndex = 12;
			this->buttonClear->Text = L"C";
			this->buttonClear->UseVisualStyleBackColor = false;
			this->buttonClear->Click += gcnew System::EventHandler(this, &MyForm::buttonClear_Click);
			// 
			// buttonClearN
			// 
			this->buttonClearN->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonClearN->FlatAppearance->BorderSize = 0;
			this->buttonClearN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClearN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearN->ForeColor = System::Drawing::Color::White;
			this->buttonClearN->Location = System::Drawing::Point(133, 249);
			this->buttonClearN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonClearN->Name = L"buttonClearN";
			this->buttonClearN->Size = System::Drawing::Size(116, 110);
			this->buttonClearN->TabIndex = 13;
			this->buttonClearN->Text = L"⌫";
			this->buttonClearN->UseVisualStyleBackColor = false;
			this->buttonClearN->Click += gcnew System::EventHandler(this, &MyForm::buttonClearN_Click);
			// 
			// buttonPow
			// 
			this->buttonPow->BackColor = System::Drawing::Color::SteelBlue;
			this->buttonPow->FlatAppearance->BorderSize = 0;
			this->buttonPow->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPow->ForeColor = System::Drawing::Color::White;
			this->buttonPow->Location = System::Drawing::Point(256, 249);
			this->buttonPow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonPow->Name = L"buttonPow";
			this->buttonPow->Size = System::Drawing::Size(116, 110);
			this->buttonPow->TabIndex = 14;
			this->buttonPow->Text = L"^";
			this->buttonPow->UseVisualStyleBackColor = false;
			this->buttonPow->Click += gcnew System::EventHandler(this, &MyForm::buttonPow_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::Color::Blue;
			this->buttonDivide->FlatAppearance->BorderSize = 0;
			this->buttonDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDivide->ForeColor = System::Drawing::Color::White;
			this->buttonDivide->Location = System::Drawing::Point(379, 713);
			this->buttonDivide->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(116, 110);
			this->buttonDivide->TabIndex = 15;
			this->buttonDivide->Text = L"÷";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::Color::Blue;
			this->buttonMultiply->FlatAppearance->BorderSize = 0;
			this->buttonMultiply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 67, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMultiply->ForeColor = System::Drawing::Color::White;
			this->buttonMultiply->Location = System::Drawing::Point(379, 597);
			this->buttonMultiply->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(116, 110);
			this->buttonMultiply->TabIndex = 16;
			this->buttonMultiply->Text = L"×";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::Color::Blue;
			this->buttonMinus->FlatAppearance->BorderSize = 0;
			this->buttonMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMinus->ForeColor = System::Drawing::Color::White;
			this->buttonMinus->Location = System::Drawing::Point(379, 481);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(116, 110);
			this->buttonMinus->TabIndex = 17;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::Blue;
			this->buttonPlus->FlatAppearance->BorderSize = 0;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->ForeColor = System::Drawing::Color::White;
			this->buttonPlus->Location = System::Drawing::Point(379, 366);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(116, 110);
			this->buttonPlus->TabIndex = 18;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonPercent
			// 
			this->buttonPercent->BackColor = System::Drawing::Color::Blue;
			this->buttonPercent->FlatAppearance->BorderSize = 0;
			this->buttonPercent->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPercent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPercent->ForeColor = System::Drawing::Color::White;
			this->buttonPercent->Location = System::Drawing::Point(379, 249);
			this->buttonPercent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->buttonPercent->Name = L"buttonPercent";
			this->buttonPercent->Size = System::Drawing::Size(116, 110);
			this->buttonPercent->TabIndex = 20;
			this->buttonPercent->Text = L"%";
			this->buttonPercent->UseVisualStyleBackColor = false;
			this->buttonPercent->Click += gcnew System::EventHandler(this, &MyForm::buttonPercent_Click);
			// 
			// resultlabel
			// 
			this->resultlabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 45, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultlabel->ForeColor = System::Drawing::Color::Black;
			this->resultlabel->Location = System::Drawing::Point(16, 74);
			this->resultlabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->resultlabel->Name = L"resultlabel";
			this->resultlabel->Size = System::Drawing::Size(479, 103);
			this->resultlabel->TabIndex = 21;
			this->resultlabel->Text = L"0";
			this->resultlabel->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Azure;
			this->ClientSize = System::Drawing::Size(507, 834);
			this->Controls->Add(this->resultlabel);
			this->Controls->Add(this->buttonPercent);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonPow);
			this->Controls->Add(this->buttonClearN);
			this->Controls->Add(this->buttonClear);
			this->Controls->Add(this->buttonNum3);
			this->Controls->Add(this->buttonNum2);
			this->Controls->Add(this->buttonNum1);
			this->Controls->Add(this->buttonNum6);
			this->Controls->Add(this->buttonNum5);
			this->Controls->Add(this->buttonNum4);
			this->Controls->Add(this->buttonNum9);
			this->Controls->Add(this->buttonNum8);
			this->Controls->Add(this->buttonNum7);
			this->Controls->Add(this->buttonEqual);
			this->Controls->Add(this->buttonNum0);
			this->Controls->Add(this->buttonDot);
			this->ForeColor = System::Drawing::Color::White;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: double firstN, secondN;
		   char logic;
		   double equal;
		   bool isCalculate = false;
		   int firstNI;
		   int secondNI;
	private: System::Void buttonNum_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ button = safe_cast<Button^>(sender);
		if (this->resultlabel->Text == "0" || isCalculate)
		{
			this->resultlabel->Text = button->Text;
			isCalculate = false;
		}
		else
		{
			if (this->resultlabel->Text->Length < 9)
			{
				this->resultlabel->Text += button->Text;
			}
		}
	}
	private: 
	System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '+';
		this->resultlabel->Text = L"0";
	}

	System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '-';
		this->resultlabel->Text = L"0";
	}

	System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '*';
		this->resultlabel->Text = L"0";
	}
	
	System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '/';
		this->resultlabel->Text = L"0";
	}

	System::Void buttonPercent_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '%';
		this->resultlabel->Text = L"0";
	}

	System::Void buttonPow_Click(System::Object^ sender, System::EventArgs^ e) {
		firstN = System::Convert::ToDouble(this->resultlabel->Text);
		logic = '^';
		this->resultlabel->Text = L"0";
	}

	private: double algorithm(double firstN, double secondN, char logic, int firstNI, int secondNI) {
		firstNI = Convert::ToInt32(firstN);
		secondNI = Convert::ToInt32(secondN);
		switch (logic)
		{
			case '+': return firstN + secondN; break;
			case '-': return firstN - secondN; break;
			case '*': return firstN * secondN; break;
			case '/': if (secondN == 0)
			{
				return -1.11111; break;
			}
			else
			{
				return firstN / secondN; break;
			}
			case '%': if (firstNI % secondNI)
			{
				return firstNI % secondNI;
			}
			case '^': return Math::Pow(firstN, secondN);
		}
	}

	private: System::Void buttonEqual_Click(System::Object^ sender, System::EventArgs^ e) {
		secondN = System::Convert::ToDouble(this->resultlabel->Text);
		equal = algorithm(firstN, secondN, logic, firstNI, secondNI);
		this->resultlabel->Text = System::Convert::ToString(equal);
		if (equal == -1.11111)
		{
			this->resultlabel->Text = L"Error!";
		}
		isCalculate = true;
	}

	private: System::Void buttonDot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!resultlabel->Text->Contains(","))
		{
			resultlabel->Text += ",";
		}
	}

	private: System::Void buttonClearN_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!System::String::IsNullOrEmpty(this->resultlabel->Text))
		{
			this->resultlabel->Text = this->resultlabel->Text->Substring(0, this->resultlabel->Text->Length - 1);
		}
	}

	private: System::Void buttonClear_Click(System::Object^ sender, System::EventArgs^ e) {
		this->resultlabel->Text = L"0";
	}
};
}
