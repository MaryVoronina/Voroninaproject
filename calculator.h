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
	private: System::Windows::Forms::Button^ button10;
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
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

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
			this->button10 = (gcnew System::Windows::Forms::Button());
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
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(128, 391);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 44);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &calculator::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(181, 391);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 44);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &calculator::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(234, 391);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 44);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &calculator::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(128, 341);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 44);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(181, 341);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 44);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(234, 341);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 44);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(128, 291);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 44);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(181, 291);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 44);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(234, 291);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 44);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(128, 241);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 44);
			this->button10->TabIndex = 9;
			this->button10->Text = L"1/x";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button_power
			// 
			this->button_power->Location = System::Drawing::Point(181, 241);
			this->button_power->Name = L"button_power";
			this->button_power->Size = System::Drawing::Size(47, 44);
			this->button_power->TabIndex = 10;
			this->button_power->Text = L"x^2";
			this->button_power->UseVisualStyleBackColor = true;
			this->button_power->Click += gcnew System::EventHandler(this, &calculator::button_power_Click);
			// 
			// button_sqrt
			// 
			this->button_sqrt->Location = System::Drawing::Point(234, 241);
			this->button_sqrt->Name = L"button_sqrt";
			this->button_sqrt->Size = System::Drawing::Size(47, 44);
			this->button_sqrt->TabIndex = 11;
			this->button_sqrt->Text = L"sqrt(x)";
			this->button_sqrt->UseVisualStyleBackColor = true;
			this->button_sqrt->Click += gcnew System::EventHandler(this, &calculator::button_sqrt_Click);
			// 
			// button_divide
			// 
			this->button_divide->Location = System::Drawing::Point(287, 241);
			this->button_divide->Name = L"button_divide";
			this->button_divide->Size = System::Drawing::Size(47, 44);
			this->button_divide->TabIndex = 12;
			this->button_divide->Text = L":";
			this->button_divide->UseVisualStyleBackColor = true;
			this->button_divide->Click += gcnew System::EventHandler(this, &calculator::button_divide_Click);
			// 
			// button_multip
			// 
			this->button_multip->Location = System::Drawing::Point(287, 291);
			this->button_multip->Name = L"button_multip";
			this->button_multip->Size = System::Drawing::Size(47, 44);
			this->button_multip->TabIndex = 13;
			this->button_multip->Text = L"*";
			this->button_multip->UseVisualStyleBackColor = true;
			this->button_multip->Click += gcnew System::EventHandler(this, &calculator::button_multip_Click);
			// 
			// button_minus
			// 
			this->button_minus->Location = System::Drawing::Point(287, 341);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(47, 44);
			this->button_minus->TabIndex = 14;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = true;
			this->button_minus->Click += gcnew System::EventHandler(this, &calculator::button_minus_Click);
			// 
			// button_plus
			// 
			this->button_plus->Location = System::Drawing::Point(287, 391);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(47, 44);
			this->button_plus->TabIndex = 15;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = true;
			this->button_plus->Click += gcnew System::EventHandler(this, &calculator::button_plus_Click);
			// 
			// button_changer
			// 
			this->button_changer->Location = System::Drawing::Point(128, 441);
			this->button_changer->Name = L"button_changer";
			this->button_changer->Size = System::Drawing::Size(47, 44);
			this->button_changer->TabIndex = 16;
			this->button_changer->Text = L"+/-";
			this->button_changer->UseVisualStyleBackColor = true;
			this->button_changer->Click += gcnew System::EventHandler(this, &calculator::button_changer_Click);
			// 
			// button0
			// 
			this->button0->Location = System::Drawing::Point(181, 441);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(47, 44);
			this->button0->TabIndex = 17;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &calculator::button0_Click);
			// 
			// button_coma
			// 
			this->button_coma->Location = System::Drawing::Point(234, 441);
			this->button_coma->Name = L"button_coma";
			this->button_coma->Size = System::Drawing::Size(47, 44);
			this->button_coma->TabIndex = 18;
			this->button_coma->Text = L",";
			this->button_coma->UseVisualStyleBackColor = true;
			this->button_coma->Click += gcnew System::EventHandler(this, &calculator::button_coma_Click);
			// 
			// button_equal
			// 
			this->button_equal->Location = System::Drawing::Point(287, 441);
			this->button_equal->Name = L"button_equal";
			this->button_equal->Size = System::Drawing::Size(47, 44);
			this->button_equal->TabIndex = 19;
			this->button_equal->Text = L"=";
			this->button_equal->UseVisualStyleBackColor = true;
			this->button_equal->Click += gcnew System::EventHandler(this, &calculator::button_equal_Click);
			// 
			// button_CE
			// 
			this->button_CE->Location = System::Drawing::Point(181, 191);
			this->button_CE->Name = L"button_CE";
			this->button_CE->Size = System::Drawing::Size(47, 44);
			this->button_CE->TabIndex = 21;
			this->button_CE->Text = L"CE";
			this->button_CE->UseVisualStyleBackColor = true;
			this->button_CE->Click += gcnew System::EventHandler(this, &calculator::button_CE_Click);
			// 
			// button_C
			// 
			this->button_C->Location = System::Drawing::Point(234, 191);
			this->button_C->Name = L"button_C";
			this->button_C->Size = System::Drawing::Size(47, 44);
			this->button_C->TabIndex = 22;
			this->button_C->Text = L"C";
			this->button_C->UseVisualStyleBackColor = true;
			this->button_C->Click += gcnew System::EventHandler(this, &calculator::button_C_Click);
			// 
			// button_erase
			// 
			this->button_erase->Location = System::Drawing::Point(287, 191);
			this->button_erase->Name = L"button_erase";
			this->button_erase->Size = System::Drawing::Size(47, 44);
			this->button_erase->TabIndex = 23;
			this->button_erase->Text = L"⌫";
			this->button_erase->UseVisualStyleBackColor = true;
			this->button_erase->Click += gcnew System::EventHandler(this, &calculator::button_erase_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 139);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 20);
			this->textBox1->TabIndex = 24;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(128, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(206, 20);
			this->textBox2->TabIndex = 25;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(352, 191);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(46, 43);
			this->button11->TabIndex = 26;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(405, 191);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(46, 43);
			this->button12->TabIndex = 27;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(457, 192);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(46, 43);
			this->button13->TabIndex = 28;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(378, 240);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(46, 43);
			this->button14->TabIndex = 29;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(430, 241);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(46, 43);
			this->button15->TabIndex = 30;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 509);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
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
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
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
		if (textBox1->Text == "0")
		{
			textBox1->Text = "1";
		}
		else
		{
			textBox1->Text = textBox1->Text + "1";
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "2";
		}
		else
		{
			textBox1->Text = textBox1->Text + "2";
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "3";
		}
		else
		{
			textBox1->Text = textBox1->Text + "3";
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "4";
		}
		else
		{
			textBox1->Text = textBox1->Text + "4";
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "5";
		}
		else
		{
			textBox1->Text = textBox1->Text + "5";
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "6";
		}
		else
		{
			textBox1->Text = textBox1->Text + "6";
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "7";
		}
		else
		{
			textBox1->Text = textBox1->Text + "7";
		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "8";
		}
		else
		{
			textBox1->Text = textBox1->Text + "8";
		}
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "9";
		}
		else
		{
			textBox1->Text = textBox1->Text + "9";
		}
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text == "0")
		{
			textBox1->Text = "0";
		}
		else
		{
			textBox1->Text = textBox1->Text + "0";
		}
	}


	private:void get_operation()
	{
		equal_pressed = false;
		double N_tempor = Double::Parse(textBox1->Text);
		if (last_click_checker)
		{
			textBox2->Text = textBox1->Text + " " + (Char)operation_sign;
		}
		else if(click_checker && N_tempor!=N1)
		{
			N2 = N_tempor;
			textBox2->Text = Convert::ToString(res) + " " + (Char)operation_sign;
			textBox1->Text = Convert::ToString(res);
		}
		else
		{
			N1 = N_tempor;
			textBox2->Text = textBox1->Text + " " + (Char)operation_sign;
			textBox1->Text = "";
			click_checker = true;
		}
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

	private: System::Void button_equal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!click_checker && !equal_pressed) return;
		if (equal_pressed)
		{
			N1 = Double::Parse(textBox1->Text);
			textBox2->Text = textBox2->Text + textBox2->Text->Remove(0, textBox2->Text->IndexOf(' '));
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
			return;
		}
		else
		{
			textBox1->Text = Convert::ToString(res);
		}
		click_checker = false;
		equal_pressed = true;
	}


	private: System::Void button_C_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox1->Text = "0";
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
	}

	private: System::Void button_changer_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (textBox1->Text != "0")
		{
			double num = Double::Parse(textBox1->Text);
			num = -num;
			textBox1->Text = Convert::ToString(num);
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
		double num = Double::Parse(textBox1->Text);
		num = Math::Pow(num, 2);
		textBox1->Text = Convert::ToString(num);
	}
	private: System::Void button_sqrt_Click(System::Object^ sender, System::EventArgs^ e)
	{
		textBox2->Text = "sqrt(" + textBox1->Text + ")";
		double num = Double::Parse(textBox1->Text);
		num = Math::Sqrt(num);
		textBox1->Text = Convert::ToString(num);
	}
	};
}
