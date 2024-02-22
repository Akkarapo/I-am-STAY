#pragma once
#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
#include <ctime>

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Timers;
	
	/// <summary>
	/// Summary for MPBar
	/// </summary>
	public ref class MPBar : public System::Windows::Forms::Form
	{
	public:
		MPBar(void)
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
		~MPBar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	protected:






	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ Time;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MPBar::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Time = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 56);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1200, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MPBar::pictureBox2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->Controls->Add(this->Name);
			this->panel1->Controls->Add(this->Time);
			this->panel1->Controls->Add(this->Date);
			this->panel1->Location = System::Drawing::Point(110, 109);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1032, 488);
			this->panel1->TabIndex = 9;
			// 
			// Time
			// 
			this->Time->AutoSize = true;
			this->Time->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Location = System::Drawing::Point(409, 345);
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
			this->Date->Location = System::Drawing::Point(188, 345);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(100, 19);
			this->Date->TabIndex = 0;
			this->Date->Text = L"22 Feb 2024";
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::Color::White;
			this->Name->Location = System::Drawing::Point(620, 345);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(84, 19);
			this->Name->TabIndex = 2;
			this->Name->Text = L"CxCxNuT";
			this->Name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MPBar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			//this->Name = L"MPBar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MPBar";
			this->Load += gcnew System::EventHandler(this, &MPBar::MPBar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

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
private: System::Void MPBar_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Date->Text = DateTime::Now.ToString("dd MMM yyyy");
	this->Time->Text = DateTime::Now.ToString("hh:mm tt");
}
};
}