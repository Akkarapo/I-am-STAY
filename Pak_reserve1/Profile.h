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
		String^ date = nullptr;
		String^ time = nullptr;
		String^ bar = nullptr;
		String^ table = nullptr;
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
	private: System::Windows::Forms::Label^ BarNameF2;
	private: System::Windows::Forms::Label^ Name2;



	private: System::Windows::Forms::Label^ Time2;

	private: System::Windows::Forms::Label^ Date2;

	private: System::Windows::Forms::Panel^ TicketF1;
	private: System::Windows::Forms::Label^ BarNameF1;
	private: System::Windows::Forms::Label^ Name1;



	private: System::Windows::Forms::Label^ Time1;

	private: System::Windows::Forms::Label^ Date1;
	private: System::Windows::Forms::Panel^ TicketF3;
	private: System::Windows::Forms::Label^ BarNameF3;
	private: System::Windows::Forms::Label^ Name3;




	private: System::Windows::Forms::Label^ Time3;

	private: System::Windows::Forms::Label^ Date3;

	private: System::Windows::Forms::Panel^ TicketF4;
	private: System::Windows::Forms::Label^ BarNameF4;
	private: System::Windows::Forms::Label^ Name4;



	private: System::Windows::Forms::Label^ Time4;

	private: System::Windows::Forms::Label^ Date4;

	private: System::Windows::Forms::Panel^ TicketF5;
	private: System::Windows::Forms::Label^ BarNameF5;
private: System::Windows::Forms::Label^ Name5;



private: System::Windows::Forms::Label^ Time5;

