#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(13, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(323, 45);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(13, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 1;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnBack__Space_click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(94, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 1;
			this->button2->Text = L"C";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::BtnClear_click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(175, 64);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 1;
			this->button3->Text = L"CE";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::BtnClear_Entry_click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(256, 64);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 1;
			this->button4->Text = L"±";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::BtnPlus_Minus_Click);
			// 
			// button5
			// 
			this->button5->AccessibleName = L"Btn7";
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(13, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 1;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button6
			// 
			this->button6->AccessibleName = L"Btn8";
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(94, 150);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 1;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button7
			// 
			this->button7->AccessibleName = L"Btn9";
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(175, 150);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 1;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(256, 150);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 1;
			this->button8->Text = L"+";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->AccessibleName = L"Btn4";
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(13, 236);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 1;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button10
			// 
			this->button10->AccessibleName = L"Btn5";
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->BackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::White;
			this->button10->Location = System::Drawing::Point(94, 236);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 1;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button11
			// 
			this->button11->AccessibleName = L"Btn6";
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button11->BackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(175, 236);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 1;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			this->button11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::Color::White;
			this->button12->Location = System::Drawing::Point(256, 236);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 1;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterOperator);
			// 
			// button13
			// 
			this->button13->AccessibleName = L"Btn1";
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::White;
			this->button13->Location = System::Drawing::Point(13, 322);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 1;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button14
			// 
			this->button14->AccessibleName = L"Btn2";
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::White;
			this->button14->Location = System::Drawing::Point(94, 322);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 80);
			this->button14->TabIndex = 1;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button15
			// 
			this->button15->AccessibleName = L"Btn3";
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->BorderSize = 0;
			this->button15->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::White;
			this->button15->Location = System::Drawing::Point(175, 322);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 1;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->BackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->BorderSize = 0;
			this->button16->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::White;
			this->button16->Location = System::Drawing::Point(256, 322);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 1;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterOperator);
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::White;
			this->button17->Location = System::Drawing::Point(12, 408);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 1;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterNumber);
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button18->BackColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->BorderSize = 0;
			this->button18->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::White;
			this->button18->Location = System::Drawing::Point(93, 408);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 1;
			this->button18->Text = L".";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::btnDecimal_click);
			// 
			// button19
			// 
			this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button19->BackColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->BorderSize = 0;
			this->button19->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::White;
			this->button19->Location = System::Drawing::Point(174, 408);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 80);
			this->button19->TabIndex = 1;
			this->button19->Text = L"=";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::btnEquals_Enter);
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button20->BackColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->BorderSize = 0;
			this->button20->FlatAppearance->CheckedBackColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::White;
			this->button20->Location = System::Drawing::Point(255, 408);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 80);
			this->button20->TabIndex = 1;
			this->button20->Text = L"/";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(347, 492);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void EnterNumber(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (textBox1->Text == "0")
	{
		textBox1->Text = Numbers->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textBox1->Text);
	textBox1->Text = "";
	operators = NumbersOp->Text;
}
private: System::Void btnDecimal_click(System::Object^  sender, System::EventArgs^  e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void btnEquals_Enter(System::Object^  sender, System::EventArgs^  e) {
	secondDigit = Double::Parse(textBox1->Text);

	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}

	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}

	else if (operators == "*")
	{
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void BtnClear_click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
}
private: System::Void BtnClear_Entry_click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "0";
}
private: System::Void BtnPlus_Minus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void btnBack__Space_click(System::Object^  sender, System::EventArgs^  e) {
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
	if (textBox1->Text=="")
	{
		textBox1->Text = "0";
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
