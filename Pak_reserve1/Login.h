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
		Login()
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


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ signUPtext;
	private: System::Windows::Forms::Label^ registLable;


	private: System::Windows::Forms::Button^ btnExit;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Panel^ panel1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnSignIn = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->signUPtext = (gcnew System::Windows::Forms::Label());
			this->registLable = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Name = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &Login::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->AllowDrop = true;
			this->textBox2->BackColor = System::Drawing::Color::White;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox2, L"textBox2");
			this->textBox2->Name = L"textBox2";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Name = L"label2";
			// 
			// btnSignIn
			// 
			resources->ApplyResources(this->btnSignIn, L"btnSignIn");
			this->btnSignIn->Name = L"btnSignIn";
			this->btnSignIn->UseVisualStyleBackColor = true;
			this->btnSignIn->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Name = L"label8";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label3->Name = L"label3";
			// 
			// signUPtext
			// 
			resources->ApplyResources(this->signUPtext, L"signUPtext");
			this->signUPtext->BackColor = System::Drawing::Color::Transparent;
			this->signUPtext->Name = L"signUPtext";
			this->signUPtext->Click += gcnew System::EventHandler(this, &Login::label4_Click);
			// 
			// registLable
			// 
			resources->ApplyResources(this->registLable, L"registLable");
			this->registLable->BackColor = System::Drawing::Color::Transparent;
			this->registLable->Cursor = System::Windows::Forms::Cursors::Hand;
			this->registLable->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->registLable->Name = L"registLable";
			this->registLable->Click += gcnew System::EventHandler(this, &Login::registLable_Click);
			// 
			// btnExit
			// 
			resources->ApplyResources(this->btnExit, L"btnExit");
			this->btnExit->Name = L"btnExit";
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			resources->ApplyResources(this->textBox1, L"textBox1");
			this->textBox1->Name = L"textBox1";
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Login::textBox1_TextChanged);
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::textBox1_KeyDown);
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label4->Name = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &Login::label4_Click_1);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Login::pictureBox2_Click_1);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Name = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &Login::label5_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Name = L"panel3";
			// 
			// label12
			// 
			resources->ApplyResources(this->label12, L"label12");
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->Name = L"label12";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->Name = L"label7";
			// 
			// label9
			// 
			resources->ApplyResources(this->label9, L"label9");
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->Name = L"label9";
			// 
			// label10
			// 
			resources->ApplyResources(this->label10, L"label10");
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->Name = L"label10";
			// 
			// label11
			// 
			resources->ApplyResources(this->label11, L"label11");
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->Name = L"label11";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->registLable);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->label1);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// Login
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->signUPtext);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Login::Login_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	
}

//public: User^ user = nullptr;

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
/*	String^ username = textBox2->Text;
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
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->username = reader->GetString(1);
			user->email = reader->GetString(2);
			user->password = reader->GetString(3);
			this->Close();
			switchToPakForm = true;
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
	*/
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
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox2->ForeColor = Color::Black;
}

public: bool switchToToey = false;
public: User^ user = nullptr;

private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	String^ temp1 = textBox2->Text;
	String^ temp2 = textBox1->Text;
	String^ tempPath = Application::StartupPath + "\\Data\\UserData\\" + temp1 + ".txt";
	string path;
	string username;
	string password;
	string line;
	if (temp1->Length == 0 || temp2->Length == 0) {
		MessageBox::Show("Plase Enter both username and password", "username or password is empty", MessageBoxButtons::OK);
		return;
	}
	MarshalString(tempPath,path);
	MarshalString(temp1,username);
	MarshalString(temp2,password);
	ifstream source(path);
	if (source.is_open()) {
		getline(source, line);
		char userInput[100], pwd[100], email[100];
		char format[] = "%s %s %s";
		sscanf(line.c_str(), format, userInput, pwd, email);
		if (username == userInput && password == pwd) {
			user = gcnew User;
			user->username = gcnew String(username.c_str());
			user->email = gcnew String(email);
			user->password = gcnew String(password.c_str());
			this->Close();
			switchToToey = true;
		}
		else{
			textBox1->ForeColor = Color::Red;
			textBox2->ForeColor = Color::Red;
			return;
		}
	}
	else {
		textBox1->ForeColor = Color::Red;
		textBox2->ForeColor = Color::Red;
		MessageBox::Show("Can't open file","Error",MessageBoxButtons::OK);
		return;
	}
			/*this->Close();
			switchToPakForm = true;

			
		}
	}
	else {
		textBox1->ForeColor = Color::Red;
		textBox2->ForeColor = Color::Red;
		return;
	}


	/*try {
		String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE username = @username AND password = @pwd;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();

		if (reader->Read()) {
			MessageBox::Show("Welcome " + username, "Log in successful", MessageBoxButtons::OK);
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->username = reader->GetString(1);
			user->email = reader->GetString(2);
			user->password = reader->GetString(3);
			this->Close();
			switchToPakForm = true;
			/*this->Close();
			switchToPakForm = true;
		}
	   
		else {
			textBox1->ForeColor = Color::Red;
			textBox2->ForeColor = Color::Red;
			//MessageBox::Show("Wrong username or password", "log in unsuccessful", MessageBoxButtons::OK);
		}
		

	}
	catch (Exception^ e) {
		MessageBox::Show("Fail to connect to database", "Error", MessageBoxButtons::OK);
	}
	*/
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	textBox1->ForeColor = Color::Black;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	
}

};
}
