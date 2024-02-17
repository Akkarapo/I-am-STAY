#pragma once
#include "User.h"
#include "regist.h"
#include "PakForm.h"
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnSignIn;






	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ signUPtext;
	private: System::Windows::Forms::Label^ registLable;


	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->signUPtext = (gcnew System::Windows::Forms::Label());
			this->registLable = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(703, 268);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->textBox2->Location = System::Drawing::Point(745, 305);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(430, 36);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(702, 353);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 27);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// btnSignIn
			// 
			this->btnSignIn->Location = System::Drawing::Point(659, 491);
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->Size = System::Drawing::Size(390, 49);
			this->btnSignIn->TabIndex = 4;
			this->btnSignIn->Text = L"Sign In";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(904, 75);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(111, 38);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Log in";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(1208, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 39);
			this->button2->TabIndex = 11;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(758, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(359, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Enter your username and password to access your account";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Location = System::Drawing::Point(741, 460);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(438, 56);
			this->button1->TabIndex = 14;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click_1);
			// 
			// signUPtext
			// 
			this->signUPtext->AutoSize = true;
			this->signUPtext->BackColor = System::Drawing::Color::Transparent;
			this->signUPtext->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 10));
			this->signUPtext->Location = System::Drawing::Point(1491, 401);
			this->signUPtext->Name = L"signUPtext";
			this->signUPtext->Size = System::Drawing::Size(70, 23);
			this->signUPtext->TabIndex = 15;
			this->signUPtext->Text = L"Sign Up";
			this->signUPtext->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// registLable
			// 
			this->registLable->AutoSize = true;
			this->registLable->BackColor = System::Drawing::Color::Transparent;
			this->registLable->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registLable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->registLable->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->registLable->Location = System::Drawing::Point(703, 529);
			this->registLable->Name = L"registLable";
			this->registLable->Size = System::Drawing::Size(83, 27);
			this->registLable->TabIndex = 16;
			this->registLable->Text = L"Sign Up";
			this->registLable->Click += gcnew System::EventHandler(this, &Login::registLable_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(0, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(75, 23);
			this->btnExit->TabIndex = 0;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->textBox1->Location = System::Drawing::Point(745, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(430, 36);
			this->textBox1->TabIndex = 18;
			this->textBox1->UseSystemPasswordChar = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 720);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label4->Location = System::Drawing::Point(1089, 529);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(161, 27);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Forget Password";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click_1);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->registLable);
			this->Controls->Add(this->signUPtext);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Location = System::Drawing::Point(745, 385);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::Login_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	
}

//public: User^ user = nullptr;
public: bool switchToPakForm = false;

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ username = textBox2->Text;
	String^ password = textBox1->Text;
	if (username->Length == 0 || password->Length == 0) {
		MessageBox::Show("Plase Enter both username and password","username or password is empty",MessageBoxButtons::OK);
	}
	try {
		String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE username = @username AND password = @pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@pwd",password);

		SqlDataReader^ reader = command.ExecuteReader();
	
		if (reader->Read()) {
			MessageBox::Show("Welcome "+username, "Log in successful",MessageBoxButtons::OK );
			/*user = gcnew User;
			user->id = reader->GetInt32(0);
			user->username = reader->GetString(1);
			user->email = reader->GetString(2);
			user->password = reader->GetString(3);
			this->Close();
			switchToPakForm = true;*/
			this->Close();
			switchToPakForm = true;
		}
		else {
			MessageBox::Show("Wrong username or password","log in unsuccessful",MessageBoxButtons::OK);
		}


	}
	catch (Exception^ e) {
		MessageBox::Show("Fail to connect to database","Error",MessageBoxButtons::OK);
	}
}
private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {

}
public: bool switchToRegister =false;
private: System::Void registLable_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToRegister = true;
	this->Close();
	}
private: System::Void Login_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)Keys::Alt) {
		MessageBox::Show("Escape Pressed","esc",MessageBoxButtons::OK);
	}

}
public: bool switchToForgetPwd = false;
private: System::Void label4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->switchToForgetPwd = true;
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
