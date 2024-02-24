#pragma once
#include "User.h"
#include "Login.h"
#include <string>
#include <fstream>

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for regist
	/// </summary>
	public ref class regist : public System::Windows::Forms::Form
	{
	public:
		regist(Void)
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
		~regist()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox4;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label12;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(regist::typeid));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(23, 624);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(416, 23);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Sociable Seating Reservations Everywhere Made Easy.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label4->Location = System::Drawing::Point(18, 570);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(213, 54);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Experience";
			this->label4->Click += gcnew System::EventHandler(this, &regist::label4_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label3->Location = System::Drawing::Point(18, 516);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(317, 54);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Your Reservation";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 24));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label2->Location = System::Drawing::Point(18, 462);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 54);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Simplify";
			this->label2->Click += gcnew System::EventHandler(this, &regist::label2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(22, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"I stay you stay";
			this->label1->Click += gcnew System::EventHandler(this, &regist::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(974, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(41, 25);
			this->panel2->TabIndex = 6;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(735, 116);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(99, 28);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Username";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Location = System::Drawing::Point(735, 278);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(93, 28);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox1->Location = System::Drawing::Point(763, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(430, 38);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &regist::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox2->Location = System::Drawing::Point(763, 237);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(430, 38);
			this->textBox2->TabIndex = 9;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &regist::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox3->Location = System::Drawing::Point(763, 318);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(430, 38);
			this->textBox3->TabIndex = 10;
			this->textBox3->UseSystemPasswordChar = true;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &regist::textBox3_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Location = System::Drawing::Point(735, 197);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 28);
			this->label9->TabIndex = 11;
			this->label9->Text = L"email";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Location = System::Drawing::Point(735, 363);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(170, 28);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Confirm password";
			this->label10->Click += gcnew System::EventHandler(this, &regist::label10_Click);
			// 
			// textBox4
			// 
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->textBox4->Location = System::Drawing::Point(763, 403);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(430, 38);
			this->textBox4->TabIndex = 13;
			this->textBox4->UseSystemPasswordChar = true;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &regist::textBox4_TextChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label11->Location = System::Drawing::Point(1145, 618);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 17);
			this->label11->TabIndex = 16;
			this->label11->Text = L"back to login";
			this->label11->Click += gcnew System::EventHandler(this, &regist::label11_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(763, 540);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(430, 48);
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &regist::pictureBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(640, 720);
			this->panel3->TabIndex = 23;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Location = System::Drawing::Point(909, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(173, 59);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Sign UP";
			// 
			// checkBox1
			// 
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(763, 463);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(306, 48);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"          Customer          ";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &regist::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(965, 462);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(300, 48);
			this->checkBox2->TabIndex = 27;
			this->checkBox2->Text = L"             Partner          ";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &regist::checkBox2_CheckedChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label12->Location = System::Drawing::Point(659, 652);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(20, 17);
			this->label12->TabIndex = 28;
			this->label12->Text = L"....";
			this->label12->Click += gcnew System::EventHandler(this, &regist::label12_Click);
			// 
			// regist
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label6);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"regist";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sign Up";
			this->Load += gcnew System::EventHandler(this, &regist::regist_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void MarshalString(String^ s, std::string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

		void MarshalString(String^ s, std::wstring& os) {
			using namespace Runtime::InteropServices;
			const wchar_t* chars =
				(const wchar_t*)(Marshal::StringToHGlobalUni(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
public : bool switchToLogin = false;
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
	
}

private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void regist_Load(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox3->BackColor = Color::White;
	textBox3->ForeColor = Color::Black;
}


private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	String^ username = textBox1->Text;
	String^ email = textBox2->Text;
	String^ password = textBox3->Text;
	String^ password2 = textBox4->Text;

	if (username->Length == 0 || email->Length == 0 || password->Length == 0 || password2->Length == 0) {
		if (username->Length == 0) {
			textBox1->BackColor = Color::Red;
		}
		if (email->Length == 0) {
			textBox2->BackColor = Color::Red;
		}
		if (password->Length == 0) {
			textBox3->BackColor = Color::Red;
		}
		if (password2->Length == 0) {
			textBox4->BackColor = Color::Red;
		}
		return;
	}
	else if (email->IndexOf("@gmail") == -1) {
		textBox2->ForeColor = Color::Red;
		return;
	}
	else if (password != password2) {
		textBox3->ForeColor = Color::Red;
		textBox4->ForeColor = Color::Red;
		return;
	}
	else if (password->Length < 7) {
		textBox3->ForeColor = Color::Red;
		textBox4->ForeColor = Color::Red;
		//MessageBox::Show("Password must be at least 8 characters long", "please check the password again", MessageBoxButtons::OK);
		return;
	}

	String^ tempPath = Application::StartupPath + "\\Data\\" + "\\UserData\\" + username + ".txt";
	string path,username2,password3,email2;
	MarshalString(tempPath,path);
	MarshalString(username, username2);
	MarshalString(password,password3);
	MarshalString(email,email2);
	ofstream fileOut(path);
	fileOut << username2 << " " << password3 << " " << email2;
	MessageBox::Show("Successfully Create User","Welcome",MessageBoxButtons::OK);
	/*try {
		String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users " + "(username,email,password) VALUES" + "(@username,@email,@password);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();
		switchToLogin = true;
		this->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Fail to connect to database", "Error", MessageBoxButtons::OK);

	}
	*/


}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->BackColor = Color::White;
	textBox1->ForeColor = Color::Black;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->BackColor = Color::White;
	textBox2->ForeColor = Color::Black;
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox4->BackColor = Color::White;
	textBox4->ForeColor = Color::Black;
}

private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {


}
	public:bool switchToReg2 = false;
private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	switchToReg2 = true;
	this->Close();
	
}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
};
}
