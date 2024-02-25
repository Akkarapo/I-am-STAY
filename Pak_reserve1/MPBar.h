#pragma once
#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
#include "User.h"
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
		MPBar(User ^user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			Name->Text = user->username;
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


	protected:


	private: System::Windows::Forms::PictureBox^ pictureBox2;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Date;
	private: System::Windows::Forms::Label^ Time;
	private: System::Windows::Forms::Label^ Name;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Table;
	private: System::Windows::Forms::Label^ BarName;
	private: System::Windows::Forms::Label^ BarNameFront;

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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->BarNameFront = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
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
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MPBar::pictureBox2_Click_1);
			// 
			// panel1
			// 
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->BarNameFront);
			this->panel1->Controls->Add(this->Name);
			this->panel1->Controls->Add(this->Time);
			this->panel1->Controls->Add(this->Date);
			this->panel1->Name = L"panel1";
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &MPBar::panel1_MouseLeave);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MPBar::panel1_MouseMove);
			// 
			// BarNameFront
			// 
			resources->ApplyResources(this->BarNameFront, L"BarNameFront");
			this->BarNameFront->ForeColor = System::Drawing::Color::White;
			this->BarNameFront->Name = L"BarNameFront";
			// 
			// Name
			// 
			resources->ApplyResources(this->Name, L"Name");
			this->Name->ForeColor = System::Drawing::Color::White;
			this->Name->Name = L"Name";
			// 
			// Time
			// 
			resources->ApplyResources(this->Time, L"Time");
			this->Time->ForeColor = System::Drawing::Color::White;
			this->Time->Name = L"Time";
			// 
			// Date
			// 
			resources->ApplyResources(this->Date, L"Date");
			this->Date->ForeColor = System::Drawing::Color::White;
			this->Date->Name = L"Date";
			this->Date->Click += gcnew System::EventHandler(this, &MPBar::Date_Click);
			// 
			// panel2
			// 
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->Table);
			this->panel2->Controls->Add(this->BarName);
			this->panel2->Name = L"panel2";
			// 
			// Table
			// 
			resources->ApplyResources(this->Table, L"Table");
			this->Table->ForeColor = System::Drawing::Color::White;
			this->Table->Name = L"Table";
			// 
			// BarName
			// 
			resources->ApplyResources(this->BarName, L"BarName");
			this->BarName->ForeColor = System::Drawing::Color::White;
			this->BarName->Name = L"BarName";
			// 
			// MPBar
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Load += gcnew System::EventHandler(this, &MPBar::MPBar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
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
	public: String^ date = DateTime::Now.ToString("dd MMM yyyy");
private: System::Void MPBar_Load(System::Object^ sender, System::EventArgs^ e) {
	
	this->Date->Text = date;
	this->Time->Text = DateTime::Now.ToString("hh:mm tt");
	//this->Name->Text = name;
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
};
}