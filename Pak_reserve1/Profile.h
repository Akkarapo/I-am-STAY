#pragma once
#include "PakForm.h"
#include "Login.h"
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
		String^ temp = nullptr;
		Profile(User^ user)
		{
			InitializeComponent();
			temp = Application::StartupPath + "\\Data\\UserData\\" + user->username + ".txt";
			CustomerName->Text = user->username;
			CustomerMail->Text = user->email;
			Name1->Text = user->username;
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


	private: System::Windows::Forms::Label^ CustomerName;
	private: System::Windows::Forms::PictureBox^ CustomerPhoto;
	private: System::Windows::Forms::Label^ CustomerMail;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ TicketB1;
	private: System::Windows::Forms::Label^ Table1;


	private: System::Windows::Forms::Label^ BarName1;















	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ TicketF2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ TicketF1;
	private: System::Windows::Forms::Label^ BarNameF1;
	private: System::Windows::Forms::Label^ Name1;



	private: System::Windows::Forms::Label^ Time1;

	private: System::Windows::Forms::Label^ Date1;
	private: System::Windows::Forms::Panel^ TicketF3;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ TicketF4;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ TicketF5;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;

























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
			this->CustomerName = (gcnew System::Windows::Forms::Label());
			this->CustomerPhoto = (gcnew System::Windows::Forms::PictureBox());
			this->CustomerMail = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->TicketB1 = (gcnew System::Windows::Forms::Panel());
			this->Table1 = (gcnew System::Windows::Forms::Label());
			this->BarName1 = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->TicketF1 = (gcnew System::Windows::Forms::Panel());
			this->BarNameF1 = (gcnew System::Windows::Forms::Label());
			this->Name1 = (gcnew System::Windows::Forms::Label());
			this->Time1 = (gcnew System::Windows::Forms::Label());
			this->Date1 = (gcnew System::Windows::Forms::Label());
			this->TicketF2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->TicketF3 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TicketF4 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->TicketF5 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->TicketB1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->TicketF1->SuspendLayout();
			this->TicketF2->SuspendLayout();
			this->TicketF3->SuspendLayout();
			this->TicketF4->SuspendLayout();
			this->TicketF5->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1216, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Profile::pictureBox2_Click);
			// 
			// CustomerName
			// 
			this->CustomerName->AutoSize = true;
			this->CustomerName->BackColor = System::Drawing::Color::Transparent;
			this->CustomerName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerName->ForeColor = System::Drawing::Color::White;
			this->CustomerName->Location = System::Drawing::Point(167, 70);
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Size = System::Drawing::Size(154, 24);
			this->CustomerName->TabIndex = 14;
			this->CustomerName->Text = L"CustomerName";
			// 
			// CustomerPhoto
			// 
			this->CustomerPhoto->BackColor = System::Drawing::Color::Transparent;
			this->CustomerPhoto->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"CustomerPhoto.Image")));
			this->CustomerPhoto->Location = System::Drawing::Point(35, 56);
			this->CustomerPhoto->Name = L"CustomerPhoto";
			this->CustomerPhoto->Size = System::Drawing::Size(110, 117);
			this->CustomerPhoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->CustomerPhoto->TabIndex = 11;
			this->CustomerPhoto->TabStop = false;
			// 
			// CustomerMail
			// 
			this->CustomerMail->AutoSize = true;
			this->CustomerMail->BackColor = System::Drawing::Color::Transparent;
			this->CustomerMail->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerMail->ForeColor = System::Drawing::Color::White;
			this->CustomerMail->Location = System::Drawing::Point(168, 129);
			this->CustomerMail->Name = L"CustomerMail";
			this->CustomerMail->Size = System::Drawing::Size(109, 18);
			this->CustomerMail->TabIndex = 15;
			this->CustomerMail->Text = L"CustomerMail";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->CustomerMail);
			this->panel1->Controls->Add(this->CustomerPhoto);
			this->panel1->Controls->Add(this->CustomerName);
			this->panel1->Location = System::Drawing::Point(54, 78);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 218);
			this->panel1->TabIndex = 18;
			// 
			// TicketB1
			// 
			this->TicketB1->AutoScroll = true;
			this->TicketB1->BackColor = System::Drawing::Color::Transparent;
			this->TicketB1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketB1.BackgroundImage")));
			this->TicketB1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketB1->Controls->Add(this->Table1);
			this->TicketB1->Controls->Add(this->BarName1);
			this->TicketB1->Location = System::Drawing::Point(1230, 78);
			this->TicketB1->Name = L"TicketB1";
			this->TicketB1->Size = System::Drawing::Size(692, 279);
			this->TicketB1->TabIndex = 19;
			// 
			// Table1
			// 
			this->Table1->AutoSize = true;
			this->Table1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table1->ForeColor = System::Drawing::Color::White;
			this->Table1->Location = System::Drawing::Point(128, 92);
			this->Table1->Name = L"Table1";
			this->Table1->Size = System::Drawing::Size(91, 19);
			this->Table1->TabIndex = 3;
			this->Table1->Text = L"A1Table2P";
			this->Table1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BarName1
			// 
			this->BarName1->AutoSize = true;
			this->BarName1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarName1->ForeColor = System::Drawing::Color::White;
			this->BarName1->Location = System::Drawing::Point(127, 30);
			this->BarName1->Name = L"BarName1";
			this->BarName1->Size = System::Drawing::Size(127, 30);
			this->BarName1->TabIndex = 2;
			this->BarName1->Text = L"OverTime";
			this->BarName1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::Transparent;
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->flowLayoutPanel1->Controls->Add(this->TicketF1);
			this->flowLayoutPanel1->Controls->Add(this->TicketF2);
			this->flowLayoutPanel1->Controls->Add(this->TicketF3);
			this->flowLayoutPanel1->Controls->Add(this->TicketF4);
			this->flowLayoutPanel1->Controls->Add(this->TicketF5);
			this->flowLayoutPanel1->Location = System::Drawing::Point(485, 69);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(721, 576);
			this->flowLayoutPanel1->TabIndex = 20;
			// 
			// TicketF1
			// 
			this->TicketF1->BackColor = System::Drawing::Color::Transparent;
			this->TicketF1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF1.BackgroundImage")));
			this->TicketF1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF1->Controls->Add(this->BarNameF1);
			this->TicketF1->Controls->Add(this->Name1);
			this->TicketF1->Controls->Add(this->Time1);
			this->TicketF1->Controls->Add(this->Date1);
			this->TicketF1->Location = System::Drawing::Point(3, 3);
			this->TicketF1->Name = L"TicketF1";
			this->TicketF1->Size = System::Drawing::Size(692, 279);
			this->TicketF1->TabIndex = 13;
			// 
			// BarNameF1
			// 
			this->BarNameF1->AutoSize = true;
			this->BarNameF1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameF1->ForeColor = System::Drawing::Color::White;
			this->BarNameF1->Location = System::Drawing::Point(251, 140);
			this->BarNameF1->Name = L"BarNameF1";
			this->BarNameF1->Size = System::Drawing::Size(127, 30);
			this->BarNameF1->TabIndex = 3;
			this->BarNameF1->Text = L"OverTime";
			this->BarNameF1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name1
			// 
			this->Name1->AutoSize = true;
			this->Name1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name1->ForeColor = System::Drawing::Color::White;
			this->Name1->Location = System::Drawing::Point(398, 207);
			this->Name1->Name = L"Name1";
			this->Name1->Size = System::Drawing::Size(84, 19);
			this->Name1->TabIndex = 2;
			this->Name1->Text = L"CxCxNuT";
			this->Name1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time1
			// 
			this->Time1->AutoSize = true;
			this->Time1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time1->ForeColor = System::Drawing::Color::White;
			this->Time1->Location = System::Drawing::Point(267, 207);
			this->Time1->Name = L"Time1";
			this->Time1->Size = System::Drawing::Size(94, 19);
			this->Time1->TabIndex = 1;
			this->Time1->Text = L"01.00 A.M.";
			this->Time1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date1
			// 
			this->Date1->AutoSize = true;
			this->Date1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date1->ForeColor = System::Drawing::Color::White;
			this->Date1->Location = System::Drawing::Point(128, 207);
			this->Date1->Name = L"Date1";
			this->Date1->Size = System::Drawing::Size(43, 19);
			this->Date1->TabIndex = 0;
			this->Date1->Text = L"Date";
			this->Date1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF2
			// 
			this->TicketF2->BackColor = System::Drawing::Color::Transparent;
			this->TicketF2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF2.BackgroundImage")));
			this->TicketF2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF2->Controls->Add(this->label1);
			this->TicketF2->Controls->Add(this->label2);
			this->TicketF2->Controls->Add(this->label3);
			this->TicketF2->Controls->Add(this->label4);
			this->TicketF2->Location = System::Drawing::Point(3, 288);
			this->TicketF2->Name = L"TicketF2";
			this->TicketF2->Size = System::Drawing::Size(692, 279);
			this->TicketF2->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(251, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 30);
			this->label1->TabIndex = 3;
			this->label1->Text = L"OverTime2";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(398, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 19);
			this->label2->TabIndex = 2;
			this->label2->Text = L"CxCxNuT";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(267, 207);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"01.00 A.M.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(128, 207);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 19);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Date";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF3
			// 
			this->TicketF3->BackColor = System::Drawing::Color::Transparent;
			this->TicketF3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF3.BackgroundImage")));
			this->TicketF3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF3->Controls->Add(this->label5);
			this->TicketF3->Controls->Add(this->label6);
			this->TicketF3->Controls->Add(this->label7);
			this->TicketF3->Controls->Add(this->label8);
			this->TicketF3->Location = System::Drawing::Point(3, 573);
			this->TicketF3->Name = L"TicketF3";
			this->TicketF3->Size = System::Drawing::Size(692, 279);
			this->TicketF3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(251, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(141, 30);
			this->label5->TabIndex = 3;
			this->label5->Text = L"OverTime3";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(398, 207);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 19);
			this->label6->TabIndex = 2;
			this->label6->Text = L"CxCxNuT";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(267, 207);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 19);
			this->label7->TabIndex = 1;
			this->label7->Text = L"01.00 A.M.";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(128, 207);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 19);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Date";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF4
			// 
			this->TicketF4->BackColor = System::Drawing::Color::Transparent;
			this->TicketF4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF4.BackgroundImage")));
			this->TicketF4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF4->Controls->Add(this->label13);
			this->TicketF4->Controls->Add(this->label14);
			this->TicketF4->Controls->Add(this->label15);
			this->TicketF4->Controls->Add(this->label16);
			this->TicketF4->Location = System::Drawing::Point(3, 858);
			this->TicketF4->Name = L"TicketF4";
			this->TicketF4->Size = System::Drawing::Size(692, 279);
			this->TicketF4->TabIndex = 13;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(251, 140);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(141, 30);
			this->label13->TabIndex = 3;
			this->label13->Text = L"OverTime4";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(398, 207);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(84, 19);
			this->label14->TabIndex = 2;
			this->label14->Text = L"CxCxNuT";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(267, 207);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 19);
			this->label15->TabIndex = 1;
			this->label15->Text = L"01.00 A.M.";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(128, 207);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(43, 19);
			this->label16->TabIndex = 0;
			this->label16->Text = L"Date";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF5
			// 
			this->TicketF5->BackColor = System::Drawing::Color::Transparent;
			this->TicketF5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF5.BackgroundImage")));
			this->TicketF5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF5->Controls->Add(this->label17);
			this->TicketF5->Controls->Add(this->label18);
			this->TicketF5->Controls->Add(this->label19);
			this->TicketF5->Controls->Add(this->label20);
			this->TicketF5->Location = System::Drawing::Point(3, 1143);
			this->TicketF5->Name = L"TicketF5";
			this->TicketF5->Size = System::Drawing::Size(692, 279);
			this->TicketF5->TabIndex = 14;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(251, 140);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(141, 30);
			this->label17->TabIndex = 3;
			this->label17->Text = L"OverTime5";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(398, 207);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(84, 19);
			this->label18->TabIndex = 2;
			this->label18->Text = L"CxCxNuT";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(267, 207);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(94, 19);
			this->label19->TabIndex = 1;
			this->label19->Text = L"01.00 A.M.";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(128, 207);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(43, 19);
			this->label20->TabIndex = 0;
			this->label20->Text = L"Date";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->TicketB1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->TicketB1->ResumeLayout(false);
			this->TicketB1->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->TicketF1->ResumeLayout(false);
			this->TicketF1->PerformLayout();
			this->TicketF2->ResumeLayout(false);
			this->TicketF2->PerformLayout();
			this->TicketF3->ResumeLayout(false);
			this->TicketF3->PerformLayout();
			this->TicketF4->ResumeLayout(false);
			this->TicketF4->PerformLayout();
			this->TicketF5->ResumeLayout(false);
			this->TicketF5->PerformLayout();
			this->ResumeLayout(false);

		}
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
#pragma endregion
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
		this->TicketB1->Location = System::Drawing::Point(494, 70);
		//this->TicketF1->Location = System::Drawing::Point(494, 70);
		using namespace std;
		string path, line;
		MarshalString(temp, path);
		ifstream fileIn(path);
		vector<string> lines;
		while (getline(fileIn, line)) {
			lines.push_back(line);
		}
		line = lines[lines.size() - 1];
		fileIn.close();
		char dayc[100], monthc[100], yearc[100], timec[100] , amc[50];
		char format[] = "Date: %s %s %s Time: %s %s complete";
		sscanf(line.c_str(), format, dayc , monthc, yearc, timec, amc);
		String^ date = gcnew String(dayc) + " " + gcnew String(monthc) + " " + gcnew String(yearc);
		String^ time = gcnew String(timec) + " " + gcnew String(amc);
		Date1->Text = date;
		Time1->Text = time;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToProfile = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToProfile = true;
		//this->Close();
	}
private: System::Void Ticket1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void TicketF1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	TicketB1->Hide();
	TicketF1->Show();
}
private: System::Void TicketF1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	TicketF1->Hide();
	TicketB1->Show();
}

};
}
