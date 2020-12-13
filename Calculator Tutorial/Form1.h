#pragma once

namespace CLR_WindowsForms {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBackspace;
	private: System::Windows::Forms::TextBox^ resultBox;

	protected:

	protected:

	private: System::Windows::Forms::Button^ btnC;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::Button^ btnSwitchPosNeg;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btnPlus;







	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnMul;



	private: System::Windows::Forms::Button^ btn2;

	private: System::Windows::Forms::Button^ btn1;

	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btnMinus;


	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnEqual;
	private: System::Windows::Forms::Button^ btnDiv;



	private: System::Windows::Forms::Button^ btnDec;

	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::TextBox^ history;



	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
			void InitializeComponent(void)
			{
				this->btnBackspace = (gcnew System::Windows::Forms::Button());
				this->resultBox = (gcnew System::Windows::Forms::TextBox());
				this->btnC = (gcnew System::Windows::Forms::Button());
				this->btnCE = (gcnew System::Windows::Forms::Button());
				this->btnSwitchPosNeg = (gcnew System::Windows::Forms::Button());
				this->btn9 = (gcnew System::Windows::Forms::Button());
				this->btnPlus = (gcnew System::Windows::Forms::Button());
				this->btn8 = (gcnew System::Windows::Forms::Button());
				this->btn7 = (gcnew System::Windows::Forms::Button());
				this->btn3 = (gcnew System::Windows::Forms::Button());
				this->btnMul = (gcnew System::Windows::Forms::Button());
				this->btn2 = (gcnew System::Windows::Forms::Button());
				this->btn1 = (gcnew System::Windows::Forms::Button());
				this->btn6 = (gcnew System::Windows::Forms::Button());
				this->btnMinus = (gcnew System::Windows::Forms::Button());
				this->btn5 = (gcnew System::Windows::Forms::Button());
				this->btn4 = (gcnew System::Windows::Forms::Button());
				this->btnEqual = (gcnew System::Windows::Forms::Button());
				this->btnDiv = (gcnew System::Windows::Forms::Button());
				this->btnDec = (gcnew System::Windows::Forms::Button());
				this->btn0 = (gcnew System::Windows::Forms::Button());
				this->history = (gcnew System::Windows::Forms::TextBox());
				this->SuspendLayout();
				// 
				// btnBackspace
				// 
				this->btnBackspace->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnBackspace->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnBackspace->Location = System::Drawing::Point(8, 70);
				this->btnBackspace->Name = L"btnBackspace";
				this->btnBackspace->Size = System::Drawing::Size(80, 80);
				this->btnBackspace->TabIndex = 0;
				this->btnBackspace->Text = L"<x";
				this->btnBackspace->UseVisualStyleBackColor = true;
				this->btnBackspace->Click += gcnew System::EventHandler(this, &Form1::btnBackspace_Click);
				// 
				// resultBox
				// 
				this->resultBox->BackColor = System::Drawing::SystemColors::Window;
				this->resultBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
				this->resultBox->Cursor = System::Windows::Forms::Cursors::Default;
				this->resultBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->resultBox->Location = System::Drawing::Point(8, 22);
				this->resultBox->Multiline = true;
				this->resultBox->Name = L"resultBox";
				this->resultBox->ReadOnly = true;
				this->resultBox->Size = System::Drawing::Size(323, 42);
				this->resultBox->TabIndex = 1;
				this->resultBox->Text = L"0";
				this->resultBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				// 
				// btnC
				// 
				this->btnC->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnC->Location = System::Drawing::Point(89, 70);
				this->btnC->Name = L"btnC";
				this->btnC->Size = System::Drawing::Size(80, 80);
				this->btnC->TabIndex = 0;
				this->btnC->Text = L"C";
				this->btnC->UseVisualStyleBackColor = true;
				this->btnC->Click += gcnew System::EventHandler(this, &Form1::btnC_Click);
				// 
				// btnCE
				// 
				this->btnCE->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnCE->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnCE->Location = System::Drawing::Point(170, 70);
				this->btnCE->Name = L"btnCE";
				this->btnCE->Size = System::Drawing::Size(80, 80);
				this->btnCE->TabIndex = 0;
				this->btnCE->Text = L"CE";
				this->btnCE->UseVisualStyleBackColor = true;
				this->btnCE->Click += gcnew System::EventHandler(this, &Form1::btnCE_Click);
				// 
				// btnSwitchPosNeg
				// 
				this->btnSwitchPosNeg->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnSwitchPosNeg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnSwitchPosNeg->Location = System::Drawing::Point(251, 70);
				this->btnSwitchPosNeg->Name = L"btnSwitchPosNeg";
				this->btnSwitchPosNeg->Size = System::Drawing::Size(80, 80);
				this->btnSwitchPosNeg->TabIndex = 0;
				this->btnSwitchPosNeg->Text = L"-/+";
				this->btnSwitchPosNeg->UseVisualStyleBackColor = true;
				this->btnSwitchPosNeg->Click += gcnew System::EventHandler(this, &Form1::btnSwitchPosNeg_Click);
				// 
				// btn9
				// 
				this->btn9->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn9->Location = System::Drawing::Point(170, 156);
				this->btn9->Name = L"btn9";
				this->btn9->Size = System::Drawing::Size(80, 80);
				this->btn9->TabIndex = 2;
				this->btn9->Text = L"9";
				this->btn9->UseVisualStyleBackColor = true;
				this->btn9->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btnPlus
				// 
				this->btnPlus->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnPlus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnPlus->Location = System::Drawing::Point(251, 156);
				this->btnPlus->Name = L"btnPlus";
				this->btnPlus->Size = System::Drawing::Size(80, 80);
				this->btnPlus->TabIndex = 3;
				this->btnPlus->Text = L"+";
				this->btnPlus->UseVisualStyleBackColor = true;
				this->btnPlus->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
				// 
				// btn8
				// 
				this->btn8->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn8->Location = System::Drawing::Point(89, 156);
				this->btn8->Name = L"btn8";
				this->btn8->Size = System::Drawing::Size(80, 80);
				this->btn8->TabIndex = 4;
				this->btn8->Text = L"8";
				this->btn8->UseVisualStyleBackColor = true;
				this->btn8->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btn7
				// 
				this->btn7->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn7->Location = System::Drawing::Point(8, 156);
				this->btn7->Name = L"btn7";
				this->btn7->Size = System::Drawing::Size(80, 80);
				this->btn7->TabIndex = 5;
				this->btn7->Text = L"7";
				this->btn7->UseVisualStyleBackColor = true;
				this->btn7->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btn3
				// 
				this->btn3->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn3->Location = System::Drawing::Point(170, 328);
				this->btn3->Name = L"btn3";
				this->btn3->Size = System::Drawing::Size(80, 80);
				this->btn3->TabIndex = 10;
				this->btn3->Text = L"3";
				this->btn3->UseVisualStyleBackColor = true;
				this->btn3->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btnMul
				// 
				this->btnMul->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnMul->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnMul->Location = System::Drawing::Point(251, 328);
				this->btnMul->Name = L"btnMul";
				this->btnMul->Size = System::Drawing::Size(80, 80);
				this->btnMul->TabIndex = 11;
				this->btnMul->Text = L"X";
				this->btnMul->UseVisualStyleBackColor = true;
				this->btnMul->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
				// 
				// btn2
				// 
				this->btn2->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn2->Location = System::Drawing::Point(89, 328);
				this->btn2->Name = L"btn2";
				this->btn2->Size = System::Drawing::Size(80, 80);
				this->btn2->TabIndex = 12;
				this->btn2->Text = L"2";
				this->btn2->UseVisualStyleBackColor = true;
				this->btn2->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btn1
				// 
				this->btn1->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn1->Location = System::Drawing::Point(8, 328);
				this->btn1->Name = L"btn1";
				this->btn1->Size = System::Drawing::Size(80, 80);
				this->btn1->TabIndex = 13;
				this->btn1->Text = L"1";
				this->btn1->UseVisualStyleBackColor = true;
				this->btn1->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btn6
				// 
				this->btn6->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn6->Location = System::Drawing::Point(170, 242);
				this->btn6->Name = L"btn6";
				this->btn6->Size = System::Drawing::Size(80, 80);
				this->btn6->TabIndex = 6;
				this->btn6->Text = L"6";
				this->btn6->UseVisualStyleBackColor = true;
				this->btn6->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btnMinus
				// 
				this->btnMinus->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnMinus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnMinus->Location = System::Drawing::Point(251, 242);
				this->btnMinus->Name = L"btnMinus";
				this->btnMinus->Size = System::Drawing::Size(80, 80);
				this->btnMinus->TabIndex = 7;
				this->btnMinus->Text = L"-";
				this->btnMinus->UseVisualStyleBackColor = true;
				this->btnMinus->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
				// 
				// btn5
				// 
				this->btn5->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn5->Location = System::Drawing::Point(89, 242);
				this->btn5->Name = L"btn5";
				this->btn5->Size = System::Drawing::Size(80, 80);
				this->btn5->TabIndex = 8;
				this->btn5->Text = L"5";
				this->btn5->UseVisualStyleBackColor = true;
				this->btn5->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btn4
				// 
				this->btn4->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn4->Location = System::Drawing::Point(8, 242);
				this->btn4->Name = L"btn4";
				this->btn4->Size = System::Drawing::Size(80, 80);
				this->btn4->TabIndex = 9;
				this->btn4->Text = L"4";
				this->btn4->UseVisualStyleBackColor = true;
				this->btn4->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// btnEqual
				// 
				this->btnEqual->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnEqual->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnEqual->Location = System::Drawing::Point(170, 414);
				this->btnEqual->Name = L"btnEqual";
				this->btnEqual->Size = System::Drawing::Size(80, 80);
				this->btnEqual->TabIndex = 14;
				this->btnEqual->Text = L"=";
				this->btnEqual->UseVisualStyleBackColor = true;
				this->btnEqual->Click += gcnew System::EventHandler(this, &Form1::btnEqual_Click);
				// 
				// btnDiv
				// 
				this->btnDiv->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnDiv->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnDiv->Location = System::Drawing::Point(251, 414);
				this->btnDiv->Name = L"btnDiv";
				this->btnDiv->Size = System::Drawing::Size(80, 80);
				this->btnDiv->TabIndex = 15;
				this->btnDiv->Text = L"/";
				this->btnDiv->UseVisualStyleBackColor = true;
				this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::EnterOperator);
				// 
				// btnDec
				// 
				this->btnDec->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btnDec->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btnDec->Location = System::Drawing::Point(89, 414);
				this->btnDec->Name = L"btnDec";
				this->btnDec->Size = System::Drawing::Size(80, 80);
				this->btnDec->TabIndex = 16;
				this->btnDec->Text = L".";
				this->btnDec->UseVisualStyleBackColor = true;
				this->btnDec->Click += gcnew System::EventHandler(this, &Form1::btnDec_Click);
				// 
				// btn0
				// 
				this->btn0->Cursor = System::Windows::Forms::Cursors::Hand;
				this->btn0->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->btn0->Location = System::Drawing::Point(8, 414);
				this->btn0->Name = L"btn0";
				this->btn0->Size = System::Drawing::Size(80, 80);
				this->btn0->TabIndex = 17;
				this->btn0->Text = L"0";
				this->btn0->UseVisualStyleBackColor = true;
				this->btn0->Click += gcnew System::EventHandler(this, &Form1::EnterNumber);
				// 
				// history
				// 
				this->history->BorderStyle = System::Windows::Forms::BorderStyle::None;
				this->history->Cursor = System::Windows::Forms::Cursors::Arrow;
				this->history->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(0)));
				this->history->ForeColor = System::Drawing::SystemColors::WindowFrame;
				this->history->Location = System::Drawing::Point(8, 3);
				this->history->Name = L"history";
				this->history->Size = System::Drawing::Size(323, 15);
				this->history->TabIndex = 18;
				this->history->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
				// 
				// Form1
				// 
				this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
				this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				this->BackColor = System::Drawing::SystemColors::Window;
				this->ClientSize = System::Drawing::Size(340, 498);
				this->Controls->Add(this->history);
				this->Controls->Add(this->btnEqual);
				this->Controls->Add(this->btnDiv);
				this->Controls->Add(this->btnDec);
				this->Controls->Add(this->btn0);
				this->Controls->Add(this->btn3);
				this->Controls->Add(this->btnMul);
				this->Controls->Add(this->btn2);
				this->Controls->Add(this->btn1);
				this->Controls->Add(this->btn6);
				this->Controls->Add(this->btnMinus);
				this->Controls->Add(this->btn5);
				this->Controls->Add(this->btn4);
				this->Controls->Add(this->btn9);
				this->Controls->Add(this->btnPlus);
				this->Controls->Add(this->btn8);
				this->Controls->Add(this->btn7);
				this->Controls->Add(this->resultBox);
				this->Controls->Add(this->btnCE);
				this->Controls->Add(this->btnSwitchPosNeg);
				this->Controls->Add(this->btnC);
				this->Controls->Add(this->btnBackspace);
				this->MaximizeBox = false;
				this->MaximumSize = System::Drawing::Size(356, 537);
				this->MinimumSize = System::Drawing::Size(356, 537);
				this->Name = L"Form1";
				this->ShowIcon = false;
				this->Text = L"Calculator Tutorial";
				this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
				this->ResumeLayout(false);
				this->PerformLayout();

			}
			#pragma endregion
			double firstDigit, secondDigit, result;
			String^ operators = "";
			String^ sep = "";
			private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {}
			private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
				Button^ Numbers = safe_cast<Button^>(sender);
				if (resultBox->Text == "0")
				{
					resultBox->Text = Numbers->Text;
				}
				else
				{
					resultBox->Text = resultBox->Text + Numbers->Text;
				}
			}
			private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
				history->Text = resultBox->Text;
				if (operators == "")
				{
					Button^ NumbersOp = safe_cast<Button^>(sender);
					firstDigit = Double::Parse(resultBox->Text);
					resultBox->Text = "";
					operators = NumbersOp->Text;
				}
				history->Text = history->Text + operators;
			}
			private: System::Void btnDec_Click(System::Object^ sender, System::EventArgs^ e) {
				if (sep == "")
				{
					sep = ".";
					try
					{
						Double::Parse("15.6");
					}
					catch (System::FormatException^)
					{
						sep = ",";
					}
					btnDec->Text = sep;
				}
				if (!resultBox->Text->Contains(sep))
				{
					resultBox->Text = resultBox->Text + sep;
				}
			}
			private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
				history->Text = history->Text + resultBox->Text + "=";
				secondDigit = Double::Parse(resultBox->Text);
				if (operators == "+")
				{
					result = firstDigit + secondDigit;
					resultBox->Text = System::Convert::ToString(result);
				}
				else if (operators == "-")
				{
					result = firstDigit - secondDigit;
					resultBox->Text = System::Convert::ToString(result);
				}
				else if (operators == "/")
				{
					result = firstDigit / secondDigit;
					resultBox->Text = System::Convert::ToString(result);
				}
				if (operators == "X")
				{
					result = firstDigit * secondDigit;
					resultBox->Text = System::Convert::ToString(result);
				}
				operators = "";
			}
			private: System::Void btnC_Click(System::Object^ sender, System::EventArgs^ e) {
				reset();
			}
			private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
				reset();
			}
			private: System::Void btnSwitchPosNeg_Click(System::Object^ sender, System::EventArgs^ e) {
				if (resultBox->Text != "0") {
					if (resultBox->Text->Contains("-"))
					{
						resultBox->Text = resultBox->Text->Remove(0, 1);
					}
					else
					{
						resultBox->Text = "-" + resultBox->Text;
					}
				}
			}
			private: System::Void btnBackspace_Click(System::Object^ sender, System::EventArgs^ e) {
			if (resultBox->Text->Length > 0)
			{
				resultBox->Text = resultBox->Text->Remove(resultBox->Text->Length - 1, 1);
			}
			if (resultBox->Text == "")
			{
				resultBox->Text = "0";
			}
			if (resultBox->Text == "-")
			{
				resultBox->Text = "0";
			}
		}
		void reset()
		{
			resultBox->Text = "0";
			history->Text = "";
		}
	};
}
