#pragma once
#include "User.h"
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


	using namespace System::Web;
	using namespace System::Net::Mail;
	/// <summary>
	/// Summary for sendMail
	/// </summary>
	public ref class sendMail : public System::Windows::Forms::Form
	{
	public:
		sendMail(void)
		{
			InitializeComponent();
			notice->Text = "";
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~sendMail()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ notice;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
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
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sendMail::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->notice = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(733, 216);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(430, 28);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &sendMail::textBox1_KeyDown);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Angsana New", 45, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(802, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 83);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Forget Password";
			this->label1->Click += gcnew System::EventHandler(this, &sendMail::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"ABeeZee", 11));
			this->label3->Location = System::Drawing::Point(712, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label4->ForeColor = System::Drawing::Color::Gray;
			this->label4->Location = System::Drawing::Point(713, 134);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(484, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Please enter the email you used to register to receive your password again.";
			this->label4->Click += gcnew System::EventHandler(this, &sendMail::label4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(61)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->label2->Location = System::Drawing::Point(1064, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 17);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Back To Login";
			this->label2->Click += gcnew System::EventHandler(this, &sendMail::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Location = System::Drawing::Point(941, 35);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(41, 25);
			this->panel2->TabIndex = 9;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(728, 301);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(435, 54);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &sendMail::pictureBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(640, 720);
			this->panel3->TabIndex = 24;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &sendMail::panel3_Paint);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"ABeeZee", 9.749999F));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label5->Location = System::Drawing::Point(24, 670);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(339, 15);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Sociable Seating Reservations Everywhere Made Easy.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->label12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label12->Location = System::Drawing::Point(154, 13);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(129, 19);
			this->label12->TabIndex = 11;
			this->label12->Text = L"____________________";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label7->Location = System::Drawing::Point(22, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(121, 18);
			this->label7->TabIndex = 6;
			this->label7->Text = L"I STAY you STAY";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36));
			this->label9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label9->Location = System::Drawing::Point(18, 603);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(239, 54);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Experience";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36));
			this->label10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label10->Location = System::Drawing::Point(18, 483);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(180, 54);
			this->label10->TabIndex = 7;
			this->label10->Text = L"Simplify";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Baskerville Old Face", 36));
			this->label11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->label11->Location = System::Drawing::Point(18, 543);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(357, 54);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Your Reservation";
			// 
			// notice
			// 
			this->notice->AutoSize = true;
			this->notice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->notice->Font = (gcnew System::Drawing::Font(L"ABeeZee", 9.749999F));
			this->notice->ForeColor = System::Drawing::Color::Black;
			this->notice->Location = System::Drawing::Point(729, 253);
			this->notice->Name = L"notice";
			this->notice->Size = System::Drawing::Size(91, 15);
			this->notice->TabIndex = 98;
			this->notice->Text = L"xxxxxxxxxxxx";
			// 
			// sendMail
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->notice);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"sendMail";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"sendMail";
			this->Load += gcnew System::EventHandler(this, &sendMail::sendMail_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
public: bool switchToLogin = false;
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	//back to login here
	switchToLogin = true;
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = textBox1->Text;
	if (email->Length == 0) {
		//MessageBox::Show("Please Enter email", "email is empty", MessageBoxButtons::OK);
		notice->ForeColor = Color::Red;
		notice->Text = "Please enter email";
		return;
	}
		/*String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE email = @email;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		SqlDataReader^ reader = command.ExecuteReader();
		*/
		using namespace std;
		String^ tempPath2 = Application::StartupPath + "\\Data\\UserData\\" + "AllData" + ".txt";
		string path,line,email3;
		MarshalString(tempPath2,path);
		MarshalString(email,email3);
		ifstream fileIn(path);
		if (!fileIn.is_open()) {
			MessageBox::Show("Can't Open File","Error",MessageBoxButtons::OK);
		}
		char format[] = "%s %s %s";
		char email2[50], pwd[50], username[50];
		while(getline(fileIn,line)){
			sscanf(line.c_str(),format,username,pwd,email2);
			if (email3 == email2) {
				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
				notice->ForeColor = Color::Green;
				notice->Text = "email found.sending info";
				String^ senderUsername = "gong6321@gmail.com	";
				String^ senderPassword = "lnsy ucdr uzza weyj";
				String^ reciever = gcnew String(email);
				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
				String^ text = "Plase remember your username and Password\n" + "Username : " + gcnew String(username) + "\nPassword : " + gcnew String(pwd);
				MailMessage^ mail = gcnew MailMessage(senderUsername,reciever);
				mail->Subject = "I AM STAY - Password Recovery";
				mail->Body = text;

				SmtpClient^ Client = gcnew SmtpClient("smtp.gmail.com");
				Client->Port = 587;
				Client->Credentials = gcnew System::Net::NetworkCredential(senderUsername, senderPassword);
				Client->EnableSsl = true;

				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);

				Client->Send(mail);
				//MessageBox::Show("Mail sent!", "email found", MessageBoxButtons::OK);
				notice->Text = "Mail sent. Please chect your email";
				return;
			}
		}
		//MessageBox::Show("Please Provide Correct Email","Mail Not found",MessageBoxButtons::OK);
		notice->ForeColor = Color::Red;
		notice->Text = "Mail not found";
		/*if () {
			MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
			String^ senderUsername = "gong6321@gmail.com	";
			String^ senderPassword = "lnsy ucdr uzza weyj";

			//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
			String^ text = user->username + " " + user->password;
			MailMessage^ mail = gcnew MailMessage(senderUsername, user->email);
			mail->Subject = "Password Recovery";
			mail->Body = text;

			SmtpClient^ Client = gcnew SmtpClient("smtp.gmail.com");
			Client->Port = 587;
			Client->Credentials = gcnew System::Net::NetworkCredential(senderUsername, senderPassword);
			Client->EnableSsl = true;

			//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);

			Client->Send(mail);
			MessageBox::Show("Mail sent!", "email found", MessageBoxButtons::OK);

			//this->Close();
		}
		else {
			MessageBox::Show("Plese provide correct email", "no email found", MessageBoxButtons::OK);
		}
		*/
}
private: System::Void sendMail_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyValue == (int)(Keys::Enter)) {
		String^ email = textBox1->Text;
		if (email->Length == 0) {
			//MessageBox::Show("Please Enter email", "email is empty", MessageBoxButtons::OK);
			notice->ForeColor = Color::Red;
			notice->Text = "Please enter email";
			return;
		}
		/*String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM users WHERE email = @email;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		SqlDataReader^ reader = command.ExecuteReader();
		*/
		using namespace std;
		String^ tempPath2 = Application::StartupPath + "\\Data\\UserData\\" + "AllData" + ".txt";
		string path, line, email3;
		MarshalString(tempPath2, path);
		MarshalString(email, email3);
		ifstream fileIn(path);
		if (!fileIn.is_open()) {
			MessageBox::Show("Can't Open File", "Error", MessageBoxButtons::OK);
		}
		char format[] = "%s %s %s";
		char email2[50], pwd[50], username[50];
		while (getline(fileIn, line)) {
			sscanf(line.c_str(), format, username, pwd, email2);
			if (email3 == email2) {
				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
				notice->ForeColor = Color::Green;
				notice->Text = "email found.sending info";
				String^ senderUsername = "gong6321@gmail.com	";
				String^ senderPassword = "lnsy ucdr uzza weyj";
				String^ reciever = gcnew String(email);
				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
				String^ text = "Plase remember your username and Password\n" + "Username : " + gcnew String(username) + "\nPassword : " + gcnew String(pwd);
				MailMessage^ mail = gcnew MailMessage(senderUsername, reciever);
				mail->Subject = "I AM STAY - Password Recovery";
				mail->Body = text;

				SmtpClient^ Client = gcnew SmtpClient("smtp.gmail.com");
				Client->Port = 587;
				Client->Credentials = gcnew System::Net::NetworkCredential(senderUsername, senderPassword);
				Client->EnableSsl = true;

				//MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);

				Client->Send(mail);
				//MessageBox::Show("Mail sent!", "email found", MessageBoxButtons::OK);
				notice->Text = "Mail sent. Please chect your email";
				return;
			}
		}
		//MessageBox::Show("Please Provide Correct Email","Mail Not found",MessageBoxButtons::OK);
		notice->ForeColor = Color::Red;
		notice->Text = "Mail not found";
	}
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