private: System::Windows::Forms::Label^ Date5;

	private: System::Windows::Forms::PictureBox^ pictureBox1;

























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
			this->BarNameF2 = (gcnew System::Windows::Forms::Label());
			this->Name2 = (gcnew System::Windows::Forms::Label());
			this->Time2 = (gcnew System::Windows::Forms::Label());
			this->Date2 = (gcnew System::Windows::Forms::Label());
			this->TicketF3 = (gcnew System::Windows::Forms::Panel());
			this->BarNameF3 = (gcnew System::Windows::Forms::Label());
			this->Name3 = (gcnew System::Windows::Forms::Label());
			this->Time3 = (gcnew System::Windows::Forms::Label());
			this->Date3 = (gcnew System::Windows::Forms::Label());
			this->TicketF4 = (gcnew System::Windows::Forms::Panel());
			this->BarNameF4 = (gcnew System::Windows::Forms::Label());
			this->Name4 = (gcnew System::Windows::Forms::Label());
			this->Time4 = (gcnew System::Windows::Forms::Label());
			this->Date4 = (gcnew System::Windows::Forms::Label());
			this->TicketF5 = (gcnew System::Windows::Forms::Panel());
			this->BarNameF5 = (gcnew System::Windows::Forms::Label());
			this->Name5 = (gcnew System::Windows::Forms::Label());
			this->Time5 = (gcnew System::Windows::Forms::Label());
			this->Date5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->TicketB1->Location = System::Drawing::Point(1225, 78);
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
			this->TicketF2->Controls->Add(this->BarNameF2);
			this->TicketF2->Controls->Add(this->Name2);
			this->TicketF2->Controls->Add(this->Time2);
			this->TicketF2->Controls->Add(this->Date2);
			this->TicketF2->Location = System::Drawing::Point(3, 288);
			this->TicketF2->Name = L"TicketF2";
			this->TicketF2->Size = System::Drawing::Size(692, 279);
			this->TicketF2->TabIndex = 11;
			// 
			// BarNameF2
			// 
			this->BarNameF2->AutoSize = true;
			this->BarNameF2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameF2->ForeColor = System::Drawing::Color::White;
			this->BarNameF2->Location = System::Drawing::Point(251, 140);
			this->BarNameF2->Name = L"BarNameF2";
			this->BarNameF2->Size = System::Drawing::Size(141, 30);
			this->BarNameF2->TabIndex = 3;
			this->BarNameF2->Text = L"OverTime2";
			this->BarNameF2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name2
			// 
			this->Name2->AutoSize = true;
			this->Name2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name2->ForeColor = System::Drawing::Color::White;
			this->Name2->Location = System::Drawing::Point(398, 207);
			this->Name2->Name = L"Name2";
			this->Name2->Size = System::Drawing::Size(84, 19);
			this->Name2->TabIndex = 2;
			this->Name2->Text = L"CxCxNuT";
			this->Name2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time2
			// 
			this->Time2->AutoSize = true;
			this->Time2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time2->ForeColor = System::Drawing::Color::White;
			this->Time2->Location = System::Drawing::Point(267, 207);
			this->Time2->Name = L"Time2";
			this->Time2->Size = System::Drawing::Size(94, 19);
			this->Time2->TabIndex = 1;
			this->Time2->Text = L"01.00 A.M.";
			this->Time2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date2
			// 
			this->Date2->AutoSize = true;
			this->Date2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date2->ForeColor = System::Drawing::Color::White;
			this->Date2->Location = System::Drawing::Point(128, 207);
			this->Date2->Name = L"Date2";
			this->Date2->Size = System::Drawing::Size(43, 19);
			this->Date2->TabIndex = 0;
			this->Date2->Text = L"Date";
			this->Date2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF3
			// 
			this->TicketF3->BackColor = System::Drawing::Color::Transparent;
			this->TicketF3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF3.BackgroundImage")));
			this->TicketF3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF3->Controls->Add(this->BarNameF3);
			this->TicketF3->Controls->Add(this->Name3);
			this->TicketF3->Controls->Add(this->Time3);
			this->TicketF3->Controls->Add(this->Date3);
			this->TicketF3->Location = System::Drawing::Point(3, 573);
			this->TicketF3->Name = L"TicketF3";
			this->TicketF3->Size = System::Drawing::Size(692, 279);
			this->TicketF3->TabIndex = 12;
			// 
			// BarNameF3
			// 
			this->BarNameF3->AutoSize = true;
			this->BarNameF3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameF3->ForeColor = System::Drawing::Color::White;
			this->BarNameF3->Location = System::Drawing::Point(251, 140);
			this->BarNameF3->Name = L"BarNameF3";
			this->BarNameF3->Size = System::Drawing::Size(141, 30);
			this->BarNameF3->TabIndex = 3;
			this->BarNameF3->Text = L"OverTime3";
			this->BarNameF3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name3
			// 
			this->Name3->AutoSize = true;
			this->Name3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name3->ForeColor = System::Drawing::Color::White;
			this->Name3->Location = System::Drawing::Point(398, 207);
			this->Name3->Name = L"Name3";
			this->Name3->Size = System::Drawing::Size(84, 19);
			this->Name3->TabIndex = 2;
			this->Name3->Text = L"CxCxNuT";
			this->Name3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time3
			// 
			this->Time3->AutoSize = true;
			this->Time3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time3->ForeColor = System::Drawing::Color::White;
			this->Time3->Location = System::Drawing::Point(267, 207);
			this->Time3->Name = L"Time3";
			this->Time3->Size = System::Drawing::Size(94, 19);
			this->Time3->TabIndex = 1;
			this->Time3->Text = L"01.00 A.M.";
			this->Time3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date3
			// 
			this->Date3->AutoSize = true;
			this->Date3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date3->ForeColor = System::Drawing::Color::White;
			this->Date3->Location = System::Drawing::Point(128, 207);
			this->Date3->Name = L"Date3";
			this->Date3->Size = System::Drawing::Size(43, 19);
			this->Date3->TabIndex = 0;
			this->Date3->Text = L"Date";
			this->Date3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF4
			// 
			this->TicketF4->BackColor = System::Drawing::Color::Transparent;
			this->TicketF4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF4.BackgroundImage")));
			this->TicketF4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF4->Controls->Add(this->BarNameF4);
			this->TicketF4->Controls->Add(this->Name4);
			this->TicketF4->Controls->Add(this->Time4);
			this->TicketF4->Controls->Add(this->Date4);
			this->TicketF4->Location = System::Drawing::Point(3, 858);
			this->TicketF4->Name = L"TicketF4";
			this->TicketF4->Size = System::Drawing::Size(692, 279);
			this->TicketF4->TabIndex = 13;
			// 
			// BarNameF4
			// 
			this->BarNameF4->AutoSize = true;
			this->BarNameF4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameF4->ForeColor = System::Drawing::Color::White;
			this->BarNameF4->Location = System::Drawing::Point(251, 140);
			this->BarNameF4->Name = L"BarNameF4";
			this->BarNameF4->Size = System::Drawing::Size(141, 30);
			this->BarNameF4->TabIndex = 3;
			this->BarNameF4->Text = L"OverTime4";
			this->BarNameF4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name4
			// 
			this->Name4->AutoSize = true;
			this->Name4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name4->ForeColor = System::Drawing::Color::White;
			this->Name4->Location = System::Drawing::Point(398, 207);
			this->Name4->Name = L"Name4";
			this->Name4->Size = System::Drawing::Size(84, 19);
			this->Name4->TabIndex = 2;
			this->Name4->Text = L"CxCxNuT";
			this->Name4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time4
			// 
			this->Time4->AutoSize = true;
			this->Time4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time4->ForeColor = System::Drawing::Color::White;
			this->Time4->Location = System::Drawing::Point(267, 207);
			this->Time4->Name = L"Time4";
			this->Time4->Size = System::Drawing::Size(94, 19);
			this->Time4->TabIndex = 1;
			this->Time4->Text = L"01.00 A.M.";
			this->Time4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date4
			// 
			this->Date4->AutoSize = true;
			this->Date4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date4->ForeColor = System::Drawing::Color::White;
			this->Date4->Location = System::Drawing::Point(128, 207);
			this->Date4->Name = L"Date4";
			this->Date4->Size = System::Drawing::Size(43, 19);
			this->Date4->TabIndex = 0;
			this->Date4->Text = L"Date";
			this->Date4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF5
			// 
			this->TicketF5->BackColor = System::Drawing::Color::Transparent;
			this->TicketF5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF5.BackgroundImage")));
			this->TicketF5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF5->Controls->Add(this->BarNameF5);
			this->TicketF5->Controls->Add(this->Name5);
			this->TicketF5->Controls->Add(this->Time5);
			this->TicketF5->Controls->Add(this->Date5);
			this->TicketF5->Location = System::Drawing::Point(3, 1143);
			this->TicketF5->Name = L"TicketF5";
			this->TicketF5->Size = System::Drawing::Size(692, 279);
			this->TicketF5->TabIndex = 14;
			// 
			// BarNameF5
			// 
			this->BarNameF5->AutoSize = true;
			this->BarNameF5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameF5->ForeColor = System::Drawing::Color::White;
			this->BarNameF5->Location = System::Drawing::Point(251, 140);
			this->BarNameF5->Name = L"BarNameF5";
			this->BarNameF5->Size = System::Drawing::Size(141, 30);
			this->BarNameF5->TabIndex = 3;
			this->BarNameF5->Text = L"OverTime5";
			this->BarNameF5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name5
			// 
			this->Name5->AutoSize = true;
			this->Name5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name5->ForeColor = System::Drawing::Color::White;
			this->Name5->Location = System::Drawing::Point(398, 207);
			this->Name5->Name = L"Name5";
			this->Name5->Size = System::Drawing::Size(84, 19);
			this->Name5->TabIndex = 2;
			this->Name5->Text = L"CxCxNuT";
			this->Name5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Name5->Click += gcnew System::EventHandler(this, &Profile::label18_Click);
			// 
			// Time5
			// 
			this->Time5->AutoSize = true;
			this->Time5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time5->ForeColor = System::Drawing::Color::White;
			this->Time5->Location = System::Drawing::Point(267, 207);
			this->Time5->Name = L"Time5";
			this->Time5->Size = System::Drawing::Size(94, 19);
			this->Time5->TabIndex = 1;
			this->Time5->Text = L"01.00 A.M.";
			this->Time5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date5
			// 
			this->Date5->AutoSize = true;
			this->Date5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date5->ForeColor = System::Drawing::Color::White;
			this->Date5->Location = System::Drawing::Point(128, 207);
			this->Date5->Name = L"Date5";
			this->Date5->Size = System::Drawing::Size(43, 19);
			this->Date5->TabIndex = 0;
			this->Date5->Text = L"Date";
			this->Date5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(70, 31);
			this->pictureBox1->TabIndex = 21;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Profile::pictureBox1_Click);
			// 
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->pictureBox1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		void UpdateData(std::string line)
		{
			//line = lines[lines.size() - count-1];
			char barc[100], tablec[100], dayc[100], monthc[100], yearc[100], timec[100], amc[50];
			char format[] = "BarName: %s %s Date: %s %s %s Time: %s %s complete";
			sscanf(line.c_str(), format, barc, tablec, dayc, monthc, yearc, timec, amc);
			date = gcnew String(dayc) + " " + gcnew String(monthc) + " " + gcnew String(yearc);
			time = gcnew String(timec) + " " + gcnew String(amc);
			bar = gcnew String(barc);
			table = gcnew String(tablec);
		}

