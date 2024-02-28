#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Bar02
	/// </summary>
	public ref class Bar02 : public System::Windows::Forms::Form
	{
	public:
		Bar02(void)
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
		~Bar02()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ A1Table1P;
	private: System::Windows::Forms::PictureBox^ A1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table1PGreen;

	private: System::Windows::Forms::PictureBox^ A2Table1P;
	private: System::Windows::Forms::PictureBox^ A3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table1P;
	private: System::Windows::Forms::PictureBox^ A4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table1P;





	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Bar02::typeid));
			this->A1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1P = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->BeginInit();
			this->SuspendLayout();
			// 
			// A1Table1P
			// 
			this->A1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1P.BackgroundImage")));
			this->A1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1P->Location = System::Drawing::Point(1045, 139);
			this->A1Table1P->Name = L"A1Table1P";
			this->A1Table1P->Size = System::Drawing::Size(20, 30);
			this->A1Table1P->TabIndex = 0;
			this->A1Table1P->TabStop = false;
			// 
			// A1Table1PGreen
			// 
			this->A1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PGreen.BackgroundImage")));
			this->A1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PGreen->Location = System::Drawing::Point(1045, 139);
			this->A1Table1PGreen->Name = L"A1Table1PGreen";
			this->A1Table1PGreen->Size = System::Drawing::Size(20, 30);
			this->A1Table1PGreen->TabIndex = 1;
			this->A1Table1PGreen->TabStop = false;
			// 
			// A2Table1PGreen
			// 
			this->A2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PGreen.BackgroundImage")));
			this->A2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PGreen->Location = System::Drawing::Point(1071, 170);
			this->A2Table1PGreen->Name = L"A2Table1PGreen";
			this->A2Table1PGreen->Size = System::Drawing::Size(20, 30);
			this->A2Table1PGreen->TabIndex = 3;
			this->A2Table1PGreen->TabStop = false;
			// 
			// A2Table1P
			// 
			this->A2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1P.BackgroundImage")));
			this->A2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1P->Location = System::Drawing::Point(1045, 170);
			this->A2Table1P->Name = L"A2Table1P";
			this->A2Table1P->Size = System::Drawing::Size(20, 30);
			this->A2Table1P->TabIndex = 2;
			this->A2Table1P->TabStop = false;
			// 
			// A3Table1PGreen
			// 
			this->A3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PGreen.BackgroundImage")));
			this->A3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PGreen->Location = System::Drawing::Point(1071, 201);
			this->A3Table1PGreen->Name = L"A3Table1PGreen";
			this->A3Table1PGreen->Size = System::Drawing::Size(20, 30);
			this->A3Table1PGreen->TabIndex = 5;
			this->A3Table1PGreen->TabStop = false;
			// 
			// A3Table1P
			// 
			this->A3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1P.BackgroundImage")));
			this->A3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1P->Location = System::Drawing::Point(1045, 201);
			this->A3Table1P->Name = L"A3Table1P";
			this->A3Table1P->Size = System::Drawing::Size(20, 30);
			this->A3Table1P->TabIndex = 4;
			this->A3Table1P->TabStop = false;
			// 
			// A4Table1PGreen
			// 
			this->A4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PGreen.BackgroundImage")));
			this->A4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PGreen->Location = System::Drawing::Point(1071, 232);
			this->A4Table1PGreen->Name = L"A4Table1PGreen";
			this->A4Table1PGreen->Size = System::Drawing::Size(20, 30);
			this->A4Table1PGreen->TabIndex = 7;
			this->A4Table1PGreen->TabStop = false;
			// 
			// A4Table1P
			// 
			this->A4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1P.BackgroundImage")));
			this->A4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1P->Location = System::Drawing::Point(1045, 232);
			this->A4Table1P->Name = L"A4Table1P";
			this->A4Table1P->Size = System::Drawing::Size(20, 30);
			this->A4Table1P->TabIndex = 6;
			this->A4Table1P->TabStop = false;
			// 
			// Bar02
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->A4Table1PGreen);
			this->Controls->Add(this->A4Table1P);
			this->Controls->Add(this->A3Table1PGreen);
			this->Controls->Add(this->A3Table1P);
			this->Controls->Add(this->A2Table1PGreen);
			this->Controls->Add(this->A2Table1P);
			this->Controls->Add(this->A1Table1PGreen);
			this->Controls->Add(this->A1Table1P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Bar02";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Bar02";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
