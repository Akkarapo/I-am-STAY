#pragma once
#include "User.h"
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(sendMail::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(728, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(445, 66);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sendMail::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->textBox1->Location = System::Drawing::Point(728, 216);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(445, 41);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24));
			this->label1->Location = System::Drawing::Point(802, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(322, 46);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Forget Password";
			this->label1->Click += gcnew System::EventHandler(this, &sendMail::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(723, 176);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label4->Location = System::Drawing::Point(879, 120);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"xxxxxxxxxxxxxxxxx";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->label2->Location = System::Drawing::Point(1020, 370);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(138, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Back To Login";
			this->label2->Click += gcnew System::EventHandler(this, &sendMail::label2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 720);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
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
			// sendMail
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"sendMail";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"sendMail";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = textBox1->Text;
		if (email->Length == 0) {
			MessageBox::Show("Plase Enter email", "email is empty", MessageBoxButtons::OK);
		}
		try {
			String^ connString = "Data Source=iamstay.database.windows.net;Initial Catalog=iamstay;User ID=gongz;Password=12345%aA";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			String^ sqlQuery = "SELECT * FROM users WHERE email = @email;";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@email", email);
			SqlDataReader^ reader = command.ExecuteReader();

			if (reader->Read()) {
				MessageBox::Show("sending info","email found",MessageBoxButtons::OK);
				String^ senderUsername = "gong6321@gmail.com	";
				String^ senderPassword = "lnsy ucdr uzza weyj";
				user = gcnew User;
				user->id = reader->GetInt32(0);
				user->username = reader->GetString(1);
				user->email = reader->GetString(2);
				user->password = reader->GetString(3);
				MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);
				String^ text = user->username + " " + user->password;
				MailMessage^ mail = gcnew MailMessage(senderUsername, user->email);
				mail->Subject = "Password Recovery";
				mail->Body = text;
				
				SmtpClient^ Client = gcnew SmtpClient("smtp.gmail.com");
				Client->Port = 587;
				Client->Credentials = gcnew System::Net::NetworkCredential(senderUsername,senderPassword);
				Client->EnableSsl = true;
				
				MessageBox::Show("sending info", "email found", MessageBoxButtons::OK);

				Client->Send(mail);
				MessageBox::Show("Mail sent!", "email found", MessageBoxButtons::OK);

				//this->Close();
			}
			else {
				MessageBox::Show("Plese provide correct email", "no email found", MessageBoxButtons::OK);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Can't send mail", "Error", MessageBoxButtons::OK);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
public: bool switchToLogin = false;
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	//back to login here
	switchToLogin = true;
	this->Close();
}
};
}
