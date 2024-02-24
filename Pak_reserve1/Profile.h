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


	private: System::Windows::Forms::Label^ CustomerName;
	private: System::Windows::Forms::PictureBox^ CustomerPhoto;
	private: System::Windows::Forms::Label^ CustomerMail;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Table;
	private: System::Windows::Forms::Label^ BarName;
	private: System::Windows::Forms::Panel^ panel3;
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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Table = (gcnew System::Windows::Forms::Label());
			this->BarName = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->BarNameFront = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
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
			this->panel1->Location = System::Drawing::Point(39, 70);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(375, 218);
			this->panel1->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel2->Controls->Add(this->Table);
			this->panel2->Controls->Add(this->BarName);
			this->panel2->Location = System::Drawing::Point(494, 373);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(692, 279);
			this->panel2->TabIndex = 19;
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
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel3->Controls->Add(this->BarNameFront);
			this->panel3->Controls->Add(this->Name);
			this->panel3->Controls->Add(this->Time);
			this->panel3->Controls->Add(this->Date);
			this->panel3->Location = System::Drawing::Point(494, 70);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(692, 279);
			this->panel3->TabIndex = 10;
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
			this->Date->Size = System::Drawing::Size(0, 19);
			this->Date->TabIndex = 0;
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Profile_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void userControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void userControl1_Load_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
