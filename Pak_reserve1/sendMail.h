#pragma once
#include "User.h"
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^ label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(260, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(239, 60);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Send Info !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &sendMail::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(260, 413);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(672, 38);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(255, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(312, 29);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter email to get password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(295, 286);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"label2";
			// 
			// sendMail
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"sendMail";
			this->Text = L"sendMail";
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
				label2->Text = text;
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
	};
}
