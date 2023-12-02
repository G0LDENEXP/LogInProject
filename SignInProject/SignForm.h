#pragma once

namespace SignInProject
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SignForm
	/// </summary>
	public ref class SignForm : public System::Windows::Forms::Form
	{
	public:
		SignForm(void)
		{
			InitializeComponent();
			paneltos->Hide();
			//
			//TODO: Add the constructor code here
			//
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SignForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ signin_label;
	protected:
	private: System::Windows::Forms::Label^ lUsername;
	private: System::Windows::Forms::Label^ lPassword;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ paneltos;

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignForm::typeid));
			this->signin_label = (gcnew System::Windows::Forms::Label());
			this->lUsername = (gcnew System::Windows::Forms::Label());
			this->lPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->paneltos = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->paneltos->SuspendLayout();
			this->SuspendLayout();
			// 
			// signin_label
			// 
			this->signin_label->AutoSize = true;
			this->signin_label->Font = (gcnew System::Drawing::Font(L"Tahoma", 24));
			this->signin_label->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->signin_label->Location = System::Drawing::Point(15, 36);
			this->signin_label->Name = L"signin_label";
			this->signin_label->Size = System::Drawing::Size(113, 39);
			this->signin_label->TabIndex = 0;
			this->signin_label->Text = L"Sign in";
			// 
			// lUsername
			// 
			this->lUsername->AutoSize = true;
			this->lUsername->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->lUsername->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lUsername->Location = System::Drawing::Point(14, 97);
			this->lUsername->Name = L"lUsername";
			this->lUsername->Size = System::Drawing::Size(80, 19);
			this->lUsername->TabIndex = 1;
			this->lUsername->Text = L"Username";
			// 
			// lPassword
			// 
			this->lPassword->AutoSize = true;
			this->lPassword->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->lPassword->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->lPassword->Location = System::Drawing::Point(14, 168);
			this->lPassword->Name = L"lPassword";
			this->lPassword->Size = System::Drawing::Size(76, 19);
			this->lPassword->TabIndex = 2;
			this->lPassword->Text = L"Password";
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->ForeColor = System::Drawing::SystemColors::Menu;
			this->tbUsername->Location = System::Drawing::Point(18, 131);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(197, 20);
			this->tbUsername->TabIndex = 3;
			this->tbUsername->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignForm::tbUsername_KeyDown);
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->ForeColor = System::Drawing::SystemColors::Menu;
			this->tbPassword->Location = System::Drawing::Point(18, 194);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(197, 20);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->UseSystemPasswordChar = true;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &SignForm::tbPassword_TextChanged);
			this->tbPassword->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SignForm::tbPassword_KeyDown);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel1->Location = System::Drawing::Point(12, 150);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 1);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->panel2->Location = System::Drawing::Point(18, 213);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 1);
			this->panel2->TabIndex = 6;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SignForm::panel2_Paint);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox1->Location = System::Drawing::Point(18, 269);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(110, 23);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"I agree with";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &SignForm::checkBox1_CheckedChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Enabled = false;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(18, 311);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 37);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sign in";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InfoText;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(109, 311);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SignForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(96, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 19);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Incorrect username";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(96, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 19);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Incorrect password";
			this->label2->Visible = false;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->checkBox2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->checkBox2->Location = System::Drawing::Point(18, 220);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(139, 23);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"Show password";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &SignForm::checkBox2_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label3->Location = System::Drawing::Point(130, 271);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Terms and Conditions";
			this->label3->Click += gcnew System::EventHandler(this, &SignForm::label3_Click);
			// 
			// paneltos
			// 
			this->paneltos->Controls->Add(this->label4);
			this->paneltos->Controls->Add(this->button3);
			this->paneltos->Controls->Add(this->richTextBox1);
			this->paneltos->Location = System::Drawing::Point(357, 36);
			this->paneltos->Name = L"paneltos";
			this->paneltos->Size = System::Drawing::Size(464, 448);
			this->paneltos->TabIndex = 14;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 24));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(11, 29);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(325, 39);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Terms and Conditions";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Highlight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(320, 394);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 37);
			this->button3->TabIndex = 9;
			this->button3->Text = L"OK";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &SignForm::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::Menu;
			this->richTextBox1->Location = System::Drawing::Point(18, 82);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(409, 290);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// SignForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(874, 535);
			this->Controls->Add(this->paneltos);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbUsername);
			this->Controls->Add(this->lPassword);
			this->Controls->Add(this->lUsername);
			this->Controls->Add(this->signin_label);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SignForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignForm";
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SignForm::SignForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SignForm::SignForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &SignForm::SignForm_MouseUp);
			this->paneltos->ResumeLayout(false);
			this->paneltos->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		bool dragging = false;
		Point offset;

		private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if(checkBox1->Checked)
			{
				button1 -> Enabled = true;
			}
			else
			{
				button1->Enabled = false;
			}
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{
			Application::Exit();
		}
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (tbUsername->Text == "admin" && tbPassword->Text == "root")
			{
				// Both username and password are correct
				MessageBox::Show("Correct information!", "Nice", MessageBoxButtons::OK, MessageBoxIcon::Information);
				Application::Exit();
			}
			else if (tbUsername->Text == "admin" && tbPassword->Text != "root")
			{
				// Username is correct, password is incorrect
				label1->Visible = false;
				label2->Visible = true;
			}
			else if (tbUsername->Text != "admin" && tbPassword->Text == "root")
			{
				// Username is incorrect, password is correct
				label2->Visible = false;
				label1->Visible = true;
				label2->Visible = false;
			}
			else if (tbUsername->Text != "admin" && tbPassword->Text != "root")
			{
				// Both username and password are incorrect
				label1->Visible = true;
				label2->Visible = true;
			}
			else 
			{
				MessageBox::Show("You did something bad. Tell me what you did on my mail jovan.milic23@gmail.com", "WTH did u do?", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	
		private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
		{
			if (checkBox2->Checked)
			{
				tbPassword->UseSystemPasswordChar = false;
			}
			else
			{
				tbPassword->UseSystemPasswordChar = true;
			}
		}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			paneltos->Show();
		}
		private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			paneltos->Hide();
		}
		private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
		{
		}
		private: System::Void tbPassword_TextChanged(System::Object^ sender, System::EventArgs^ e)
		{
		}
		private: System::Void SignForm_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if(dragging)
			{
				Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
				Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
			}
		}
		private: System::Void SignForm_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			dragging = true;
			offset.X = e->X;
			offset.Y = e->Y;
		}
		private: System::Void SignForm_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			dragging = false;
		}
		private: System::Void tbUsername_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyValue==(int)Keys::Enter)
			{
				tbPassword->Focus();
			}
		}
		private: System::Void tbPassword_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
		{
			if (e->KeyValue == (int)Keys::Enter)
			{
				button1->PerformClick();
			}
		}
	};
}
