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
			Name->Text = user->username;
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

	private: System::Windows::Forms::Label^ Table;
	private: System::Windows::Forms::Label^ BarName;
	private: System::Windows::Forms::Panel^ TicketF1;

	private: System::Windows::Forms::Label^ BarNameFront;
	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Label^ Time;
	private: System::Windows::Forms::Label^ Date;
























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
			this->Table = (gcnew System::Windows::Forms::Label());
			this->BarName = (gcnew System::Windows::Forms::Label());
			this->TicketF1 = (gcnew System::Windows::Forms::Panel());
			this->BarNameFront = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->TicketB1->SuspendLayout();
			this->TicketF1->SuspendLayout();
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
			this->TicketB1->Controls->Add(this->Table);
			this->TicketB1->Controls->Add(this->BarName);
			this->TicketB1->Location = System::Drawing::Point(1100, 78);
			this->TicketB1->Name = L"TicketB1";
			this->TicketB1->Size = System::Drawing::Size(692, 279);
			this->TicketB1->TabIndex = 19;
			// 
			// Table
			// 
			this->Table->AutoSize = true;
			this->Table->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table->ForeColor = System::Drawing::Color::White;
			this->Table->Location = System::Drawing::Point(128, 92);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(91, 19);
			this->Table->TabIndex = 3;
			this->Table->Text = L"A1Table2P";
			this->Table->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BarName
			// 
			this->BarName->AutoSize = true;
			this->BarName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarName->ForeColor = System::Drawing::Color::White;
			this->BarName->Location = System::Drawing::Point(127, 30);
			this->BarName->Name = L"BarName";
			this->BarName->Size = System::Drawing::Size(127, 30);
			this->BarName->TabIndex = 2;
			this->BarName->Text = L"OverTime";
			this->BarName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TicketF1
			// 
			this->TicketF1->BackColor = System::Drawing::Color::Transparent;
			this->TicketF1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketF1.BackgroundImage")));
			this->TicketF1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->TicketF1->Controls->Add(this->BarNameFront);
			this->TicketF1->Controls->Add(this->Name);
			this->TicketF1->Controls->Add(this->Time);
			this->TicketF1->Controls->Add(this->Date);
			this->TicketF1->Location = System::Drawing::Point(518, 78);
			this->TicketF1->Name = L"TicketF1";
			this->TicketF1->Size = System::Drawing::Size(692, 279);
			this->TicketF1->TabIndex = 10;
			this->TicketF1->MouseLeave += gcnew System::EventHandler(this, &Profile::TicketF1_MouseLeave);
			this->TicketF1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::TicketF1_MouseMove);
			// 
			// BarNameFront
			// 
			this->BarNameFront->AutoSize = true;
			this->BarNameFront->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameFront->ForeColor = System::Drawing::Color::White;
			this->BarNameFront->Location = System::Drawing::Point(251, 140);
			this->BarNameFront->Name = L"BarNameFront";
			this->BarNameFront->Size = System::Drawing::Size(127, 30);
			this->BarNameFront->TabIndex = 3;
			this->BarNameFront->Text = L"OverTime";
			this->BarNameFront->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::Color::White;
			this->Name->Location = System::Drawing::Point(398, 207);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(84, 19);
			this->Name->TabIndex = 2;
			this->Name->Text = L"CxCxNuT";
			this->Name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Location = System::Drawing::Point(267, 207);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(94, 19);
			this->Time->TabIndex = 1;
			this->Time->Text = L"01.00 A.M.";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::Color::White;
			this->Date->Location = System::Drawing::Point(128, 207);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(43, 19);
			this->Date->TabIndex = 0;
			this->Date->Text = L"Date";
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->TicketF1);
			this->Controls->Add(this->TicketB1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			this->MouseLeave += gcnew System::EventHandler(this, &Profile::TicketF1_MouseLeave);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Profile::TicketF1_MouseMove);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->TicketB1->ResumeLayout(false);
			this->TicketB1->PerformLayout();
			this->TicketF1->ResumeLayout(false);
			this->TicketF1->PerformLayout();
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
		this->TicketF1->Location = System::Drawing::Point(494, 70);
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
		Date->Text = date;
		Time->Text = time;

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
