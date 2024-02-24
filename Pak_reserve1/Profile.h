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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1200, 6);
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
			// Profile
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Profile";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Profile";
			this->Load += gcnew System::EventHandler(this, &Profile::Profile_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CustomerPhoto))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
