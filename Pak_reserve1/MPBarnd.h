#pragma once
#include "PakForm.h"
#include "Login.h"
#include "MPBarnd.h"
#include "Profile.h"
#include "User.h"
#include <ctime>
#include <fstream>

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Timers;
	using namespace System::Globalization;

	/// <summary>
	/// Summary for MPBarnd
	/// </summary>
	public ref class MPBarnd : public System::Windows::Forms::Form
	{

	public:

		MPBarnd(User^ user)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//Name->Text = user->username;
			String^ temp = Application::StartupPath + user->username + ".txt";
			CultureInfo^ culture = gcnew CultureInfo("en-US");
			String^ time = DateTime::Now.ToString("hh:mm tt");
			String^ date = DateTime::Now.ToString("dd MMMM yyyy", culture);
			Time->Text = time;
			Date->Text = date;
			using namespace std;
			string path, line, datec, timec;
			MarshalString(temp, path);
			MarshalString(time, timec);
			MarshalString(date, datec);
			ifstream fileIn(path);
			vector<string> lines;
			while (getline(fileIn, line)) {
				lines.push_back(line);
			}
			fileIn.close();
			ofstream fileOut(path, ios::app);
			fileOut << datec << " " << timec << endl;
			fileOut.close();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MPBarnd()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ Time;
		   //private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Table;
	private: System::Windows::Forms::Label^ BarName;
	private: System::Windows::Forms::Label^ BarNameFront;
	private: System::Windows::Forms::Label^ Name;


	private:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MPBarnd::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->BarNameFront = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Table = (gcnew System::Windows::Forms::Label());
			this->BarName = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1216, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MPBarnd::pictureBox2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->Name);
			this->panel1->Controls->Add(this->BarNameFront);
			this->panel1->Controls->Add(this->Time);
			this->panel1->Controls->Add(this->Date);
			this->panel1->Location = System::Drawing::Point(12, 100);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1032, 488);
			this->panel1->TabIndex = 9;
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &MPBarnd::panel1_MouseLeave);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MPBarnd::panel1_MouseMove);
			// 
			// Name
			// 
			this->Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F));
			this->Name->ForeColor = System::Drawing::Color::White;
			this->Name->Location = System::Drawing::Point(646, 362);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(74, 19);
			this->Name->TabIndex = 4;
			this->Name->Text = L"AAAAA";
			this->Name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BarNameFront
			// 
			this->BarNameFront->AutoSize = true;
			this->BarNameFront->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F));
			this->BarNameFront->ForeColor = System::Drawing::Color::White;
			this->BarNameFront->Location = System::Drawing::Point(389, 275);
			this->BarNameFront->Name = L"BarNameFront";
			this->BarNameFront->Size = System::Drawing::Size(127, 30);
			this->BarNameFront->TabIndex = 3;
			this->BarNameFront->Text = L"OverTime";
			this->BarNameFront->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Time
			// 
			this->Time->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F));
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Location = System::Drawing::Point(424, 362);
			this->Time->Name = L"Time";
			this->Time->Size = System::Drawing::Size(92, 19);
			this->Time->TabIndex = 1;
			this->Time->Text = L"AAAA AA";
			this->Time->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F));
			this->Date->ForeColor = System::Drawing::Color::White;
			this->Date->Location = System::Drawing::Point(174, 362);
			this->Date->Name = L"Date";
			this->Date->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Date->Size = System::Drawing::Size(175, 19);
			this->Date->TabIndex = 0;
			this->Date->Text = L"AA AAAAAAAA AA";
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Date->Click += gcnew System::EventHandler(this, &MPBarnd::Date_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->Table);
			this->panel2->Controls->Add(this->BarName);
			this->panel2->Location = System::Drawing::Point(929, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1032, 488);
			this->panel2->TabIndex = 10;
			// 
			// Table
			// 
			this->Table->AutoSize = true;
			this->Table->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F));
			this->Table->ForeColor = System::Drawing::Color::White;
			this->Table->Location = System::Drawing::Point(187, 162);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(91, 19);
			this->Table->TabIndex = 3;
			this->Table->Text = L"A1Table2P";
			this->Table->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BarName
			// 
			this->BarName->AutoSize = true;
			this->BarName->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F));
			this->BarName->ForeColor = System::Drawing::Color::White;
			this->BarName->Location = System::Drawing::Point(139, 64);
			this->BarName->Name = L"BarName";
			this->BarName->Size = System::Drawing::Size(127, 30);
			this->BarName->TabIndex = 2;
			this->BarName->Text = L"OverTime";
			this->BarName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MPBarnd
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//this->Name = L"MPBarnd";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MPBarnd::MPBarnd_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	public: bool switchToProfile = false;
	private: System::Void pictureBox2_Click_1(System::Object^ sender, System::EventArgs^ e) {
		this->switchToProfile = true;
		this->Close();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void TicketCustomerTable_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //public: String^ date = DateTime::Now.ToString("dd MMM yyyy");
	private: System::Void MPBarnd_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panel1->Location = System::Drawing::Point(110, 109);
		this->panel2->Location = System::Drawing::Point(110, 109);
	}
	private: System::Void Date_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {

		panel1->Hide();
		panel2->Show();
		//BarName->Show();
		//Table->Show();
	}
	private: System::Void panel1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {

		panel2->Hide();
		panel1->Show();
		//BarName->Hide();
		//Table->Hide();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}