#pragma once
#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
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
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ CustomerName;
	private: System::Windows::Forms::PictureBox^ CustomerPhoto;
	private: System::Windows::Forms::Label^ CustomerMail;
	private: System::Windows::Forms::Panel^ TicketAll;
	private: System::Windows::Forms::Panel^ Ticket1;

	private: System::Windows::Forms::PictureBox^ TicketBarcode;
	private: System::Windows::Forms::Label^ TicketCustomerTable;
	private: System::Windows::Forms::Label^ TicketCustomerName;
	private: System::Windows::Forms::TextBox^ TicketCaution;
	private: System::Windows::Forms::Label^ TicketTable;
	private: System::Windows::Forms::Label^ TicketReservedBy;
	private: System::Windows::Forms::PictureBox^ TicketBarLogo;
	private: System::Windows::Forms::Panel^ Ticket2;

	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Profile::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->CustomerName = (gcnew System::Windows::Forms::Label());
			this->CustomerPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->CustomerMail = (gcnew System::Windows::Forms::Label());
			this->TicketAll = (gcnew System::Windows::Forms::Panel());
			this->Ticket1 = (gcnew System::Windows::Forms::Panel());
			this->TicketBarcode = (gcnew System::Windows::Forms::PictureBox());
			this->TicketCustomerTable = (gcnew System::Windows::Forms::Label());
			this->TicketCustomerName = (gcnew System::Windows::Forms::Label());
			this->TicketCaution = (gcnew System::Windows::Forms::TextBox());
			this->TicketTable = (gcnew System::Windows::Forms::Label());
			this->TicketReservedBy = (gcnew System::Windows::Forms::Label());
			this->TicketBarLogo = (gcnew System::Windows::Forms::PictureBox());
			this->Ticket2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->BeginInit();
			this->TicketAll->SuspendLayout();
			this->Ticket1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarcode))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarLogo))->BeginInit();
			this->Ticket2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1196, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Profile::pictureBox2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(-9, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 64);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox3->Location = System::Drawing::Point(-9, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(480, 720);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// CustomerName
			// 
			this->CustomerName->AutoSize = true;
			this->CustomerName->BackColor = System::Drawing::SystemColors::ControlLight;
			this->CustomerName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerName->Location = System::Drawing::Point(226, 142);
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Size = System::Drawing::Size(188, 30);
			this->CustomerName->TabIndex = 14;
			this->CustomerName->Text = L"CustomerName";
			// 
			// CustomerPhoto
			// 
			this->CustomerPhoto->BackColor = System::Drawing::SystemColors::ControlLight;
			this->CustomerPhoto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CustomerPhoto.Image")));
			this->CustomerPhoto->Location = System::Drawing::Point(57, 119);
			this->CustomerPhoto->Name = L"CustomerPhoto";
			this->CustomerPhoto->Size = System::Drawing::Size(128, 128);
			this->CustomerPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CustomerPhoto->TabIndex = 11;
			this->CustomerPhoto->TabStop = false;
			// 
			// CustomerMail
			// 
			this->CustomerMail->AutoSize = true;
			this->CustomerMail->BackColor = System::Drawing::SystemColors::ControlLight;
			this->CustomerMail->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerMail->Location = System::Drawing::Point(226, 199);
			this->CustomerMail->Name = L"CustomerMail";
			this->CustomerMail->Size = System::Drawing::Size(168, 30);
			this->CustomerMail->TabIndex = 15;
			this->CustomerMail->Text = L"CustomerMail";
			// 
			// TicketAll
			// 
			this->TicketAll->Controls->Add(this->Ticket2);
			this->TicketAll->Controls->Add(this->Ticket1);
			this->TicketAll->Location = System::Drawing::Point(501, 90);
			this->TicketAll->Name = L"TicketAll";
			this->TicketAll->Size = System::Drawing::Size(740, 556);
			this->TicketAll->TabIndex = 16;
			// 
			// Ticket1
			// 
			this->Ticket1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Ticket1->Controls->Add(this->TicketBarcode);
			this->Ticket1->Controls->Add(this->TicketCustomerTable);
			this->Ticket1->Controls->Add(this->TicketCustomerName);
			this->Ticket1->Controls->Add(this->TicketCaution);
			this->Ticket1->Controls->Add(this->TicketTable);
			this->Ticket1->Controls->Add(this->TicketReservedBy);
			this->Ticket1->Controls->Add(this->TicketBarLogo);
			this->Ticket1->Location = System::Drawing::Point(24, 20);
			this->Ticket1->Name = L"Ticket1";
			this->Ticket1->Size = System::Drawing::Size(337, 518);
			this->Ticket1->TabIndex = 0;
			// 
			// TicketBarcode
			// 
			this->TicketBarcode->BackColor = System::Drawing::SystemColors::ControlLight;
			this->TicketBarcode->Location = System::Drawing::Point(18, 427);
			this->TicketBarcode->Name = L"TicketBarcode";
			this->TicketBarcode->Size = System::Drawing::Size(301, 61);
			this->TicketBarcode->TabIndex = 23;
			this->TicketBarcode->TabStop = false;
			// 
			// TicketCustomerTable
			// 
			this->TicketCustomerTable->AutoSize = true;
			this->TicketCustomerTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketCustomerTable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TicketCustomerTable->Location = System::Drawing::Point(97, 257);
			this->TicketCustomerTable->Name = L"TicketCustomerTable";
			this->TicketCustomerTable->Size = System::Drawing::Size(133, 23);
			this->TicketCustomerTable->TabIndex = 22;
			this->TicketCustomerTable->Text = L"CustomerTable";
			// 
			// TicketCustomerName
			// 
			this->TicketCustomerName->AutoSize = true;
			this->TicketCustomerName->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketCustomerName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TicketCustomerName->Location = System::Drawing::Point(182, 196);
			this->TicketCustomerName->Name = L"TicketCustomerName";
			this->TicketCustomerName->Size = System::Drawing::Size(137, 23);
			this->TicketCustomerName->TabIndex = 21;
			this->TicketCustomerName->Text = L"CustomerName";
			// 
			// TicketCaution
			// 
			this->TicketCaution->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketCaution->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TicketCaution->Enabled = false;
			this->TicketCaution->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketCaution->Location = System::Drawing::Point(18, 348);
			this->TicketCaution->Multiline = true;
			this->TicketCaution->Name = L"TicketCaution";
			this->TicketCaution->ReadOnly = true;
			this->TicketCaution->Size = System::Drawing::Size(301, 73);
			this->TicketCaution->TabIndex = 20;
			this->TicketCaution->Text = L"Please check in within the next 3 hours, starting from 6 p.m. Otherwise, your res"
				L"ervation will be canceled.";
			// 
			// TicketTable
			// 
			this->TicketTable->AutoSize = true;
			this->TicketTable->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketTable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketTable->Location = System::Drawing::Point(29, 257);
			this->TicketTable->Name = L"TicketTable";
			this->TicketTable->Size = System::Drawing::Size(55, 23);
			this->TicketTable->TabIndex = 19;
			this->TicketTable->Text = L"Table";
			// 
			// TicketReservedBy
			// 
			this->TicketReservedBy->AutoSize = true;
			this->TicketReservedBy->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketReservedBy->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketReservedBy->Location = System::Drawing::Point(29, 196);
			this->TicketReservedBy->Name = L"TicketReservedBy";
			this->TicketReservedBy->Size = System::Drawing::Size(110, 23);
			this->TicketReservedBy->TabIndex = 18;
			this->TicketReservedBy->Text = L"Reserved By";
			// 
			// TicketBarLogo
			// 
			this->TicketBarLogo->BackColor = System::Drawing::SystemColors::ControlDark;
			this->TicketBarLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketBarLogo.Image")));
			this->TicketBarLogo->Location = System::Drawing::Point(90, 32);
			this->TicketBarLogo->Name = L"TicketBarLogo";
			this->TicketBarLogo->Size = System::Drawing::Size(157, 134);
			this->TicketBarLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->TicketBarLogo->TabIndex = 17;
			this->TicketBarLogo->TabStop = false;
			// 
			// Ticket2
			// 
			this->Ticket2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Ticket2->Controls->Add(this->pictureBox4);
			this->Ticket2->Controls->Add(this->label1);
			this->Ticket2->Controls->Add(this->label2);
			this->Ticket2->Controls->Add(this->textBox1);
			this->Ticket2->Controls->Add(this->label3);
			this->Ticket2->Controls->Add(this->label4);
			this->Ticket2->Controls->Add(this->pictureBox5);
			this->Ticket2->Location = System::Drawing::Point(380, 20);
			this->Ticket2->Name = L"Ticket2";
			this->Ticket2->Size = System::Drawing::Size(337, 518);
			this->Ticket2->TabIndex = 24;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox4->Location = System::Drawing::Point(18, 427);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(301, 61);
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(97, 257);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(133, 23);
			this->label1->TabIndex = 22;
			this->label1->Text = L"CustomerTable";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(182, 196);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 23);
			this->label2->TabIndex = 21;
			this->label2->Text = L"CustomerName";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(18, 348);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(301, 73);
			this->textBox1->TabIndex = 20;
			this->textBox1->Text = L"Please check in within the next 3 hours, starting from 6 p.m. Otherwise, your res"
				L"ervation will be canceled.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(29, 257);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 23);
			this->label3->TabIndex = 19;
			this->label3->Text = L"Table";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 196);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 23);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Reserved By";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(90, 32);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(157, 134);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->TicketAll);
			this->Controls->Add(this->CustomerMail);
			this->Controls->Add(this->CustomerName);
			this->Controls->Add(this->CustomerPhoto);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"Profile";
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->EndInit();
			this->TicketAll->ResumeLayout(false);
			this->Ticket1->ResumeLayout(false);
			this->Ticket1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarcode))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarLogo))->EndInit();
			this->Ticket2->ResumeLayout(false);
			this->Ticket2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToBook = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToBook = true;
		this->Close();
	}
};
}
