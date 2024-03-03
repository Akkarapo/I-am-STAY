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
	/// Summary for BarMapraw
	/// </summary>
	public ref class BarMapraw : public System::Windows::Forms::Form
	{
	public:
		array<bool>^ dataTable;
		BarMapraw(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			A1Table2PGreen->Hide();
			A2Table2PGreen->Hide();
			A3Table2PGreen->Hide();
			A4Table2PGreen->Hide();
			A5Table2PGreen->Hide();
			B1Table4PGreen->Hide();
			B2Table4PGreen->Hide();
			B3Table4PGreen->Hide();
			B4Table4PGreen->Hide();
			C1Table4PGreen->Hide();
			C2Table4PGreen->Hide();
			C3Table4PGreen->Hide();
			D1Table2PGreen->Hide();
			D2Table2PGreen->Hide();
			D3Table2PGreen->Hide();
			D4Table2PGreen->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarMapraw()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ A1Table2P;
	private: System::Windows::Forms::PictureBox^ A2Table2P;
	private: System::Windows::Forms::PictureBox^ A3Table2P;
	private: System::Windows::Forms::PictureBox^ A4Table2P;
	private: System::Windows::Forms::PictureBox^ A5Table2P;
	private: System::Windows::Forms::PictureBox^ B1Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B3Table4P;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ C1Table4P;
	private: System::Windows::Forms::PictureBox^ C2Table4P;
	private: System::Windows::Forms::PictureBox^ C3Table4P;
	private: System::Windows::Forms::PictureBox^ D1Table2P;
	private: System::Windows::Forms::PictureBox^ D2Table2P;
	private: System::Windows::Forms::PictureBox^ D3Table2P;
	private: System::Windows::Forms::PictureBox^ D4Table2P;
	private: System::Windows::Forms::PictureBox^ A1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A5Table2PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ D4Table2PGreen;
	private: System::Windows::Forms::PictureBox^ ConfirmTableBarMapraw;
	private: System::Windows::Forms::PictureBox^ B1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B2Table4PRed;
	private: System::Windows::Forms::PictureBox^ B4Table4PRed;
	private: System::Windows::Forms::PictureBox^ B3Table4PRed;
	private: System::Windows::Forms::PictureBox^ A1Table2PRed;
	private: System::Windows::Forms::PictureBox^ A2Table2PRed;
	private: System::Windows::Forms::PictureBox^ A3Table2PRed;
	private: System::Windows::Forms::PictureBox^ A4Table2PRed;
	private: System::Windows::Forms::PictureBox^ A5Table2PRed;
	private: System::Windows::Forms::PictureBox^ C3Table4PGRed;
	private: System::Windows::Forms::PictureBox^ C2Table4PRed;
	private: System::Windows::Forms::PictureBox^ C1Table4PRed;
	private: System::Windows::Forms::PictureBox^ D1Table2PRed;
	private: System::Windows::Forms::PictureBox^ D4Table2PRed;

	private: System::Windows::Forms::PictureBox^ D3Table2PRed;

	private: System::Windows::Forms::PictureBox^ D2Table2PRed;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarMapraw::typeid));
			this->A1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D4Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D4Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->ConfirmTableBarMapraw = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PGRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D4Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2PRed))->BeginInit();
			this->SuspendLayout();
			// 
			// A1Table2P
			// 
			this->A1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2P.BackgroundImage")));
			this->A1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2P->Location = System::Drawing::Point(466, 462);
			this->A1Table2P->Name = L"A1Table2P";
			this->A1Table2P->Size = System::Drawing::Size(33, 75);
			this->A1Table2P->TabIndex = 0;
			this->A1Table2P->TabStop = false;
			this->A1Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::A1Table2P_Click);
			// 
			// A2Table2P
			// 
			this->A2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2P.BackgroundImage")));
			this->A2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2P->Location = System::Drawing::Point(543, 462);
			this->A2Table2P->Name = L"A2Table2P";
			this->A2Table2P->Size = System::Drawing::Size(33, 75);
			this->A2Table2P->TabIndex = 1;
			this->A2Table2P->TabStop = false;
			this->A2Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::A2Table2P_Click);
			// 
			// A3Table2P
			// 
			this->A3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2P.BackgroundImage")));
			this->A3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2P->Location = System::Drawing::Point(620, 462);
			this->A3Table2P->Name = L"A3Table2P";
			this->A3Table2P->Size = System::Drawing::Size(33, 75);
			this->A3Table2P->TabIndex = 2;
			this->A3Table2P->TabStop = false;
			this->A3Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::A3Table2P_Click);
			// 
			// A4Table2P
			// 
			this->A4Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table2P.BackgroundImage")));
			this->A4Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table2P->Location = System::Drawing::Point(697, 462);
			this->A4Table2P->Name = L"A4Table2P";
			this->A4Table2P->Size = System::Drawing::Size(33, 75);
			this->A4Table2P->TabIndex = 3;
			this->A4Table2P->TabStop = false;
			this->A4Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::A4Table2P_Click);
			// 
			// A5Table2P
			// 
			this->A5Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A5Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table2P.BackgroundImage")));
			this->A5Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table2P->Location = System::Drawing::Point(774, 462);
			this->A5Table2P->Name = L"A5Table2P";
			this->A5Table2P->Size = System::Drawing::Size(33, 75);
			this->A5Table2P->TabIndex = 4;
			this->A5Table2P->TabStop = false;
			this->A5Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::A5Table2P_Click);
			// 
			// B1Table4P
			// 
			this->B1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4P.BackgroundImage")));
			this->B1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4P->Location = System::Drawing::Point(953, 337);
			this->B1Table4P->Name = L"B1Table4P";
			this->B1Table4P->Size = System::Drawing::Size(64, 64);
			this->B1Table4P->TabIndex = 5;
			this->B1Table4P->TabStop = false;
			this->B1Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::B1Table4P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(1062, 337);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(64, 64);
			this->B2Table4P->TabIndex = 6;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::B2Table4P_Click);
			// 
			// B3Table4P
			// 
			this->B3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4P.BackgroundImage")));
			this->B3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4P->Location = System::Drawing::Point(953, 473);
			this->B3Table4P->Name = L"B3Table4P";
			this->B3Table4P->Size = System::Drawing::Size(64, 64);
			this->B3Table4P->TabIndex = 7;
			this->B3Table4P->TabStop = false;
			this->B3Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::B3Table4P_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(1062, 473);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(64, 64);
			this->B4Table4P->TabIndex = 8;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::B4Table4P_Click);
			// 
			// C1Table4P
			// 
			this->C1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4P.BackgroundImage")));
			this->C1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4P->Location = System::Drawing::Point(462, 599);
			this->C1Table4P->Name = L"C1Table4P";
			this->C1Table4P->Size = System::Drawing::Size(80, 67);
			this->C1Table4P->TabIndex = 9;
			this->C1Table4P->TabStop = false;
			this->C1Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::C1Table4P_Click);
			// 
			// C2Table4P
			// 
			this->C2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4P.BackgroundImage")));
			this->C2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4P->Location = System::Drawing::Point(582, 599);
			this->C2Table4P->Name = L"C2Table4P";
			this->C2Table4P->Size = System::Drawing::Size(80, 67);
			this->C2Table4P->TabIndex = 10;
			this->C2Table4P->TabStop = false;
			this->C2Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::C2Table4P_Click);
			// 
			// C3Table4P
			// 
			this->C3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4P.BackgroundImage")));
			this->C3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4P->Location = System::Drawing::Point(702, 599);
			this->C3Table4P->Name = L"C3Table4P";
			this->C3Table4P->Size = System::Drawing::Size(80, 67);
			this->C3Table4P->TabIndex = 11;
			this->C3Table4P->TabStop = false;
			this->C3Table4P->Click += gcnew System::EventHandler(this, &BarMapraw::C3Table4P_Click);
			// 
			// D1Table2P
			// 
			this->D1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->D1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table2P.BackgroundImage")));
			this->D1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table2P->Location = System::Drawing::Point(901, 599);
			this->D1Table2P->Name = L"D1Table2P";
			this->D1Table2P->Size = System::Drawing::Size(57, 57);
			this->D1Table2P->TabIndex = 12;
			this->D1Table2P->TabStop = false;
			this->D1Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::D1Table2P_Click);
			// 
			// D2Table2P
			// 
			this->D2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->D2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table2P.BackgroundImage")));
			this->D2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table2P->Location = System::Drawing::Point(968, 599);
			this->D2Table2P->Name = L"D2Table2P";
			this->D2Table2P->Size = System::Drawing::Size(57, 57);
			this->D2Table2P->TabIndex = 13;
			this->D2Table2P->TabStop = false;
			this->D2Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::D2Table2P_Click);
			// 
			// D3Table2P
			// 
			this->D3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->D3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table2P.BackgroundImage")));
			this->D3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table2P->Location = System::Drawing::Point(1035, 599);
			this->D3Table2P->Name = L"D3Table2P";
			this->D3Table2P->Size = System::Drawing::Size(57, 57);
			this->D3Table2P->TabIndex = 14;
			this->D3Table2P->TabStop = false;
			this->D3Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::D3Table2P_Click);
			// 
			// D4Table2P
			// 
			this->D4Table2P->BackColor = System::Drawing::Color::Transparent;
			this->D4Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4Table2P.BackgroundImage")));
			this->D4Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D4Table2P->Location = System::Drawing::Point(1102, 599);
			this->D4Table2P->Name = L"D4Table2P";
			this->D4Table2P->Size = System::Drawing::Size(57, 57);
			this->D4Table2P->TabIndex = 15;
			this->D4Table2P->TabStop = false;
			this->D4Table2P->Click += gcnew System::EventHandler(this, &BarMapraw::D4Table2P_Click);
			// 
			// A1Table2PGreen
			// 
			this->A1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PGreen.BackgroundImage")));
			this->A1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2PGreen->Location = System::Drawing::Point(466, 462);
			this->A1Table2PGreen->Name = L"A1Table2PGreen";
			this->A1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A1Table2PGreen->TabIndex = 16;
			this->A1Table2PGreen->TabStop = false;
			this->A1Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::A1Table2PGreen_Click);
			// 
			// A2Table2PGreen
			// 
			this->A2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PGreen.BackgroundImage")));
			this->A2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2PGreen->Location = System::Drawing::Point(543, 462);
			this->A2Table2PGreen->Name = L"A2Table2PGreen";
			this->A2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A2Table2PGreen->TabIndex = 17;
			this->A2Table2PGreen->TabStop = false;
			this->A2Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::A2Table2PGreen_Click);
			// 
			// A3Table2PGreen
			// 
			this->A3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PGreen.BackgroundImage")));
			this->A3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2PGreen->Location = System::Drawing::Point(620, 462);
			this->A3Table2PGreen->Name = L"A3Table2PGreen";
			this->A3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A3Table2PGreen->TabIndex = 18;
			this->A3Table2PGreen->TabStop = false;
			this->A3Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::A3Table2PGreen_Click);
			// 
			// A4Table2PGreen
			// 
			this->A4Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table2PGreen.BackgroundImage")));
			this->A4Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table2PGreen->Location = System::Drawing::Point(697, 462);
			this->A4Table2PGreen->Name = L"A4Table2PGreen";
			this->A4Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A4Table2PGreen->TabIndex = 19;
			this->A4Table2PGreen->TabStop = false;
			this->A4Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::A4Table2PGreen_Click);
			// 
			// A5Table2PGreen
			// 
			this->A5Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A5Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table2PGreen.BackgroundImage")));
			this->A5Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table2PGreen->Location = System::Drawing::Point(774, 462);
			this->A5Table2PGreen->Name = L"A5Table2PGreen";
			this->A5Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A5Table2PGreen->TabIndex = 20;
			this->A5Table2PGreen->TabStop = false;
			this->A5Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::A5Table2PGreen_Click);
			// 
			// B1Table4PGreen
			// 
			this->B1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PGreen.BackgroundImage")));
			this->B1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PGreen->Location = System::Drawing::Point(953, 337);
			this->B1Table4PGreen->Name = L"B1Table4PGreen";
			this->B1Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B1Table4PGreen->TabIndex = 21;
			this->B1Table4PGreen->TabStop = false;
			this->B1Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::B1Table4PGreen_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(1062, 337);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B2Table4PGreen->TabIndex = 22;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::B2Table4PGreen_Click);
			// 
			// B3Table4PGreen
			// 
			this->B3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PGreen.BackgroundImage")));
			this->B3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PGreen->Location = System::Drawing::Point(953, 473);
			this->B3Table4PGreen->Name = L"B3Table4PGreen";
			this->B3Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B3Table4PGreen->TabIndex = 23;
			this->B3Table4PGreen->TabStop = false;
			this->B3Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::B3Table4PGreen_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(1062, 473);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B4Table4PGreen->TabIndex = 24;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::B4Table4PGreen_Click);
			// 
			// C1Table4PGreen
			// 
			this->C1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PGreen.BackgroundImage")));
			this->C1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PGreen->Location = System::Drawing::Point(462, 599);
			this->C1Table4PGreen->Name = L"C1Table4PGreen";
			this->C1Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C1Table4PGreen->TabIndex = 25;
			this->C1Table4PGreen->TabStop = false;
			this->C1Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::C1Table4PGreen_Click);
			// 
			// C2Table4PGreen
			// 
			this->C2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PGreen.BackgroundImage")));
			this->C2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PGreen->Location = System::Drawing::Point(582, 599);
			this->C2Table4PGreen->Name = L"C2Table4PGreen";
			this->C2Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C2Table4PGreen->TabIndex = 26;
			this->C2Table4PGreen->TabStop = false;
			this->C2Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::C2Table4PGreen_Click);
			// 
			// C3Table4PGreen
			// 
			this->C3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PGreen.BackgroundImage")));
			this->C3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PGreen->Location = System::Drawing::Point(702, 599);
			this->C3Table4PGreen->Name = L"C3Table4PGreen";
			this->C3Table4PGreen->Size = System::Drawing::Size(80, 67);
			this->C3Table4PGreen->TabIndex = 27;
			this->C3Table4PGreen->TabStop = false;
			this->C3Table4PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::C3Table4PGreen_Click);
			// 
			// D1Table2PGreen
			// 
			this->D1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table2PGreen.BackgroundImage")));
			this->D1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table2PGreen->Location = System::Drawing::Point(901, 599);
			this->D1Table2PGreen->Name = L"D1Table2PGreen";
			this->D1Table2PGreen->Size = System::Drawing::Size(57, 57);
			this->D1Table2PGreen->TabIndex = 28;
			this->D1Table2PGreen->TabStop = false;
			this->D1Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::D1Table2PGreen_Click);
			// 
			// D2Table2PGreen
			// 
			this->D2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table2PGreen.BackgroundImage")));
			this->D2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table2PGreen->Location = System::Drawing::Point(968, 599);
			this->D2Table2PGreen->Name = L"D2Table2PGreen";
			this->D2Table2PGreen->Size = System::Drawing::Size(57, 57);
			this->D2Table2PGreen->TabIndex = 29;
			this->D2Table2PGreen->TabStop = false;
			this->D2Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::D2Table2PGreen_Click);
			// 
			// D3Table2PGreen
			// 
			this->D3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table2PGreen.BackgroundImage")));
			this->D3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table2PGreen->Location = System::Drawing::Point(1035, 599);
			this->D3Table2PGreen->Name = L"D3Table2PGreen";
			this->D3Table2PGreen->Size = System::Drawing::Size(57, 57);
			this->D3Table2PGreen->TabIndex = 30;
			this->D3Table2PGreen->TabStop = false;
			this->D3Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::D3Table2PGreen_Click);
			// 
			// D4Table2PGreen
			// 
			this->D4Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D4Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4Table2PGreen.BackgroundImage")));
			this->D4Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D4Table2PGreen->Location = System::Drawing::Point(1102, 599);
			this->D4Table2PGreen->Name = L"D4Table2PGreen";
			this->D4Table2PGreen->Size = System::Drawing::Size(57, 57);
			this->D4Table2PGreen->TabIndex = 31;
			this->D4Table2PGreen->TabStop = false;
			this->D4Table2PGreen->Click += gcnew System::EventHandler(this, &BarMapraw::D4Table2PGreen_Click);
			// 
			// ConfirmTableBarMapraw
			// 
			this->ConfirmTableBarMapraw->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableBarMapraw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableBarMapraw.BackgroundImage")));
			this->ConfirmTableBarMapraw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableBarMapraw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableBarMapraw->Location = System::Drawing::Point(36, 594);
			this->ConfirmTableBarMapraw->Name = L"ConfirmTableBarMapraw";
			this->ConfirmTableBarMapraw->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableBarMapraw->TabIndex = 32;
			this->ConfirmTableBarMapraw->TabStop = false;
			this->ConfirmTableBarMapraw->Click += gcnew System::EventHandler(this, &BarMapraw::ConfirmTableBarMapraw_Click);
			// 
			// B1Table4PRed
			// 
			this->B1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PRed.Image")));
			this->B1Table4PRed->Location = System::Drawing::Point(953, 337);
			this->B1Table4PRed->Name = L"B1Table4PRed";
			this->B1Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B1Table4PRed->TabIndex = 33;
			this->B1Table4PRed->TabStop = false;
			// 
			// B2Table4PRed
			// 
			this->B2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PRed.Image")));
			this->B2Table4PRed->Location = System::Drawing::Point(1062, 337);
			this->B2Table4PRed->Name = L"B2Table4PRed";
			this->B2Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B2Table4PRed->TabIndex = 34;
			this->B2Table4PRed->TabStop = false;
			// 
			// B4Table4PRed
			// 
			this->B4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PRed.Image")));
			this->B4Table4PRed->Location = System::Drawing::Point(1062, 473);
			this->B4Table4PRed->Name = L"B4Table4PRed";
			this->B4Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B4Table4PRed->TabIndex = 35;
			this->B4Table4PRed->TabStop = false;
			// 
			// B3Table4PRed
			// 
			this->B3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PRed.Image")));
			this->B3Table4PRed->Location = System::Drawing::Point(953, 473);
			this->B3Table4PRed->Name = L"B3Table4PRed";
			this->B3Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B3Table4PRed->TabIndex = 36;
			this->B3Table4PRed->TabStop = false;
			// 
			// A1Table2PRed
			// 
			this->A1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PRed.Image")));
			this->A1Table2PRed->Location = System::Drawing::Point(466, 462);
			this->A1Table2PRed->Name = L"A1Table2PRed";
			this->A1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A1Table2PRed->TabIndex = 37;
			this->A1Table2PRed->TabStop = false;
			// 
			// A2Table2PRed
			// 
			this->A2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PRed.Image")));
			this->A2Table2PRed->Location = System::Drawing::Point(543, 462);
			this->A2Table2PRed->Name = L"A2Table2PRed";
			this->A2Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A2Table2PRed->TabIndex = 38;
			this->A2Table2PRed->TabStop = false;
			// 
			// A3Table2PRed
			// 
			this->A3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PRed.Image")));
			this->A3Table2PRed->Location = System::Drawing::Point(620, 462);
			this->A3Table2PRed->Name = L"A3Table2PRed";
			this->A3Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A3Table2PRed->TabIndex = 39;
			this->A3Table2PRed->TabStop = false;
			// 
			// A4Table2PRed
			// 
			this->A4Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A4Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table2PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table2PRed.Image")));
			this->A4Table2PRed->Location = System::Drawing::Point(697, 462);
			this->A4Table2PRed->Name = L"A4Table2PRed";
			this->A4Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A4Table2PRed->TabIndex = 40;
			this->A4Table2PRed->TabStop = false;
			// 
			// A5Table2PRed
			// 
			this->A5Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A5Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table2PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table2PRed.Image")));
			this->A5Table2PRed->Location = System::Drawing::Point(774, 462);
			this->A5Table2PRed->Name = L"A5Table2PRed";
			this->A5Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A5Table2PRed->TabIndex = 41;
			this->A5Table2PRed->TabStop = false;
			// 
			// C3Table4PGRed
			// 
			this->C3Table4PGRed->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PGRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PGRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PGRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PGRed.Image")));
			this->C3Table4PGRed->Location = System::Drawing::Point(702, 599);
			this->C3Table4PGRed->Name = L"C3Table4PGRed";
			this->C3Table4PGRed->Size = System::Drawing::Size(80, 67);
			this->C3Table4PGRed->TabIndex = 42;
			this->C3Table4PGRed->TabStop = false;
			// 
			// C2Table4PRed
			// 
			this->C2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PRed.Image")));
			this->C2Table4PRed->Location = System::Drawing::Point(582, 599);
			this->C2Table4PRed->Name = L"C2Table4PRed";
			this->C2Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C2Table4PRed->TabIndex = 43;
			this->C2Table4PRed->TabStop = false;
			// 
			// C1Table4PRed
			// 
			this->C1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PRed.Image")));
			this->C1Table4PRed->Location = System::Drawing::Point(462, 599);
			this->C1Table4PRed->Name = L"C1Table4PRed";
			this->C1Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C1Table4PRed->TabIndex = 44;
			this->C1Table4PRed->TabStop = false;
			// 
			// D1Table2PRed
			// 
			this->D1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->D1Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table2PRed.Image")));
			this->D1Table2PRed->Location = System::Drawing::Point(901, 599);
			this->D1Table2PRed->Name = L"D1Table2PRed";
			this->D1Table2PRed->Size = System::Drawing::Size(57, 57);
			this->D1Table2PRed->TabIndex = 45;
			this->D1Table2PRed->TabStop = false;
			// 
			// D4Table2PRed
			// 
			this->D4Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->D4Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D4Table2PRed.Image")));
			this->D4Table2PRed->Location = System::Drawing::Point(1102, 599);
			this->D4Table2PRed->Name = L"D4Table2PRed";
			this->D4Table2PRed->Size = System::Drawing::Size(57, 57);
			this->D4Table2PRed->TabIndex = 46;
			this->D4Table2PRed->TabStop = false;
			// 
			// D3Table2PRed
			// 
			this->D3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->D3Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table2PRed.Image")));
			this->D3Table2PRed->Location = System::Drawing::Point(1035, 599);
			this->D3Table2PRed->Name = L"D3Table2PRed";
			this->D3Table2PRed->Size = System::Drawing::Size(57, 57);
			this->D3Table2PRed->TabIndex = 47;
			this->D3Table2PRed->TabStop = false;
			// 
			// D2Table2PRed
			// 
			this->D2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->D2Table2PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table2PRed.Image")));
			this->D2Table2PRed->Location = System::Drawing::Point(968, 599);
			this->D2Table2PRed->Name = L"D2Table2PRed";
			this->D2Table2PRed->Size = System::Drawing::Size(57, 57);
			this->D2Table2PRed->TabIndex = 48;
			this->D2Table2PRed->TabStop = false;
			// 
			// BarMapraw
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->D2Table2PRed);
			this->Controls->Add(this->D3Table2PRed);
			this->Controls->Add(this->D4Table2PRed);
			this->Controls->Add(this->D1Table2PRed);
			this->Controls->Add(this->C1Table4PRed);
			this->Controls->Add(this->C2Table4PRed);
			this->Controls->Add(this->C3Table4PGRed);
			this->Controls->Add(this->A5Table2PRed);
			this->Controls->Add(this->A4Table2PRed);
			this->Controls->Add(this->A3Table2PRed);
			this->Controls->Add(this->A2Table2PRed);
			this->Controls->Add(this->A1Table2PRed);
			this->Controls->Add(this->B3Table4PRed);
			this->Controls->Add(this->B4Table4PRed);
			this->Controls->Add(this->B2Table4PRed);
			this->Controls->Add(this->B1Table4PRed);
			this->Controls->Add(this->ConfirmTableBarMapraw);
			this->Controls->Add(this->D4Table2PGreen);
			this->Controls->Add(this->D3Table2PGreen);
			this->Controls->Add(this->D2Table2PGreen);
			this->Controls->Add(this->D1Table2PGreen);
			this->Controls->Add(this->C3Table4PGreen);
			this->Controls->Add(this->C2Table4PGreen);
			this->Controls->Add(this->C1Table4PGreen);
			this->Controls->Add(this->B4Table4PGreen);
			this->Controls->Add(this->B3Table4PGreen);
			this->Controls->Add(this->B2Table4PGreen);
			this->Controls->Add(this->B1Table4PGreen);
			this->Controls->Add(this->A5Table2PGreen);
			this->Controls->Add(this->A4Table2PGreen);
			this->Controls->Add(this->A3Table2PGreen);
			this->Controls->Add(this->A2Table2PGreen);
			this->Controls->Add(this->A1Table2PGreen);
			this->Controls->Add(this->D4Table2P);
			this->Controls->Add(this->D3Table2P);
			this->Controls->Add(this->D2Table2P);
			this->Controls->Add(this->D1Table2P);
			this->Controls->Add(this->C3Table4P);
			this->Controls->Add(this->C2Table4P);
			this->Controls->Add(this->C1Table4P);
			this->Controls->Add(this->B4Table4P);
			this->Controls->Add(this->B3Table4P);
			this->Controls->Add(this->B2Table4P);
			this->Controls->Add(this->B1Table4P);
			this->Controls->Add(this->A5Table2P);
			this->Controls->Add(this->A4Table2P);
			this->Controls->Add(this->A3Table2P);
			this->Controls->Add(this->A2Table2P);
			this->Controls->Add(this->A1Table2P);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BarMapraw";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BarMapraw";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D4Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table2PRed))->EndInit();
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


