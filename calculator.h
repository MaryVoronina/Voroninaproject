#pragma once

namespace Voroninaproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for calculator
	/// </summary>
	public ref class calculator : public System::Windows::Forms::Form
	{
	public:
		calculator(void)
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
		~calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Button^ button_power;

	private: System::Windows::Forms::Button^ button_sqrt;

	private: System::Windows::Forms::Button^ button_divide;

	private: System::Windows::Forms::Button^ button_multip;

	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button_plus;
	private: System::Windows::Forms::Button^ button_changer;


	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button_coma;


	private: System::Windows::Forms::Button^ button_equal;

	private: System::Windows::Forms::Button^ button_CE;
	private: System::Windows::Forms::Button^ button_C;
	private: System::Windows::Forms::Button^ button_erase;





	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button_MC;
	private: System::Windows::Forms::Button^ button_MR;
	private: System::Windows::Forms::Button^ button_MS;



	private: System::Windows::Forms::Button^ button_Mplus;
	private: System::Windows::Forms::Button^ button_Mminus;
	private: System::Windows::Forms::TextBox^ memory0;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button_power = (gcnew System::Windows::Forms::Button());
			this->button_sqrt = (gcnew System::Windows::Forms::Button());
			this->button_divide = (gcnew System::Windows::Forms::Button());
			this->button_multip = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button_changer = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button_coma = (gcnew System::Windows::Forms::Button());
			this->button_equal = (gcnew System::Windows::Forms::Button());
			this->button_CE = (gcnew System::Windows::Forms::Button());
			this->button_C = (gcnew System::Windows::Forms::Button());
			this->button_erase = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button_MC = (gcnew System::Windows::Forms::Button());
			this->button_MR = (gcnew System::Windows::Forms::Button());
			this->button_MS = (gcnew System::Windows::Forms::Button());
			this->button_Mplus = (gcnew System::Windows::Forms::Button());
			this->button_Mminus = (gcnew System::Windows::Forms::Button());
			this->memory0 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(192, 602);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 68);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(272, 602);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 68);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(351, 602);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 68);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(192, 525);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 68);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(272, 525);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 68);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(351, 525);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 68);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(192, 448);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 68);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(272, 448);
			this->button8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 68);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(351, 448);
			this->button9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 68);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &calculator::button9_Click);
			// 
			// button_power
			// 
			this->button_power->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_power->Location = System::Drawing::Point(272, 371);
			this->button_power->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_power->Name = L"button_power";
			this->button_power->Size = System::Drawing::Size(70, 68);
			this->button_power->TabIndex = 10;
			this->button_power->Text = L"x^2";
			this->button_power->UseVisualStyleBackColor = false;
			this->button_power->Click += gcnew System::EventHandler(this, &calculator::button_power_Click);
			// 
			// button_sqrt
			// 
			this->button_sqrt->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_sqrt->Location = System::Drawing::Point(351, 371);
			this->button_sqrt->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(70, 68);
			this->button_sqrt->TabIndex = 11;
			this->button_sqrt->Text = L"sqrt(x)";
			this->button_sqrt->UseVisualStyleBackColor = false;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &calculator::button_sqrt_Click);
			// 
			// button_divide
			// 
			this->button_divide->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_divide->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_divide->Location = System::Drawing::Point(430, 371);
			this->button_divide->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(70, 68);
			this->button_divide->TabIndex = 12;
			this->button_divide->Text = L":";
			this->button_divide->UseVisualStyleBackColor = false;
			this->button_divide->Click += gcnew System::EventHandler(this, &calculator::button_divide_Click);
			// 
			// button_multip
			// 
			this->button_multip->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_multip->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_multip->Location = System::Drawing::Point(430, 448);
			this->button_multip->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_multip->Name = L"button_multip";
			this->button_multip->Size = System::Drawing::Size(70, 68);
			this->button_multip->TabIndex = 13;
			this->button_multip->Text = L"*";
			this->button_multip->UseVisualStyleBackColor = false;
			this->button_multip->Click += gcnew System::EventHandler(this, &calculator::button_multip_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->Location = System::Drawing::Point(430, 525);
			this->button_minus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(70, 68);
			this->button_minus->TabIndex = 14;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &calculator::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->Location = System::Drawing::Point(430, 602);
			this->button_plus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(70, 68);
			this->button_plus->TabIndex = 15;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &calculator::button_plus_Click);
			// 
			// button_changer
			// 
			this->button_changer->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_changer->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_changer->Location = System::Drawing::Point(192, 678);
			this->button_changer->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_changer->Name = L"button_changer";
			this->button_changer->Size = System::Drawing::Size(70, 68);
			this->button_changer->TabIndex = 16;
			this->button_changer->Text = L"+/-";
			this->button_changer->UseVisualStyleBackColor = false;
			this->button_changer->Click += gcnew System::EventHandler(this, &calculator::button_changer_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(272, 678);
			this->button0->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(70, 68);
			this->button0->TabIndex = 17;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &calculator::button0_Click);
			// 
			// button_coma
			// 
			this->button_coma->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_coma->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_coma->Location = System::Drawing::Point(351, 678);
			this->button_coma->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_coma->Name = L"button_coma";
			this->button_coma->Size = System::Drawing::Size(70, 68);
			this->button_coma->TabIndex = 18;
			this->button_coma->Text = L",";
			this->button_coma->UseVisualStyleBackColor = false;
			this->button_coma->Click += gcnew System::EventHandler(this, &calculator::button_coma_Click);
			// 
			// button_equal
			// 
			this->button_equal->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->button_equal->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equal->Location = System::Drawing::Point(430, 678);
			this->button_equal->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(70, 68);
			this->button_equal->TabIndex = 19;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = false;
			this->button_equal->Click += gcnew System::EventHandler(this, &calculator::button_equal_Click);
			// 
			// button_CE
			// 
			this->button_CE->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_CE->Location = System::Drawing::Point(272, 294);
			this->button_CE->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_CE->Name = L"button_CE";
			this->button_CE->Size = System::Drawing::Size(70, 68);
			this->button_CE->TabIndex = 21;
			this->button_CE->Text = L"CE";
			this->button_CE->UseVisualStyleBackColor = false;
			this->button_CE->Click += gcnew System::EventHandler(this, &calculator::button_CE_Click);
			// 
			// button_C
			// 
			this->button_C->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_C->Location = System::Drawing::Point(351, 294);
			this->button_C->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(70, 68);
			this->button_C->TabIndex = 22;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = false;
			this->button_C->Click += gcnew System::EventHandler(this, &calculator::button_C_Click);
			// 
			// button_erase
			// 
			this->button_erase->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button_erase->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_erase->Location = System::Drawing::Point(430, 294);
			this->button_erase->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_erase->Name = L"button_erase";
			this->button_erase->Size = System::Drawing::Size(70, 68);
			this->button_erase->TabIndex = 23;
			this->button_erase->Text = L"⌫";
			this->button_erase->UseVisualStyleBackColor = false;
			this->button_erase->Click += gcnew System::EventHandler(this, &calculator::button_erase_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(192, 214);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(307, 26);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(192, 157);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(307, 26);
			this->textBox2->TabIndex = 25;
			// 
			// button_MC
			// 
			this->button_MC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_MC->Location = System::Drawing::Point(528, 294);
			this->button_MC->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_MC->Name = L"button_MC";
			this->button_MC->Size = System::Drawing::Size(69, 66);
			this->button_MC->TabIndex = 26;
			this->button_MC->Text = L"MC";
			this->button_MC->UseVisualStyleBackColor = false;
			this->button_MC->Click += gcnew System::EventHandler(this, &calculator::button_MC_Click);
			// 
			// button_MR
			// 
			this->button_MR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_MR->Location = System::Drawing::Point(608, 294);
			this->button_MR->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_MR->Name = L"button_MR";
			this->button_MR->Size = System::Drawing::Size(69, 66);
			this->button_MR->TabIndex = 27;
			this->button_MR->Text = L"MR";
			this->button_MR->UseVisualStyleBackColor = false;
			this->button_MR->Click += gcnew System::EventHandler(this, &calculator::button_MR_Click);
			// 
			// button_MS
			// 
			this->button_MS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button_MS->Location = System::Drawing::Point(686, 295);
			this->button_MS->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_MS->Name = L"button_MS";
			this->button_MS->Size = System::Drawing::Size(69, 66);
			this->button_MS->TabIndex = 28;
			this->button_MS->Text = L"MS";
			this->button_MS->UseVisualStyleBackColor = false;
			this->button_MS->Click += gcnew System::EventHandler(this, &calculator::button_MS_Click);
			// 
			// button_Mplus
			// 
			this->button_Mplus->BackColor = System::Drawing::Color::Yellow;
			this->button_Mplus->Location = System::Drawing::Point(567, 369);
			this->button_Mplus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Mplus->Name = L"button_Mplus";
			this->button_Mplus->Size = System::Drawing::Size(69, 66);
			this->button_Mplus->TabIndex = 29;
			this->button_Mplus->Text = L"M+";
			this->button_Mplus->UseVisualStyleBackColor = false;
			this->button_Mplus->Click += gcnew System::EventHandler(this, &calculator::button_Mplus_Click);
			// 
			// button_Mminus
			// 
			this->button_Mminus->BackColor = System::Drawing::Color::Yellow;
			this->button_Mminus->Location = System::Drawing::Point(645, 371);
			this->button_Mminus->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Mminus->Name = L"button_Mminus";
			this->button_Mminus->Size = System::Drawing::Size(69, 66);
			this->button_Mminus->TabIndex = 30;
			this->button_Mminus->Text = L"M-";
			this->button_Mminus->UseVisualStyleBackColor = false;
			this->button_Mminus->Click += gcnew System::EventHandler(this, &calculator::button_Mminus_Click);
			// 
			// memory0
			// 
			this->memory0->Location = System::Drawing::Point(527, 220);
			this->memory0->Name = L"memory0";
			this->memory0->Size = System::Drawing::Size(227, 26);
			this->memory0->TabIndex = 31;
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1019, 783);
			this->Controls->Add(this->memory0);
			this->Controls->Add(this->button_Mminus);
			this->Controls->Add(this->button_Mplus);
			this->Controls->Add(this->button_MS);
			this->Controls->Add(this->button_MR);
			this->Controls->Add(this->button_MC);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button_erase);
			this->Controls->Add(this->button_C);
			this->Controls->Add(this->button_CE);
			this->Controls->Add(this->button_equal);
			this->Controls->Add(this->button_coma);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button_changer);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_multip);
			this->Controls->Add(this->button_divide);
			this->Controls->Add(this->button_sqrt);
			this->Controls->Add(this->button_power);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"calculator";
			this->Text = L"calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:double N1;
	private:double N2;
	private: double res;
	private:char operation_sign;
	private:bool click_checker = false, equal_pressed = false, last_click_checker=false;
	private:double memory;
	private:bool last_was_dig = false;
	private:bool last_was_operation = false;
	private:bool last_was_equal = false;
	private:char prev_operation;
	private:bool error_checker = false;
	private: double do_operation()
	{
		switch (operation_sign)
		{
		case '+':
			return N1 + N2;
		case '-':
			return N1 - N2;
		case '*':
			return N1 * N2;
		case '/':
			if (N2 == 0)
				return Double::NaN;
			return N1 / N2;
		}
		return 0;

	}


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "1";
		}
		else
		{
			textBox1->Text = textBox1->Text + "1";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "2";
		}
		else
		{
			textBox1->Text = textBox1->Text + "2";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "3";
		}
		else
		{
			textBox1->Text = textBox1->Text + "3";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "4";
		}
		else
		{
			textBox1->Text = textBox1->Text + "4";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "5";
		}
		else
		{
			textBox1->Text = textBox1->Text + "5";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "6";
		}
		else
		{
			textBox1->Text = textBox1->Text + "6";
		}
		last_click_checker = false;

		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "7";
		}
		else
		{
			textBox1->Text = textBox1->Text + "7";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "8";
		}
		else
		{
			textBox1->Text = textBox1->Text + "8";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "9";
		}
		else
		{
			textBox1->Text = textBox1->Text + "9";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0" || last_click_checker)
		{
			textBox1->Text = "0";
		}
		else
		{
			textBox1->Text = textBox1->Text + "0";
		}
		last_click_checker = false;
		last_was_dig = true;
		last_was_operation = false;
	}


	private:void get_operation()
	{
		double N_tempor = Double::Parse(textBox1->Text);
		if (last_was_operation)
		{
			textBox2->Text = Convert::ToString(N1) + " " + (Char)operation_sign;
		}
		else if(click_checker && last_was_dig)
		{
			N2 = N_tempor;
			res = do_operation();
			textBox2->Text =  Convert::ToString(res) + " " + (Char)operation_sign;
			textBox1->Text = Convert::ToString(res);
			N1 = res;
		}
		else
		{
			N1 = N_tempor;
			textBox2->Text = textBox1->Text + " " + (Char)operation_sign;
			click_checker = true;
		}
		click_checker = true;
		prev_operation = operation_sign;
		last_was_operation = true;
		last_was_dig=true;
		last_was_equal = true;
		last_click_checker = true;
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation_sign = '+';
		get_operation();
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation_sign = '-';
		get_operation();
	}
	private: System::Void button_multip_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation_sign = '*';
		get_operation();
	}
	private: System::Void button_divide_Click(System::Object^ sender, System::EventArgs^ e)
	{
		operation_sign = '/';
		get_operation();
	}
	private: void toggle_switch(bool toggle)
	{
		button_plus->Enabled = toggle;
		button_minus->Enabled = toggle;
		button_coma->Enabled = toggle;
		button_multip->Enabled = toggle;
		button_divide->Enabled = toggle;
		button_changer->Enabled = toggle;
		button_power->Enabled = toggle;
		button_sqrt->Enabled = toggle;
		button_equal->Enabled = toggle;
	}
	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
		if (equal_pressed)
		{
			N1 = Double::Parse(textBox1->Text);
			textBox2->Text = textBox1->Text + textBox2->Text->Remove(0, textBox2->Text->IndexOf(' '));
		}
		else
		{
			textBox2->Text = textBox2->Text + " " + textBox1->Text + " " + "=";
			N2 = Double::Parse(textBox1->Text);
		}
		res = do_operation();
		if (res == Double::NaN)
		{
			textBox1->Text = "Error";
			error_checker = true;
			toggle_switch(false);
			return;
		}
		else
		{
			textBox1->Text = Convert::ToString(res);
		}
		click_checker = false;
		last_click_checker = false;
		equal_pressed = true;
	}


	private: System::Void button_C_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
		last_click_checker = false;
	}
	private: System::Void button_coma_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!textBox1->Text->Contains(button_coma->Text))
			textBox1->Text = textBox1->Text + Convert::ToString(button_coma->Text);
	}
	private: System::Void button_CE_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
		textBox2->Text = "";
		last_click_checker = false;
	}

	private: System::Void button_changer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text != "0")
		{
			if (textBox1->Text->Substring(0, 1) == "-")
				textBox1->Text = textBox1->Text->Remove(0, 1);
			else textBox1->Text = "-" + textBox1->Text;
		}
	}

	private: System::Void button_erase_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text->Length > 0)
		{
			textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1);
		}
	}
	private: System::Void button_power_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox2->Text = "sqr(" + textBox1->Text + ")";
		N1 = Double::Parse(textBox1->Text);
		res = Math::Pow(N1, 2);
		textBox1->Text = Convert::ToString(res);
	}
	private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox2->Text = "sqrt(" + textBox1->Text + ")";
		N1= Double::Parse(textBox1->Text);
		if(N1<0)
		{
			textBox1->Text = "Error";
			error_checker = true;
			toggle_switch(false);
			return;
		}
		else
		{
			res = Math::Sqrt(N1);
			textBox1->Text = Convert::ToString(res);
		}
	}


	private: System::Void button_MR_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		textBox1->Text = Convert::ToString(memory);
	}
	private: System::Void button_MC_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		memory = 0;
		memory0->Text = "0";
		button_MR->Enabled = false;
		button_MC->Enabled = false;
	}

	private: System::Void button_MS_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		memory = Double::Parse(textBox1->Text);
		memory0->Text = Convert::ToString(memory);
		button_MR->Enabled = true;
		button_MC->Enabled = true;
	}
	private: System::Void button_Mplus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		memory += Double::Parse(textBox1->Text);
		memory0->Text = Convert::ToString(memory);
		button_MR->Enabled = true;
		button_MC->Enabled = true;
	}
		   
	private: System::Void button_Mminus_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		memory -= Double::Parse(textBox1->Text);
		memory0->Text = Convert::ToString(memory);
		button_MR->Enabled = true;
		button_MC->Enabled = true;
	}
};
}