#pragma endregion
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
		TicketF1->Hide();
		TicketF2->Hide();
		TicketF3->Hide();
		TicketF4->Hide();
		TicketF5->Hide();
		TicketB1->Hide();
		this->TicketB1->Location = System::Drawing::Point(494, 70);
		//this->TicketF1->Location = System::Drawing::Point(494, 70);
		using namespace std;
		string path,line;
		MarshalString(temp, path);
		ifstream fileIn(path);
		vector<string> lines;
		while (getline(fileIn, line)) {
			lines.push_back(line);
		}
		fileIn.close();
		/*line = lines[lines.size() - 1];
		fileIn.close();
		char barc[100], tablec[100], dayc[100], monthc[100], yearc[100], timec[100], amc[50];
		char format[] = "BarName: %s %s Date: %s %s %s Time: %s %s complete";
		sscanf(line.c_str(), format, barc, tablec, dayc, monthc, yearc, timec, amc);
		date = gcnew String(dayc) + " " + gcnew String(monthc) + " " + gcnew String(yearc);
		time = gcnew String(timec) + " " + gcnew String(amc);
		bar = gcnew String(barc);
		table = gcnew String(tablec);*/
		int count = lines.size();
		if (count > 6) count = 6;
		switch (count)
		{
		case 6:TicketF5->Show();
			line = lines[lines.size() - 5];
			UpdateData(line);
			Date5->Text = date;
			Time5->Text = time;
			BarNameF5->Text = bar;
			//Table5->Text = table;
		case 5: TicketF4->Show();
			line = lines[lines.size() - 4];
			UpdateData(line);
			Date4->Text = date;
			Time4->Text = time;
			BarNameF4->Text = bar;
			//Table4->Text = table;
		case 4:	TicketF3->Show();
			line = lines[lines.size() - 3];
			UpdateData(line);
			Date3->Text = date;
			Time3->Text = time;
			BarNameF3->Text = bar;
			//Table3->Text = table;
		case 3:	TicketF2->Show();
			line = lines[lines.size() - 2];
			UpdateData(line);
			Date2->Text = date;
			Time2->Text = time;
			BarNameF2->Text = bar;
			//Table2->Text = table;
		case 2:	TicketF1->Show();
			line = lines[lines.size() - 1];
			UpdateData(line);
			Date1->Text = date;
			Time1->Text = time;
			BarNameF1->Text = bar;
			BarName1->Text = bar;
			Table1->Text = table;
		
		case 1:	
		
			default:
				break;
		}

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
public: bool switchToToey = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToToey = true;
	this->Close();
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