//for nepjune I This page sorts all white buttons first, then green buttons.
#pragma endregion
		bool A1Table2PGreenCheck = true;
	private: System::Void BarMapraw_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTable = gcnew array<bool>(16);
	}
	private: System::Void A1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2P->Hide();
		A1Table2PGreen->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2P->Hide();
		A2Table2PGreen->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2P->Hide();
		A3Table2PGreen->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table2P->Hide();
		A4Table2PGreen->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table2P->Hide();
		A5Table2PGreen->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4P->Hide();
		B1Table4PGreen->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void B3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4P->Hide();
		B3Table4PGreen->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void C1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4P->Hide();
		C1Table4PGreen->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void C2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4P->Hide();
		C2Table4PGreen->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void C3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4P->Hide();
		C3Table4PGreen->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void D1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table2P->Hide();
		D1Table2PGreen->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void D2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table2P->Hide();
		D2Table2PGreen->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void D3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table2P->Hide();
		D3Table2PGreen->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void D4Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		D4Table2P->Hide();
		D4Table2PGreen->Show();
		dataTable[15] = !dataTable[15];
}
//
//Green
//
	private: System::Void A1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2PGreen->Hide();
		A1Table2P->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2PGreen->Hide();
		A2Table2P->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2PGreen->Hide();
		A3Table2P->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table2PGreen->Hide();
		A4Table2P->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table2PGreen->Hide();
		A5Table2P->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4PGreen->Hide();
		B1Table4P->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void B3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4PGreen->Hide();
		B3Table4P->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void C1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4PGreen->Hide();
		C1Table4P->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void C2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4PGreen->Hide();
		C2Table4P->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void C3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4PGreen->Hide();
		C3Table4P->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void D1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table2PGreen->Hide();
		D1Table2P->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void D2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table2PGreen->Hide();
		D2Table2P->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void D3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table2PGreen->Hide();
		D3Table2P->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void D4Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D4Table2PGreen->Hide();
		D4Table2P->Show();
		dataTable[15] = !dataTable[15];
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

	for (int i = 0; i < 16; i++) {
		a += (dataTable[i] ? "1" : "0");
	}

	string newData;
	MarshalString(a, newData);
	switchToMP = true;
	int targetline = 3;
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
private: System::Void A1Table2PFull_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   //array<bool>^ dataTable;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;

	String^ c = gcnew String("abcd");
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
	string path;
	vector<string> lines;

	MarshalString(temp, path);
	ifstream fileIn(path);

	if (fileIn.is_open()) {
	}
}

public: bool switchToProfile = false;
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToProfile = true;
	this->Close();
}
private: System::Void C3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
