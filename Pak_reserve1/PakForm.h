#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PakForm
	/// </summary>
	public ref class PakForm : public System::Windows::Forms::Form
	{
	public:
		PakForm(void)
		{
			InitializeComponent();
			A1Table2PGreen->Hide();
			A2Table2PGreen->Hide();
			A3Table2PGreen->Hide();
			B1Table2PGreen->Hide();
			B2Table4PGreen->Hide();
			B3Table4PGreen->Hide();
			B4Table4PGreen->Hide();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PakForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ A1Table2P;
	private: System::Windows::Forms::PictureBox^ A1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table2P;

	private: System::Windows::Forms::PictureBox^ A3Table2P;
	private: System::Windows::Forms::PictureBox^ A3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table2PGreen;

	private: System::Windows::Forms::PictureBox^ B1Table2P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table4PGreen;

	private: System::Windows::Forms::PictureBox^ B3Table4P;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4P;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PakForm::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Location = System::Drawing::Point(36, 611);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(267, 66);
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// A1Table2P
			// 
			this->A1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2P.BackgroundImage")));
			this->A1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2P->Location = System::Drawing::Point(496, 157);
			this->A1Table2P->Name = L"A1Table2P";
			this->A1Table2P->Size = System::Drawing::Size(33, 75);
			this->A1Table2P->TabIndex = 3;
			this->A1Table2P->TabStop = false;
			this->A1Table2P->Click += gcnew System::EventHandler(this, &PakForm::A1Table2P_Click);
			// 
			// A1Table2PGreen
			// 
			this->A1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PGreen.BackgroundImage")));
			this->A1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2PGreen->Location = System::Drawing::Point(496, 157);
			this->A1Table2PGreen->Name = L"A1Table2PGreen";
			this->A1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A1Table2PGreen->TabIndex = 4;
			this->A1Table2PGreen->TabStop = false;
			this->A1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A1Table2PGreen_Click);
			// 
			// A2Table2PGreen
			// 
			this->A2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PGreen.BackgroundImage")));
			this->A2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2PGreen->Location = System::Drawing::Point(665, 157);
			this->A2Table2PGreen->Name = L"A2Table2PGreen";
			this->A2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A2Table2PGreen->TabIndex = 5;
			this->A2Table2PGreen->TabStop = false;
			this->A2Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A2Table2PGreen_Click);
			// 
			// A2Table2P
			// 
			this->A2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2P.BackgroundImage")));
			this->A2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2P->Location = System::Drawing::Point(665, 157);
			this->A2Table2P->Name = L"A2Table2P";
			this->A2Table2P->Size = System::Drawing::Size(33, 75);
			this->A2Table2P->TabIndex = 6;
			this->A2Table2P->TabStop = false;
			this->A2Table2P->Click += gcnew System::EventHandler(this, &PakForm::A2Table2P_Click);
			// 
			// A3Table2P
			// 
			this->A3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2P.BackgroundImage")));
			this->A3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2P->Location = System::Drawing::Point(834, 157);
			this->A3Table2P->Name = L"A3Table2P";
			this->A3Table2P->Size = System::Drawing::Size(33, 75);
			this->A3Table2P->TabIndex = 8;
			this->A3Table2P->TabStop = false;
			this->A3Table2P->Click += gcnew System::EventHandler(this, &PakForm::A3Table2P_Click);
			// 
			// A3Table2PGreen
			// 
			this->A3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PGreen.BackgroundImage")));
			this->A3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2PGreen->Location = System::Drawing::Point(834, 157);
			this->A3Table2PGreen->Name = L"A3Table2PGreen";
			this->A3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A3Table2PGreen->TabIndex = 9;
			this->A3Table2PGreen->TabStop = false;
			this->A3Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::A3Table2PGreen_Click);
			// 
			// B1Table2PGreen
			// 
			this->B1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2PGreen.BackgroundImage")));
			this->B1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2PGreen->Location = System::Drawing::Point(432, 224);
			this->B1Table2PGreen->Name = L"B1Table2PGreen";
			this->B1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->B1Table2PGreen->TabIndex = 11;
			this->B1Table2PGreen->TabStop = false;
			this->B1Table2PGreen->Click += gcnew System::EventHandler(this, &PakForm::B1Table2PGreen_Click);
			// 
			// B1Table2P
			// 
			this->B1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2P.BackgroundImage")));
			this->B1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2P->Location = System::Drawing::Point(432, 224);
			this->B1Table2P->Name = L"B1Table2P";
			this->B1Table2P->Size = System::Drawing::Size(33, 75);
			this->B1Table2P->TabIndex = 10;
			this->B1Table2P->TabStop = false;
			this->B1Table2P->Click += gcnew System::EventHandler(this, &PakForm::B1Table2P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Location = System::Drawing::Point(559, 224);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(75, 75);
			this->B2Table4P->TabIndex = 12;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &PakForm::B2Table4P_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Location = System::Drawing::Point(559, 224);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B2Table4PGreen->TabIndex = 13;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B2Table4PGreen_Click);
			// 
			// B3Table4PGreen
			// 
			this->B3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PGreen.BackgroundImage")));
			this->B3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PGreen->Location = System::Drawing::Point(729, 224);
			this->B3Table4PGreen->Name = L"B3Table4PGreen";
			this->B3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B3Table4PGreen->TabIndex = 15;
			this->B3Table4PGreen->TabStop = false;
			this->B3Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B3Table4PGreen_Click);
			// 
			// B3Table4P
			// 
			this->B3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4P.BackgroundImage")));
			this->B3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4P->Location = System::Drawing::Point(729, 224);
			this->B3Table4P->Name = L"B3Table4P";
			this->B3Table4P->Size = System::Drawing::Size(75, 75);
			this->B3Table4P->TabIndex = 14;
			this->B3Table4P->TabStop = false;
			this->B3Table4P->Click += gcnew System::EventHandler(this, &PakForm::B3Table4P_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Location = System::Drawing::Point(899, 224);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B4Table4PGreen->TabIndex = 17;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &PakForm::B4Table4PGreen_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Location = System::Drawing::Point(899, 224);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(75, 75);
			this->B4Table4P->TabIndex = 16;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &PakForm::B4Table4P_Click);
			// 
			// PakForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->B4Table4PGreen);
			this->Controls->Add(this->B4Table4P);
			this->Controls->Add(this->B3Table4PGreen);
			this->Controls->Add(this->B3Table4P);
			this->Controls->Add(this->B2Table4PGreen);
			this->Controls->Add(this->B2Table4P);
			this->Controls->Add(this->B1Table2PGreen);
			this->Controls->Add(this->B1Table2P);
			this->Controls->Add(this->A3Table2PGreen);
			this->Controls->Add(this->A3Table2P);
			this->Controls->Add(this->A2Table2PGreen);
			this->Controls->Add(this->A1Table2PGreen);
			this->Controls->Add(this->A1Table2P);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->A2Table2P);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PakForm";
			this->Text = L"PakForm";
			this->Load += gcnew System::EventHandler(this, &PakForm::PakForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PakForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void A1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2P->Hide();
		A1Table2PGreen->Show();
	}
	private: System::Void A1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2PGreen->Hide();
		A1Table2P->Show();
}
	private: System::Void A2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2P->Hide();
		A2Table2PGreen->Show();
}
	private: System::Void A2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2PGreen->Hide();
		A2Table2P->Show();
}
	private: System::Void A3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2P->Hide();
		A3Table2PGreen->Show();
}
	private: System::Void A3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2PGreen->Hide();
		A3Table2P->Show();
}
	private: System::Void B1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2P->Hide();
		B1Table2PGreen->Show();
}
	private: System::Void B1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2PGreen->Hide();
		B1Table2P->Show();
}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
}
	private: System::Void B3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4P->Hide();
		B3Table4PGreen->Show();
}
	private: System::Void B3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4PGreen->Hide();
		B3Table4P->Show();
}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
}

};
}
