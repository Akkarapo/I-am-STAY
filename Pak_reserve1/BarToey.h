#pragma once

#using <mscorlib.dll>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BarToey
	/// </summary>
	public ref class BarToey : public System::Windows::Forms::Form
	{
	public:
		array<bool>^ dataTable;
		BarToey(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			A1Table1PGreen->Hide();
			A2Table1PGreen->Hide();
			A3Table1PGreen->Hide();
			A4Table1PGreen->Hide();
			A5Table1PGreen->Hide();
			A6Table1PGreen->Hide();
			A7Table1PGreen->Hide();
			A8Table1PGreen->Hide();
			B1Table4PGreen->Hide();
			B2Table4PGreen->Hide();
			B3Table4PGreen->Hide();
			B4Table4PGreen->Hide();
			B5Table4PGreen->Hide();
			B6Table4PGreen->Hide();
			B7Table4PGreen->Hide();
			C1Table4PGreen->Hide();
			C2Table4PGreen->Hide();
			C3Table4PGreen->Hide();
			C4Table4PGreen->Hide();
			C5Table4PGreen->Hide();
			C6Table4PGreen->Hide();
			C7Table4PGreen->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarToey()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ A1Table1P;
	private: System::Windows::Forms::PictureBox^ A2Table1P;
	private: System::Windows::Forms::PictureBox^ A3Table1P;
	private: System::Windows::Forms::PictureBox^ A4Table1P;
	private: System::Windows::Forms::PictureBox^ A5Table1P;
	private: System::Windows::Forms::PictureBox^ A6Table1P;
	private: System::Windows::Forms::PictureBox^ A7Table1P;
	private: System::Windows::Forms::PictureBox^ A8Table1P;
	private: System::Windows::Forms::PictureBox^ B1Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B3Table4P;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ B5Table4P;
	private: System::Windows::Forms::PictureBox^ B6Table4P;
	private: System::Windows::Forms::PictureBox^ B7Table4P;
	private: System::Windows::Forms::PictureBox^ C1Table4P;
	private: System::Windows::Forms::PictureBox^ C2Table4P;
	private: System::Windows::Forms::PictureBox^ C3Table4P;
	private: System::Windows::Forms::PictureBox^ C4Table4P;
	private: System::Windows::Forms::PictureBox^ C5Table4P;
	private: System::Windows::Forms::PictureBox^ C6Table4P;
	private: System::Windows::Forms::PictureBox^ C7Table4P;
	private: System::Windows::Forms::PictureBox^ A1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A5Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A6Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A7Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A8Table1PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B5Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B6Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B7Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C5Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C6Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C7Table4PGreen;








	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarToey::typeid));
			this->A1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A8Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B7Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C5Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C6Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C7Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A8Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B7Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C5Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C6Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C7Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4PGreen))->BeginInit();
			this->SuspendLayout();
			// 
			// A1Table1P
			// 
			this->A1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1P.BackgroundImage")));
			this->A1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1P->Location = System::Drawing::Point(625, 413);
			this->A1Table1P->Name = L"A1Table1P";
			this->A1Table1P->Size = System::Drawing::Size(28, 20);
			this->A1Table1P->TabIndex = 0;
			this->A1Table1P->TabStop = false;
			this->A1Table1P->Click += gcnew System::EventHandler(this, &BarToey::A1Table1P_Click);
			// 
			// A2Table1P
			// 
			this->A2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1P.BackgroundImage")));
			this->A2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1P->Location = System::Drawing::Point(673, 413);
			this->A2Table1P->Name = L"A2Table1P";
			this->A2Table1P->Size = System::Drawing::Size(28, 20);
			this->A2Table1P->TabIndex = 1;
			this->A2Table1P->TabStop = false;
			this->A2Table1P->Click += gcnew System::EventHandler(this, &BarToey::A2Table1P_Click);
			// 
			// A3Table1P
			// 
			this->A3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1P.BackgroundImage")));
			this->A3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1P->Location = System::Drawing::Point(721, 413);
			this->A3Table1P->Name = L"A3Table1P";
			this->A3Table1P->Size = System::Drawing::Size(28, 20);
			this->A3Table1P->TabIndex = 2;
			this->A3Table1P->TabStop = false;
			this->A3Table1P->Click += gcnew System::EventHandler(this, &BarToey::A3Table1P_Click);
			// 
			// A4Table1P
			// 
			this->A4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1P.BackgroundImage")));
			this->A4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1P->Location = System::Drawing::Point(769, 413);
			this->A4Table1P->Name = L"A4Table1P";
			this->A4Table1P->Size = System::Drawing::Size(28, 20);
			this->A4Table1P->TabIndex = 3;
			this->A4Table1P->TabStop = false;
			this->A4Table1P->Click += gcnew System::EventHandler(this, &BarToey::A4Table1P_Click);
			// 
			// A5Table1P
			// 
			this->A5Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A5Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table1P.BackgroundImage")));
			this->A5Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table1P->Location = System::Drawing::Point(817, 413);
			this->A5Table1P->Name = L"A5Table1P";
			this->A5Table1P->Size = System::Drawing::Size(28, 20);
			this->A5Table1P->TabIndex = 4;
			this->A5Table1P->TabStop = false;
			this->A5Table1P->Click += gcnew System::EventHandler(this, &BarToey::A5Table1P_Click);
			// 
			// A6Table1P
			// 
			this->A6Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A6Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table1P.BackgroundImage")));
			this->A6Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table1P->Location = System::Drawing::Point(865, 413);
			this->A6Table1P->Name = L"A6Table1P";
			this->A6Table1P->Size = System::Drawing::Size(28, 20);
			this->A6Table1P->TabIndex = 5;
			this->A6Table1P->TabStop = false;
			this->A6Table1P->Click += gcnew System::EventHandler(this, &BarToey::A6Table1P_Click);
			// 
			// A7Table1P
			// 
			this->A7Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A7Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table1P.BackgroundImage")));
			this->A7Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table1P->Location = System::Drawing::Point(913, 413);
			this->A7Table1P->Name = L"A7Table1P";
			this->A7Table1P->Size = System::Drawing::Size(28, 20);
			this->A7Table1P->TabIndex = 6;
			this->A7Table1P->TabStop = false;
			this->A7Table1P->Click += gcnew System::EventHandler(this, &BarToey::A7Table1P_Click);
			// 
			// A8Table1P
			// 
			this->A8Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A8Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table1P.BackgroundImage")));
			this->A8Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table1P->Location = System::Drawing::Point(961, 413);
			this->A8Table1P->Name = L"A8Table1P";
			this->A8Table1P->Size = System::Drawing::Size(28, 20);
			this->A8Table1P->TabIndex = 7;
			this->A8Table1P->TabStop = false;
			this->A8Table1P->Click += gcnew System::EventHandler(this, &BarToey::A8Table1P_Click);
			// 
			// B1Table4P
			// 
			this->B1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4P.BackgroundImage")));
			this->B1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4P->Location = System::Drawing::Point(412, 492);
			this->B1Table4P->Name = L"B1Table4P";
			this->B1Table4P->Size = System::Drawing::Size(80, 67);
			this->B1Table4P->TabIndex = 117;
			this->B1Table4P->TabStop = false;
			this->B1Table4P->Click += gcnew System::EventHandler(this, &BarToey::B1Table4P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(514, 492);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(80, 67);
			this->B2Table4P->TabIndex = 118;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &BarToey::B2Table4P_Click);
			// 
			// B3Table4P
			// 
			this->B3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4P.BackgroundImage")));
			this->B3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4P->Location = System::Drawing::Point(616, 492);
			this->B3Table4P->Name = L"B3Table4P";
			this->B3Table4P->Size = System::Drawing::Size(80, 67);
			this->B3Table4P->TabIndex = 119;
			this->B3Table4P->TabStop = false;
			this->B3Table4P->Click += gcnew System::EventHandler(this, &BarToey::B3Table4P_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(718, 492);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(80, 67);
			this->B4Table4P->TabIndex = 120;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &BarToey::B4Table4P_Click);
			// 
			// B5Table4P
			// 
			this->B5Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4P.BackgroundImage")));
			this->B5Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4P->Location = System::Drawing::Point(820, 492);
			this->B5Table4P->Name = L"B5Table4P";
			this->B5Table4P->Size = System::Drawing::Size(80, 67);
			this->B5Table4P->TabIndex = 121;
			this->B5Table4P->TabStop = false;
			this->B5Table4P->Click += gcnew System::EventHandler(this, &BarToey::B5Table4P_Click);
			// 
			// B6Table4P
			// 
			this->B6Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B6Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table4P.BackgroundImage")));
			this->B6Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table4P->Location = System::Drawing::Point(922, 492);
			this->B6Table4P->Name = L"B6Table4P";
			this->B6Table4P->Size = System::Drawing::Size(80, 67);
			this->B6Table4P->TabIndex = 122;
			this->B6Table4P->TabStop = false;
			this->B6Table4P->Click += gcnew System::EventHandler(this, &BarToey::B6Table4P_Click);
			// 
			// B7Table4P
			// 
			this->B7Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B7Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7Table4P.BackgroundImage")));
			this->B7Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B7Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B7Table4P->Location = System::Drawing::Point(1024, 492);
			this->B7Table4P->Name = L"B7Table4P";
			this->B7Table4P->Size = System::Drawing::Size(80, 67);
			this->B7Table4P->TabIndex = 123;
			this->B7Table4P->TabStop = false;
			this->B7Table4P->Click += gcnew System::EventHandler(this, &BarToey::B7Table4P_Click);
			// 
			// C1Table4P
			// 
			this->C1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4P.BackgroundImage")));
			this->C1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4P->Location = System::Drawing::Point(412, 580);
			this->C1Table4P->Name = L"C1Table4P";
			this->C1Table4P->Size = System::Drawing::Size(80, 67);
			this->C1Table4P->TabIndex = 124;
			this->C1Table4P->TabStop = false;
			this->C1Table4P->Click += gcnew System::EventHandler(this, &BarToey::C1Table4P_Click);
			// 
			// C2Table4P
			// 
			this->C2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4P.BackgroundImage")));
			this->C2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4P->Location = System::Drawing::Point(514, 580);
			this->C2Table4P->Name = L"C2Table4P";
			this->C2Table4P->Size = System::Drawing::Size(80, 67);
			this->C2Table4P->TabIndex = 125;
			this->C2Table4P->TabStop = false;
			this->C2Table4P->Click += gcnew System::EventHandler(this, &BarToey::C2Table4P_Click);
			// 
			// C3Table4P
			// 
			this->C3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4P.BackgroundImage")));
			this->C3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4P->Location = System::Drawing::Point(616, 580);
			this->C3Table4P->Name = L"C3Table4P";
			this->C3Table4P->Size = System::Drawing::Size(80, 67);
			this->C3Table4P->TabIndex = 126;
			this->C3Table4P->TabStop = false;
			this->C3Table4P->Click += gcnew System::EventHandler(this, &BarToey::C3Table4P_Click);
			// 
			// C4Table4P
			// 
			this->C4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4Table4P.BackgroundImage")));
			this->C4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C4Table4P->Location = System::Drawing::Point(718, 580);
			this->C4Table4P->Name = L"C4Table4P";
			this->C4Table4P->Size = System::Drawing::Size(80, 67);
			this->C4Table4P->TabIndex = 127;
			this->C4Table4P->TabStop = false;
			this->C4Table4P->Click += gcnew System::EventHandler(this, &BarToey::C4Table4P_Click);
			// 
			// C5Table4P
			// 
			this->C5Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C5Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5Table4P.BackgroundImage")));
			this->C5Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C5Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C5Table4P->Location = System::Drawing::Point(820, 580);
			this->C5Table4P->Name = L"C5Table4P";
			this->C5Table4P->Size = System::Drawing::Size(80, 67);
			this->C5Table4P->TabIndex = 128;
			this->C5Table4P->TabStop = false;
			this->C5Table4P->Click += gcnew System::EventHandler(this, &BarToey::C5Table4P_Click);
			// 
			// C6Table4P
			// 
			this->C6Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C6Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6Table4P.BackgroundImage")));
			this->C6Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C6Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C6Table4P->Location = System::Drawing::Point(922, 580);
			this->C6Table4P->Name = L"C6Table4P";
			this->C6Table4P->Size = System::Drawing::Size(80, 67);
			this->C6Table4P->TabIndex = 129;
			this->C6Table4P->TabStop = false;
			this->C6Table4P->Click += gcnew System::EventHandler(this, &BarToey::C6Table4P_Click);
			// 
			// C7Table4P
			// 
			this->C7Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C7Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7Table4P.BackgroundImage")));
			this->C7Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C7Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C7Table4P->Location = System::Drawing::Point(1024, 580);
			this->C7Table4P->Name = L"C7Table4P";
			this->C7Table4P->Size = System::Drawing::Size(80, 67);
			this->C7Table4P->TabIndex = 130;
			this->C7Table4P->TabStop = false;
			this->C7Table4P->Click += gcnew System::EventHandler(this, &BarToey::C7Table4P_Click);
			// 
			// A1Table1PGreen
			// 
			this->A1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PGreen.BackgroundImage")));
			this->A1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PGreen->Location = System::Drawing::Point(625, 413);
			this->A1Table1PGreen->Name = L"A1Table1PGreen";
			this->A1Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A1Table1PGreen->TabIndex = 131;
			this->A1Table1PGreen->TabStop = false;
			this->A1Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A1Table1PGreen_Click);
			// 
			// A2Table1PGreen
			// 
			this->A2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PGreen.BackgroundImage")));
			this->A2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PGreen->Location = System::Drawing::Point(673, 413);
			this->A2Table1PGreen->Name = L"A2Table1PGreen";
			this->A2Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A2Table1PGreen->TabIndex = 132;
			this->A2Table1PGreen->TabStop = false;
			this->A2Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A2Table1PGreen_Click);
			// 
			// A3Table1PGreen
			// 
			this->A3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PGreen.BackgroundImage")));
			this->A3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PGreen->Location = System::Drawing::Point(721, 413);
			this->A3Table1PGreen->Name = L"A3Table1PGreen";
			this->A3Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A3Table1PGreen->TabIndex = 133;
			this->A3Table1PGreen->TabStop = false;
			this->A3Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A3Table1PGreen_Click);
			// 
			// A4Table1PGreen
			// 
			this->A4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PGreen.BackgroundImage")));
			this->A4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PGreen->Location = System::Drawing::Point(769, 413);
			this->A4Table1PGreen->Name = L"A4Table1PGreen";
			this->A4Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A4Table1PGreen->TabIndex = 134;
			this->A4Table1PGreen->TabStop = false;
			this->A4Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A4Table1PGreen_Click);
			// 
			// A5Table1PGreen
			// 
			this->A5Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A5Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table1PGreen.BackgroundImage")));
			this->A5Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table1PGreen->Location = System::Drawing::Point(817, 413);
			this->A5Table1PGreen->Name = L"A5Table1PGreen";
			this->A5Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A5Table1PGreen->TabIndex = 135;
			this->A5Table1PGreen->TabStop = false;
			this->A5Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A5Table1PGreen_Click);
			// 
			// A6Table1PGreen
			// 
			this->A6Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A6Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table1PGreen.BackgroundImage")));
			this->A6Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table1PGreen->Location = System::Drawing::Point(865, 413);
			this->A6Table1PGreen->Name = L"A6Table1PGreen";
			this->A6Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A6Table1PGreen->TabIndex = 136;
			this->A6Table1PGreen->TabStop = false;
			this->A6Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A6Table1PGreen_Click);
			// 
			// A7Table1PGreen
			// 
			this->A7Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A7Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table1PGreen.BackgroundImage")));
			this->A7Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table1PGreen->Location = System::Drawing::Point(913, 413);
			this->A7Table1PGreen->Name = L"A7Table1PGreen";
			this->A7Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A7Table1PGreen->TabIndex = 137;
			this->A7Table1PGreen->TabStop = false;
			this->A7Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A7Table1PGreen_Click);
			// 
			// A8Table1PGreen
			// 
			this->A8Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A8Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table1PGreen.BackgroundImage")));
			this->A8Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table1PGreen->Location = System::Drawing::Point(961, 413);
			this->A8Table1PGreen->Name = L"A8Table1PGreen";
			this->A8Table1PGreen->Size = System::Drawing::Size(28, 20);
			this->A8Table1PGreen->TabIndex = 138;
			this->A8Table1PGreen->TabStop = false;
			this->A8Table1PGreen->Click += gcnew System::EventHandler(this, &BarToey::A8Table1PGreen_Click);
			// 
			// B1Table4PGreen
			// 
			this->B1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PGreen.BackgroundImage")));
			this->B1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PGreen->Location = System::Drawing::Point(412, 492);
			this->B1Table4PGreen->Name = L"B1Table4PGreen";
			this->B1Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B1Table4PGreen->TabIndex = 139;
			this->B1Table4PGreen->TabStop = false;
			this->B1Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B1Table4PGreen_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(514, 492);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B2Table4PGreen->TabIndex = 140;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B2Table4PGreen_Click);
			// 
			// B3Table4PGreen
			// 
			this->B3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PGreen.BackgroundImage")));
			this->B3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PGreen->Location = System::Drawing::Point(616, 492);
			this->B3Table4PGreen->Name = L"B3Table4PGreen";
			this->B3Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B3Table4PGreen->TabIndex = 141;
			this->B3Table4PGreen->TabStop = false;
			this->B3Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B3Table4PGreen_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(718, 492);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B4Table4PGreen->TabIndex = 142;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B4Table4PGreen_Click);
			// 
			// B5Table4PGreen
			// 
			this->B5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PGreen.BackgroundImage")));
			this->B5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PGreen->Location = System::Drawing::Point(820, 492);
			this->B5Table4PGreen->Name = L"B5Table4PGreen";
			this->B5Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B5Table4PGreen->TabIndex = 143;
			this->B5Table4PGreen->TabStop = false;
			this->B5Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B5Table4PGreen_Click);
			// 
			// B6Table4PGreen
			// 
			this->B6Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B6Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table4PGreen.BackgroundImage")));
			this->B6Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table4PGreen->Location = System::Drawing::Point(922, 492);
			this->B6Table4PGreen->Name = L"B6Table4PGreen";
			this->B6Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B6Table4PGreen->TabIndex = 144;
			this->B6Table4PGreen->TabStop = false;
			this->B6Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B6Table4PGreen_Click);
			// 
			// B7Table4PGreen
			// 
			this->B7Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B7Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7Table4PGreen.BackgroundImage")));
			this->B7Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B7Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B7Table4PGreen->Location = System::Drawing::Point(1024, 492);
			this->B7Table4PGreen->Name = L"B7Table4PGreen";
			this->B7Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->B7Table4PGreen->TabIndex = 145;
			this->B7Table4PGreen->TabStop = false;
			this->B7Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::B7Table4PGreen_Click);
			// 
			// C1Table4PGreen
			// 
			this->C1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PGreen.BackgroundImage")));
			this->C1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PGreen->Location = System::Drawing::Point(412, 580);
			this->C1Table4PGreen->Name = L"C1Table4PGreen";
			this->C1Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C1Table4PGreen->TabIndex = 146;
			this->C1Table4PGreen->TabStop = false;
			this->C1Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C1Table4PGreen_Click);
			// 
			// C2Table4PGreen
			// 
			this->C2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PGreen.BackgroundImage")));
			this->C2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PGreen->Location = System::Drawing::Point(514, 580);
			this->C2Table4PGreen->Name = L"C2Table4PGreen";
			this->C2Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C2Table4PGreen->TabIndex = 147;
			this->C2Table4PGreen->TabStop = false;
			this->C2Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C2Table4PGreen_Click);
			// 
			// C3Table4PGreen
			// 
			this->C3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PGreen.BackgroundImage")));
			this->C3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PGreen->Location = System::Drawing::Point(616, 580);
			this->C3Table4PGreen->Name = L"C3Table4PGreen";
			this->C3Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C3Table4PGreen->TabIndex = 148;
			this->C3Table4PGreen->TabStop = false;
			this->C3Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C3Table4PGreen_Click);
			// 
			// C4Table4PGreen
			// 
			this->C4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4Table4PGreen.BackgroundImage")));
			this->C4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C4Table4PGreen->Location = System::Drawing::Point(718, 580);
			this->C4Table4PGreen->Name = L"C4Table4PGreen";
			this->C4Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C4Table4PGreen->TabIndex = 149;
			this->C4Table4PGreen->TabStop = false;
			this->C4Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C4Table4PGreen_Click);
			// 
			// C5Table4PGreen
			// 
			this->C5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5Table4PGreen.BackgroundImage")));
			this->C5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C5Table4PGreen->Location = System::Drawing::Point(820, 580);
			this->C5Table4PGreen->Name = L"C5Table4PGreen";
			this->C5Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C5Table4PGreen->TabIndex = 150;
			this->C5Table4PGreen->TabStop = false;
			this->C5Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C5Table4PGreen_Click);
			// 
			// C6Table4PGreen
			// 
			this->C6Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C6Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6Table4PGreen.BackgroundImage")));
			this->C6Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C6Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C6Table4PGreen->Location = System::Drawing::Point(922, 580);
			this->C6Table4PGreen->Name = L"C6Table4PGreen";
			this->C6Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C6Table4PGreen->TabIndex = 151;
			this->C6Table4PGreen->TabStop = false;
			this->C6Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C6Table4PGreen_Click);
			// 
			// C7Table4PGreen
			// 
			this->C7Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C7Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7Table4PGreen.BackgroundImage")));
			this->C7Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C7Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C7Table4PGreen->Location = System::Drawing::Point(1024, 580);
			this->C7Table4PGreen->Name = L"C7Table4PGreen";
			this->C7Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C7Table4PGreen->TabIndex = 152;
			this->C7Table4PGreen->TabStop = false;
			this->C7Table4PGreen->Click += gcnew System::EventHandler(this, &BarToey::C7Table4PGreen_Click);
			// 
			// BarToey
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->C7Table4PGreen);
			this->Controls->Add(this->C6Table4PGreen);
			this->Controls->Add(this->C5Table4PGreen);
			this->Controls->Add(this->C4Table4PGreen);
			this->Controls->Add(this->C3Table4PGreen);
			this->Controls->Add(this->C2Table4PGreen);
			this->Controls->Add(this->C1Table4PGreen);
			this->Controls->Add(this->B7Table4PGreen);
			this->Controls->Add(this->B6Table4PGreen);
			this->Controls->Add(this->B5Table4PGreen);
			this->Controls->Add(this->B4Table4PGreen);
			this->Controls->Add(this->B3Table4PGreen);
			this->Controls->Add(this->B2Table4PGreen);
			this->Controls->Add(this->B1Table4PGreen);
			this->Controls->Add(this->A8Table1PGreen);
			this->Controls->Add(this->A7Table1PGreen);
			this->Controls->Add(this->A6Table1PGreen);
			this->Controls->Add(this->A5Table1PGreen);
			this->Controls->Add(this->A4Table1PGreen);
			this->Controls->Add(this->A3Table1PGreen);
			this->Controls->Add(this->A2Table1PGreen);
			this->Controls->Add(this->A1Table1PGreen);
			this->Controls->Add(this->C7Table4P);
			this->Controls->Add(this->C6Table4P);
			this->Controls->Add(this->C5Table4P);
			this->Controls->Add(this->C4Table4P);
			this->Controls->Add(this->C3Table4P);
			this->Controls->Add(this->C2Table4P);
			this->Controls->Add(this->C1Table4P);
			this->Controls->Add(this->B7Table4P);
			this->Controls->Add(this->B6Table4P);
			this->Controls->Add(this->B5Table4P);
			this->Controls->Add(this->B4Table4P);
			this->Controls->Add(this->B3Table4P);
			this->Controls->Add(this->B2Table4P);
			this->Controls->Add(this->B1Table4P);
			this->Controls->Add(this->A8Table1P);
			this->Controls->Add(this->A7Table1P);
			this->Controls->Add(this->A6Table1P);
			this->Controls->Add(this->A5Table1P);
			this->Controls->Add(this->A4Table1P);
			this->Controls->Add(this->A3Table1P);
			this->Controls->Add(this->A2Table1P);
			this->Controls->Add(this->A1Table1P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BarToey";
			this->Text = L"BarToey";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4PGreen))->EndInit();
			this->ResumeLayout(false);

		}

	public:

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
		bool A1Table2PGreenCheck = true;
	private: System::Void BarMapraw_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTable = gcnew array<bool>(22);
	}
	private: System::Void A1Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table1P->Hide();
		A1Table1PGreen->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table1P->Hide();
		A2Table1PGreen->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table1P->Hide();
		A3Table1PGreen->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table1P->Hide();
		A4Table1PGreen->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table1P->Hide();
		A5Table1PGreen->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void A6Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A6Table1P->Hide();
		A6Table1PGreen->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void A7Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A7Table1P->Hide();
		A7Table1PGreen->Show();
		dataTable[6] = !dataTable[7];
}
	private: System::Void A8Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		A8Table1P->Hide();
		A8Table1PGreen->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4P->Hide();
		B1Table4PGreen->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void B3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4P->Hide();
		B3Table4PGreen->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void B5Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B5Table4P->Hide();
		B5Table4PGreen->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void B6Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B6Table4P->Hide();
		B6Table4PGreen->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void B7Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B7Table4P->Hide();
		B7Table4PGreen->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void C1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4P->Hide();
		C1Table4PGreen->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void C2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4P->Hide();
		C2Table4PGreen->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void C3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4P->Hide();
		C3Table4PGreen->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void C4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C4Table4P->Hide();
		C4Table4PGreen->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void C5Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C5Table4P->Hide();
		C5Table4PGreen->Show();
		dataTable[19] = !dataTable[19];
}
	private: System::Void C6Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C6Table4P->Hide();
		C6Table4PGreen->Show();
		dataTable[20] = !dataTable[20];
}
	private: System::Void C7Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C7Table4P->Hide();
		C7Table4PGreen->Show();
		dataTable[21] = !dataTable[21];
}
//
//Green
//
	private: System::Void A1Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table1PGreen->Hide();
		A1Table1P->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table1PGreen->Hide();
		A2Table1P->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table1PGreen->Hide();
		A3Table1P->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table1PGreen->Hide();
		A4Table1P->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table1PGreen->Hide();
		A5Table1P->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void A6Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A6Table1PGreen->Hide();
		A6Table1P->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void A7Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A7Table1PGreen->Hide();
		A7Table1P->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void A8Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A8Table1PGreen->Hide();
		A8Table1P->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4PGreen->Hide();
		B1Table4P->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void B3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4PGreen->Hide();
		B3Table4P->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void B5Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B5Table4PGreen->Hide();
		B5Table4P->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void B6Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B6Table4PGreen->Hide();
		B6Table4P->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void B7Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B7Table4PGreen->Hide();
		B7Table4P->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void C1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4PGreen->Hide();
		C1Table4P->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void C2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4PGreen->Hide();
		C2Table4P->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void C3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4PGreen->Hide();
		C3Table4P->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void C4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C4Table4PGreen->Hide();
		C4Table4P->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void C5Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C5Table4PGreen->Hide();
		C5Table4P->Show();
		dataTable[19] = !dataTable[19];
}
	private: System::Void C6Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C6Table4PGreen->Hide();
		C6Table4P->Show();
		dataTable[20] = !dataTable[20];
}
	private: System::Void C7Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C7Table4PGreen->Hide();
		C7Table4P->Show();
		dataTable[21] = !dataTable[21];
}

public: bool switchToMP = false;

private: System::Void ConfirmTableBarMapraw_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;

	System::String^ a = "";
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";

	string path, line;
	MarshalString(temp, path);

	ifstream fileIn(path);
	vector<string> lines;

	while (getline(fileIn, line)) {
		lines.push_back(line);
	}
	fileIn.close();

	for (int i = 0; i < 22; i++) {
		a += (dataTable[i] ? "1" : "0");
	}

	string newData;
	MarshalString(a, newData);
	switchToMP = true;
	int targetline = 4;
	if (lines.size() >= targetline) {
		lines[targetline - 1] = newData;
	}

	ofstream fileOut(path);
	int i = 0;

	for (const auto& modifiedLine : lines) {
		fileOut << modifiedLine << endl;
	}


	fileOut.close();

	this->Close();
}
};
}
