#pragma once
#using <mscorlib.dll>
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "User.h"
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text;

	/// <summary>
	/// Summary for BarGong
	/// </summary>
	public ref class BarGong : public System::Windows::Forms::Form
	{
		StringBuilder^ a = gcnew StringBuilder("00000000000000000000000000000");
	
	
	public:
		String^ username = nullptr;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		array<bool>^ dataTable;
		BarGong(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		A1Table1PGreen->Hide();
		A2Table1PGreen->Hide();
		A3Table1PGreen->Hide();
		A4Table1PGreen->Hide();
		B1Table4PGreen->Hide();
		B2Table4PGreen->Hide();
		B3Table6PGreen->Hide();
		B4Table4PGreen->Hide();
		B5Table4PGreen->Hide();
		B6Table6PGreen->Hide();
		C1Table4PGreen->Hide();
		C2Table4PGreen->Hide();
		C3Table4PGreen->Hide();
		D1Table4PGreen->Hide();
		D2Table4PGreen->Hide();
		D3Table4PGreen->Hide();
		E1Table4PGreen->Hide();
		E2Table4PGreen->Hide();
		E3Table4PGreen->Hide();
		E4Table4PGreen->Hide();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarGong()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ A1Table1P;
	private: System::Windows::Forms::PictureBox^ A2Table1P;
	private: System::Windows::Forms::PictureBox^ A3Table1P;

	private: System::Windows::Forms::PictureBox^ B1Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B3Table6P;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ B5Table4P;
	private: System::Windows::Forms::PictureBox^ B6Table6P;
	private: System::Windows::Forms::PictureBox^ C1Table4P;
	private: System::Windows::Forms::PictureBox^ C2Table4P;
	private: System::Windows::Forms::PictureBox^ C3Table4P;
	private: System::Windows::Forms::PictureBox^ D1Table4P;
	private: System::Windows::Forms::PictureBox^ D2Table4P;
	private: System::Windows::Forms::PictureBox^ D3Table4P;
	private: System::Windows::Forms::PictureBox^ E1Table4P;
	private: System::Windows::Forms::PictureBox^ E2Table4P;
	private: System::Windows::Forms::PictureBox^ E3Table4P;
	private: System::Windows::Forms::PictureBox^ E4Table4P;
	private: System::Windows::Forms::PictureBox^ A4Table1P;
	private: System::Windows::Forms::PictureBox^ A1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table6PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B5Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B6Table6PGreen;
	private: System::Windows::Forms::PictureBox^ C1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A1Table1PRed;
	private: System::Windows::Forms::PictureBox^ A2Table1PRed;
	private: System::Windows::Forms::PictureBox^ A4Table1PRed;


	private: System::Windows::Forms::PictureBox^ A3Table1PRed;
	private: System::Windows::Forms::PictureBox^ D1Table4PRed;
	private: System::Windows::Forms::PictureBox^ D3Table4PRed;
	private: System::Windows::Forms::PictureBox^ D2Table4PRed;
	private: System::Windows::Forms::PictureBox^ E4Table4PRed;
	private: System::Windows::Forms::PictureBox^ E3Table4PRed;
	private: System::Windows::Forms::PictureBox^ E2Table4PRed;
	private: System::Windows::Forms::PictureBox^ E1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B2Table4PRed;
	private: System::Windows::Forms::PictureBox^ B1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B4Table4PRed;
	private: System::Windows::Forms::PictureBox^ B5Table4PRed;
	private: System::Windows::Forms::PictureBox^ C1Table4PRed;
private: System::Windows::Forms::PictureBox^ C2Table4PRed;
private: System::Windows::Forms::PictureBox^ C3Table4PRed;
private: System::Windows::Forms::PictureBox^ B3Table6PRed;
private: System::Windows::Forms::PictureBox^ B6Table6PRed;













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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarGong::typeid));
			this->A1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6PRed = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// A1Table1P
			// 
			this->A1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1P.BackgroundImage")));
			this->A1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1P->Location = System::Drawing::Point(781, 114);
			this->A1Table1P->Margin = System::Windows::Forms::Padding(2);
			this->A1Table1P->Name = L"A1Table1P";
			this->A1Table1P->Size = System::Drawing::Size(20, 24);
			this->A1Table1P->TabIndex = 79;
			this->A1Table1P->TabStop = false;
			this->A1Table1P->Click += gcnew System::EventHandler(this, &BarGong::A1Table1P_Click);
			// 
			// A2Table1P
			// 
			this->A2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1P.BackgroundImage")));
			this->A2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1P->Location = System::Drawing::Point(781, 138);
			this->A2Table1P->Margin = System::Windows::Forms::Padding(2);
			this->A2Table1P->Name = L"A2Table1P";
			this->A2Table1P->Size = System::Drawing::Size(20, 24);
			this->A2Table1P->TabIndex = 80;
			this->A2Table1P->TabStop = false;
			this->A2Table1P->Click += gcnew System::EventHandler(this, &BarGong::A2Table1P_Click);
			// 
			// A3Table1P
			// 
			this->A3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1P.BackgroundImage")));
			this->A3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1P->Location = System::Drawing::Point(781, 162);
			this->A3Table1P->Margin = System::Windows::Forms::Padding(2);
			this->A3Table1P->Name = L"A3Table1P";
			this->A3Table1P->Size = System::Drawing::Size(20, 24);
			this->A3Table1P->TabIndex = 81;
			this->A3Table1P->TabStop = false;
			this->A3Table1P->Click += gcnew System::EventHandler(this, &BarGong::A3Table1P_Click);
			// 
			// B1Table4P
			// 
			this->B1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4P.BackgroundImage")));
			this->B1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4P->Location = System::Drawing::Point(451, 332);
			this->B1Table4P->Margin = System::Windows::Forms::Padding(2);
			this->B1Table4P->Name = L"B1Table4P";
			this->B1Table4P->Size = System::Drawing::Size(48, 52);
			this->B1Table4P->TabIndex = 83;
			this->B1Table4P->TabStop = false;
			this->B1Table4P->Click += gcnew System::EventHandler(this, &BarGong::B1Table4P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(451, 401);
			this->B2Table4P->Margin = System::Windows::Forms::Padding(2);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(48, 52);
			this->B2Table4P->TabIndex = 84;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &BarGong::B2Table4P_Click);
			// 
			// B3Table6P
			// 
			this->B3Table6P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6P.BackgroundImage")));
			this->B3Table6P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6P->Location = System::Drawing::Point(515, 354);
			this->B3Table6P->Margin = System::Windows::Forms::Padding(2);
			this->B3Table6P->Name = L"B3Table6P";
			this->B3Table6P->Size = System::Drawing::Size(68, 75);
			this->B3Table6P->TabIndex = 85;
			this->B3Table6P->TabStop = false;
			this->B3Table6P->Click += gcnew System::EventHandler(this, &BarGong::B3Table6P_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(599, 332);
			this->B4Table4P->Margin = System::Windows::Forms::Padding(2);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(48, 52);
			this->B4Table4P->TabIndex = 86;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &BarGong::B4Table4P_Click);
			// 
			// B5Table4P
			// 
			this->B5Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4P.BackgroundImage")));
			this->B5Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4P->Location = System::Drawing::Point(599, 401);
			this->B5Table4P->Margin = System::Windows::Forms::Padding(2);
			this->B5Table4P->Name = L"B5Table4P";
			this->B5Table4P->Size = System::Drawing::Size(48, 52);
			this->B5Table4P->TabIndex = 87;
			this->B5Table4P->TabStop = false;
			this->B5Table4P->Click += gcnew System::EventHandler(this, &BarGong::B5Table4P_Click);
			// 
			// B6Table6P
			// 
			this->B6Table6P->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6P.BackgroundImage")));
			this->B6Table6P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6P->Location = System::Drawing::Point(665, 354);
			this->B6Table6P->Margin = System::Windows::Forms::Padding(2);
			this->B6Table6P->Name = L"B6Table6P";
			this->B6Table6P->Size = System::Drawing::Size(68, 75);
			this->B6Table6P->TabIndex = 88;
			this->B6Table6P->TabStop = false;
			// 
			// C1Table4P
			// 
			this->C1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4P.BackgroundImage")));
			this->C1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4P->Location = System::Drawing::Point(766, 262);
			this->C1Table4P->Margin = System::Windows::Forms::Padding(2);
			this->C1Table4P->Name = L"C1Table4P";
			this->C1Table4P->Size = System::Drawing::Size(48, 52);
			this->C1Table4P->TabIndex = 89;
			this->C1Table4P->TabStop = false;
			this->C1Table4P->Click += gcnew System::EventHandler(this, &BarGong::C1Table4P_Click);
			// 
			// C2Table4P
			// 
			this->C2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4P.BackgroundImage")));
			this->C2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4P->Location = System::Drawing::Point(766, 332);
			this->C2Table4P->Margin = System::Windows::Forms::Padding(2);
			this->C2Table4P->Name = L"C2Table4P";
			this->C2Table4P->Size = System::Drawing::Size(48, 52);
			this->C2Table4P->TabIndex = 90;
			this->C2Table4P->TabStop = false;
			this->C2Table4P->Click += gcnew System::EventHandler(this, &BarGong::C2Table4P_Click);
			// 
			// C3Table4P
			// 
			this->C3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4P.BackgroundImage")));
			this->C3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4P->Location = System::Drawing::Point(766, 401);
			this->C3Table4P->Margin = System::Windows::Forms::Padding(2);
			this->C3Table4P->Name = L"C3Table4P";
			this->C3Table4P->Size = System::Drawing::Size(48, 52);
			this->C3Table4P->TabIndex = 91;
			this->C3Table4P->TabStop = false;
			this->C3Table4P->Click += gcnew System::EventHandler(this, &BarGong::C3Table4P_Click);
			// 
			// D1Table4P
			// 
			this->D1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4P.BackgroundImage")));
			this->D1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4P->Location = System::Drawing::Point(872, 201);
			this->D1Table4P->Margin = System::Windows::Forms::Padding(2);
			this->D1Table4P->Name = L"D1Table4P";
			this->D1Table4P->Size = System::Drawing::Size(50, 66);
			this->D1Table4P->TabIndex = 92;
			this->D1Table4P->TabStop = false;
			this->D1Table4P->Click += gcnew System::EventHandler(this, &BarGong::D1Table4P_Click);
			// 
			// D2Table4P
			// 
			this->D2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4P.BackgroundImage")));
			this->D2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4P->Location = System::Drawing::Point(872, 284);
			this->D2Table4P->Margin = System::Windows::Forms::Padding(2);
			this->D2Table4P->Name = L"D2Table4P";
			this->D2Table4P->Size = System::Drawing::Size(50, 66);
			this->D2Table4P->TabIndex = 93;
			this->D2Table4P->TabStop = false;
			this->D2Table4P->Click += gcnew System::EventHandler(this, &BarGong::D2Table4P_Click);
			// 
			// D3Table4P
			// 
			this->D3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4P.BackgroundImage")));
			this->D3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4P->Location = System::Drawing::Point(872, 366);
			this->D3Table4P->Margin = System::Windows::Forms::Padding(2);
			this->D3Table4P->Name = L"D3Table4P";
			this->D3Table4P->Size = System::Drawing::Size(50, 66);
			this->D3Table4P->TabIndex = 94;
			this->D3Table4P->TabStop = false;
			this->D3Table4P->Click += gcnew System::EventHandler(this, &BarGong::D3Table4P_Click);
			// 
			// E1Table4P
			// 
			this->E1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4P.BackgroundImage")));
			this->E1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4P->Location = System::Drawing::Point(482, 489);
			this->E1Table4P->Margin = System::Windows::Forms::Padding(2);
			this->E1Table4P->Name = L"E1Table4P";
			this->E1Table4P->Size = System::Drawing::Size(60, 54);
			this->E1Table4P->TabIndex = 95;
			this->E1Table4P->TabStop = false;
			this->E1Table4P->Click += gcnew System::EventHandler(this, &BarGong::E1Table4P_Click);
			// 
			// E2Table4P
			// 
			this->E2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4P.BackgroundImage")));
			this->E2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4P->Location = System::Drawing::Point(574, 489);
			this->E2Table4P->Margin = System::Windows::Forms::Padding(2);
			this->E2Table4P->Name = L"E2Table4P";
			this->E2Table4P->Size = System::Drawing::Size(60, 54);
			this->E2Table4P->TabIndex = 96;
			this->E2Table4P->TabStop = false;
			this->E2Table4P->Click += gcnew System::EventHandler(this, &BarGong::E2Table4P_Click);
			// 
			// E3Table4P
			// 
			this->E3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4P.BackgroundImage")));
			this->E3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4P->Location = System::Drawing::Point(668, 489);
			this->E3Table4P->Margin = System::Windows::Forms::Padding(2);
			this->E3Table4P->Name = L"E3Table4P";
			this->E3Table4P->Size = System::Drawing::Size(60, 54);
			this->E3Table4P->TabIndex = 97;
			this->E3Table4P->TabStop = false;
			this->E3Table4P->Click += gcnew System::EventHandler(this, &BarGong::E3Table4P_Click);
			// 
			// E4Table4P
			// 
			this->E4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4P.BackgroundImage")));
			this->E4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4P->Location = System::Drawing::Point(760, 489);
			this->E4Table4P->Margin = System::Windows::Forms::Padding(2);
			this->E4Table4P->Name = L"E4Table4P";
			this->E4Table4P->Size = System::Drawing::Size(60, 54);
			this->E4Table4P->TabIndex = 98;
			this->E4Table4P->TabStop = false;
			this->E4Table4P->Click += gcnew System::EventHandler(this, &BarGong::E4Table4P_Click);
			// 
			// A4Table1P
			// 
			this->A4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1P.BackgroundImage")));
			this->A4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1P->Location = System::Drawing::Point(781, 187);
			this->A4Table1P->Margin = System::Windows::Forms::Padding(2);
			this->A4Table1P->Name = L"A4Table1P";
			this->A4Table1P->Size = System::Drawing::Size(20, 24);
			this->A4Table1P->TabIndex = 99;
			this->A4Table1P->TabStop = false;
			this->A4Table1P->Click += gcnew System::EventHandler(this, &BarGong::A4Table1P_Click);
			// 
			// A1Table1PGreen
			// 
			this->A1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PGreen.BackgroundImage")));
			this->A1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PGreen->Location = System::Drawing::Point(781, 114);
			this->A1Table1PGreen->Margin = System::Windows::Forms::Padding(2);
			this->A1Table1PGreen->Name = L"A1Table1PGreen";
			this->A1Table1PGreen->Size = System::Drawing::Size(20, 24);
			this->A1Table1PGreen->TabIndex = 100;
			this->A1Table1PGreen->TabStop = false;
			this->A1Table1PGreen->Click += gcnew System::EventHandler(this, &BarGong::A1Table1PGreen_Click);
			// 
			// A2Table1PGreen
			// 
			this->A2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PGreen.BackgroundImage")));
			this->A2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PGreen->Location = System::Drawing::Point(781, 138);
			this->A2Table1PGreen->Margin = System::Windows::Forms::Padding(2);
			this->A2Table1PGreen->Name = L"A2Table1PGreen";
			this->A2Table1PGreen->Size = System::Drawing::Size(20, 24);
			this->A2Table1PGreen->TabIndex = 101;
			this->A2Table1PGreen->TabStop = false;
			this->A2Table1PGreen->Click += gcnew System::EventHandler(this, &BarGong::A2Table1PGreen_Click);
			// 
			// A3Table1PGreen
			// 
			this->A3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PGreen.BackgroundImage")));
			this->A3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PGreen->Location = System::Drawing::Point(781, 162);
			this->A3Table1PGreen->Margin = System::Windows::Forms::Padding(2);
			this->A3Table1PGreen->Name = L"A3Table1PGreen";
			this->A3Table1PGreen->Size = System::Drawing::Size(20, 24);
			this->A3Table1PGreen->TabIndex = 102;
			this->A3Table1PGreen->TabStop = false;
			this->A3Table1PGreen->Click += gcnew System::EventHandler(this, &BarGong::A3Table1PGreen_Click);
			// 
			// A4Table1PGreen
			// 
			this->A4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PGreen.BackgroundImage")));
			this->A4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PGreen->Location = System::Drawing::Point(781, 187);
			this->A4Table1PGreen->Margin = System::Windows::Forms::Padding(2);
			this->A4Table1PGreen->Name = L"A4Table1PGreen";
			this->A4Table1PGreen->Size = System::Drawing::Size(20, 24);
			this->A4Table1PGreen->TabIndex = 103;
			this->A4Table1PGreen->TabStop = false;
			this->A4Table1PGreen->Click += gcnew System::EventHandler(this, &BarGong::A4Table1PGreen_Click);
			// 
			// B1Table4PGreen
			// 
			this->B1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PGreen.BackgroundImage")));
			this->B1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PGreen->Location = System::Drawing::Point(451, 332);
			this->B1Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B1Table4PGreen->Name = L"B1Table4PGreen";
			this->B1Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->B1Table4PGreen->TabIndex = 104;
			this->B1Table4PGreen->TabStop = false;
			this->B1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::B1Table4PGreen_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(451, 401);
			this->B2Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->B2Table4PGreen->TabIndex = 105;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::B2Table4PGreen_Click);
			// 
			// B3Table6PGreen
			// 
			this->B3Table6PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6PGreen.BackgroundImage")));
			this->B3Table6PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6PGreen->Location = System::Drawing::Point(515, 354);
			this->B3Table6PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B3Table6PGreen->Name = L"B3Table6PGreen";
			this->B3Table6PGreen->Size = System::Drawing::Size(68, 75);
			this->B3Table6PGreen->TabIndex = 106;
			this->B3Table6PGreen->TabStop = false;
			this->B3Table6PGreen->Click += gcnew System::EventHandler(this, &BarGong::B3Table6PGreen_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(599, 332);
			this->B4Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->B4Table4PGreen->TabIndex = 107;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::B4Table4PGreen_Click);
			// 
			// B5Table4PGreen
			// 
			this->B5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PGreen.BackgroundImage")));
			this->B5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PGreen->Location = System::Drawing::Point(599, 401);
			this->B5Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B5Table4PGreen->Name = L"B5Table4PGreen";
			this->B5Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->B5Table4PGreen->TabIndex = 108;
			this->B5Table4PGreen->TabStop = false;
			this->B5Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::B5Table4PGreen_Click);
			// 
			// B6Table6PGreen
			// 
			this->B6Table6PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6PGreen.BackgroundImage")));
			this->B6Table6PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6PGreen->Location = System::Drawing::Point(665, 354);
			this->B6Table6PGreen->Margin = System::Windows::Forms::Padding(2);
			this->B6Table6PGreen->Name = L"B6Table6PGreen";
			this->B6Table6PGreen->Size = System::Drawing::Size(68, 75);
			this->B6Table6PGreen->TabIndex = 109;
			this->B6Table6PGreen->TabStop = false;
			this->B6Table6PGreen->Click += gcnew System::EventHandler(this, &BarGong::B6Table6PGreen_Click);
			// 
			// C1Table4PGreen
			// 
			this->C1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PGreen.BackgroundImage")));
			this->C1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PGreen->Location = System::Drawing::Point(766, 262);
			this->C1Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->C1Table4PGreen->Name = L"C1Table4PGreen";
			this->C1Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->C1Table4PGreen->TabIndex = 110;
			this->C1Table4PGreen->TabStop = false;
			this->C1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::C1Table4PGreen_Click);
			// 
			// C2Table4PGreen
			// 
			this->C2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PGreen.BackgroundImage")));
			this->C2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PGreen->Location = System::Drawing::Point(766, 332);
			this->C2Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->C2Table4PGreen->Name = L"C2Table4PGreen";
			this->C2Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->C2Table4PGreen->TabIndex = 111;
			this->C2Table4PGreen->TabStop = false;
			this->C2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::C2Table4PGreen_Click);
			// 
			// C3Table4PGreen
			// 
			this->C3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PGreen.BackgroundImage")));
			this->C3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PGreen->Location = System::Drawing::Point(766, 401);
			this->C3Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->C3Table4PGreen->Name = L"C3Table4PGreen";
			this->C3Table4PGreen->Size = System::Drawing::Size(48, 52);
			this->C3Table4PGreen->TabIndex = 112;
			this->C3Table4PGreen->TabStop = false;
			this->C3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::C3Table4PGreen_Click);
			// 
			// D1Table4PGreen
			// 
			this->D1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PGreen.BackgroundImage")));
			this->D1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PGreen->Location = System::Drawing::Point(872, 201);
			this->D1Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->D1Table4PGreen->Name = L"D1Table4PGreen";
			this->D1Table4PGreen->Size = System::Drawing::Size(50, 66);
			this->D1Table4PGreen->TabIndex = 113;
			this->D1Table4PGreen->TabStop = false;
			this->D1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::D1Table4PGreen_Click);
			// 
			// D2Table4PGreen
			// 
			this->D2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PGreen.BackgroundImage")));
			this->D2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PGreen->Location = System::Drawing::Point(872, 284);
			this->D2Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->D2Table4PGreen->Name = L"D2Table4PGreen";
			this->D2Table4PGreen->Size = System::Drawing::Size(50, 66);
			this->D2Table4PGreen->TabIndex = 114;
			this->D2Table4PGreen->TabStop = false;
			this->D2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::D2Table4PGreen_Click);
			// 
			// D3Table4PGreen
			// 
			this->D3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PGreen.BackgroundImage")));
			this->D3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PGreen->Location = System::Drawing::Point(872, 366);
			this->D3Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->D3Table4PGreen->Name = L"D3Table4PGreen";
			this->D3Table4PGreen->Size = System::Drawing::Size(50, 66);
			this->D3Table4PGreen->TabIndex = 115;
			this->D3Table4PGreen->TabStop = false;
			this->D3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::D3Table4PGreen_Click);
			// 
			// E1Table4PGreen
			// 
			this->E1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4PGreen.BackgroundImage")));
			this->E1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4PGreen->Location = System::Drawing::Point(482, 489);
			this->E1Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->E1Table4PGreen->Name = L"E1Table4PGreen";
			this->E1Table4PGreen->Size = System::Drawing::Size(60, 54);
			this->E1Table4PGreen->TabIndex = 116;
			this->E1Table4PGreen->TabStop = false;
			this->E1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::E1Table4PGreen_Click);
			// 
			// E2Table4PGreen
			// 
			this->E2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4PGreen.BackgroundImage")));
			this->E2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4PGreen->Location = System::Drawing::Point(574, 489);
			this->E2Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->E2Table4PGreen->Name = L"E2Table4PGreen";
			this->E2Table4PGreen->Size = System::Drawing::Size(60, 54);
			this->E2Table4PGreen->TabIndex = 117;
			this->E2Table4PGreen->TabStop = false;
			this->E2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::E2Table4PGreen_Click);
			// 
			// E3Table4PGreen
			// 
			this->E3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4PGreen.BackgroundImage")));
			this->E3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4PGreen->Location = System::Drawing::Point(668, 489);
			this->E3Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->E3Table4PGreen->Name = L"E3Table4PGreen";
			this->E3Table4PGreen->Size = System::Drawing::Size(60, 54);
			this->E3Table4PGreen->TabIndex = 118;
			this->E3Table4PGreen->TabStop = false;
			this->E3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::E3Table4PGreen_Click);
			// 
			// E4Table4PGreen
			// 
			this->E4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4PGreen.BackgroundImage")));
			this->E4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4PGreen->Location = System::Drawing::Point(760, 489);
			this->E4Table4PGreen->Margin = System::Windows::Forms::Padding(2);
			this->E4Table4PGreen->Name = L"E4Table4PGreen";
			this->E4Table4PGreen->Size = System::Drawing::Size(60, 54);
			this->E4Table4PGreen->TabIndex = 119;
			this->E4Table4PGreen->TabStop = false;
			this->E4Table4PGreen->Click += gcnew System::EventHandler(this, &BarGong::E4Table4PGreen_Click);
			// 
			// A1Table1PRed
			// 
			this->A1Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PRed.Image")));
			this->A1Table1PRed->Location = System::Drawing::Point(781, 114);
			this->A1Table1PRed->Name = L"A1Table1PRed";
			this->A1Table1PRed->Size = System::Drawing::Size(20, 24);
			this->A1Table1PRed->TabIndex = 120;
			this->A1Table1PRed->TabStop = false;
			// 
			// A2Table1PRed
			// 
			this->A2Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PRed.Image")));
			this->A2Table1PRed->Location = System::Drawing::Point(781, 138);
			this->A2Table1PRed->Name = L"A2Table1PRed";
			this->A2Table1PRed->Size = System::Drawing::Size(20, 24);
			this->A2Table1PRed->TabIndex = 121;
			this->A2Table1PRed->TabStop = false;
			// 
			// A4Table1PRed
			// 
			this->A4Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PRed.Image")));
			this->A4Table1PRed->Location = System::Drawing::Point(781, 187);
			this->A4Table1PRed->Name = L"A4Table1PRed";
			this->A4Table1PRed->Size = System::Drawing::Size(20, 24);
			this->A4Table1PRed->TabIndex = 122;
			this->A4Table1PRed->TabStop = false;
			// 
			// A3Table1PRed
			// 
			this->A3Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PRed.Image")));
			this->A3Table1PRed->Location = System::Drawing::Point(781, 162);
			this->A3Table1PRed->Name = L"A3Table1PRed";
			this->A3Table1PRed->Size = System::Drawing::Size(20, 24);
			this->A3Table1PRed->TabIndex = 123;
			this->A3Table1PRed->TabStop = false;
			// 
			// D1Table4PRed
			// 
			this->D1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PRed.Image")));
			this->D1Table4PRed->Location = System::Drawing::Point(872, 201);
			this->D1Table4PRed->Name = L"D1Table4PRed";
			this->D1Table4PRed->Size = System::Drawing::Size(50, 66);
			this->D1Table4PRed->TabIndex = 124;
			this->D1Table4PRed->TabStop = false;
			// 
			// D3Table4PRed
			// 
			this->D3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PRed.Image")));
			this->D3Table4PRed->Location = System::Drawing::Point(872, 366);
			this->D3Table4PRed->Name = L"D3Table4PRed";
			this->D3Table4PRed->Size = System::Drawing::Size(50, 66);
			this->D3Table4PRed->TabIndex = 125;
			this->D3Table4PRed->TabStop = false;
			// 
			// D2Table4PRed
			// 
			this->D2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PRed.Image")));
			this->D2Table4PRed->Location = System::Drawing::Point(872, 284);
			this->D2Table4PRed->Name = L"D2Table4PRed";
			this->D2Table4PRed->Size = System::Drawing::Size(50, 66);
			this->D2Table4PRed->TabIndex = 126;
			this->D2Table4PRed->TabStop = false;
			// 
			// E4Table4PRed
			// 
			this->E4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4PRed.Image")));
			this->E4Table4PRed->Location = System::Drawing::Point(760, 489);
			this->E4Table4PRed->Name = L"E4Table4PRed";
			this->E4Table4PRed->Size = System::Drawing::Size(60, 54);
			this->E4Table4PRed->TabIndex = 127;
			this->E4Table4PRed->TabStop = false;
			// 
			// E3Table4PRed
			// 
			this->E3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4PRed.Image")));
			this->E3Table4PRed->Location = System::Drawing::Point(668, 489);
			this->E3Table4PRed->Name = L"E3Table4PRed";
			this->E3Table4PRed->Size = System::Drawing::Size(60, 54);
			this->E3Table4PRed->TabIndex = 128;
			this->E3Table4PRed->TabStop = false;
			// 
			// E2Table4PRed
			// 
			this->E2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4PRed.Image")));
			this->E2Table4PRed->Location = System::Drawing::Point(574, 489);
			this->E2Table4PRed->Name = L"E2Table4PRed";
			this->E2Table4PRed->Size = System::Drawing::Size(60, 54);
			this->E2Table4PRed->TabIndex = 129;
			this->E2Table4PRed->TabStop = false;
			// 
			// E1Table4PRed
			// 
			this->E1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4PRed.Image")));
			this->E1Table4PRed->Location = System::Drawing::Point(482, 489);
			this->E1Table4PRed->Name = L"E1Table4PRed";
			this->E1Table4PRed->Size = System::Drawing::Size(60, 54);
			this->E1Table4PRed->TabIndex = 130;
			this->E1Table4PRed->TabStop = false;
			// 
			// B2Table4PRed
			// 
			this->B2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PRed.Image")));
			this->B2Table4PRed->Location = System::Drawing::Point(451, 401);
			this->B2Table4PRed->Name = L"B2Table4PRed";
			this->B2Table4PRed->Size = System::Drawing::Size(48, 52);
			this->B2Table4PRed->TabIndex = 131;
			this->B2Table4PRed->TabStop = false;
			// 
			// B1Table4PRed
			// 
			this->B1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PRed.Image")));
			this->B1Table4PRed->Location = System::Drawing::Point(451, 332);
			this->B1Table4PRed->Name = L"B1Table4PRed";
			this->B1Table4PRed->Size = System::Drawing::Size(48, 52);
			this->B1Table4PRed->TabIndex = 132;
			this->B1Table4PRed->TabStop = false;
			// 
			// B4Table4PRed
			// 
			this->B4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PRed.Image")));
			this->B4Table4PRed->Location = System::Drawing::Point(599, 332);
			this->B4Table4PRed->Name = L"B4Table4PRed";
			this->B4Table4PRed->Size = System::Drawing::Size(48, 52);
			this->B4Table4PRed->TabIndex = 133;
			this->B4Table4PRed->TabStop = false;
			// 
			// B5Table4PRed
			// 
			this->B5Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PRed.Image")));
			this->B5Table4PRed->Location = System::Drawing::Point(599, 401);
			this->B5Table4PRed->Name = L"B5Table4PRed";
			this->B5Table4PRed->Size = System::Drawing::Size(48, 52);
			this->B5Table4PRed->TabIndex = 134;
			this->B5Table4PRed->TabStop = false;
			// 
			// C1Table4PRed
			// 
			this->C1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PRed.Image")));
			this->C1Table4PRed->Location = System::Drawing::Point(766, 262);
			this->C1Table4PRed->Name = L"C1Table4PRed";
			this->C1Table4PRed->Size = System::Drawing::Size(48, 52);
			this->C1Table4PRed->TabIndex = 135;
			this->C1Table4PRed->TabStop = false;
			// 
			// C2Table4PRed
			// 
			this->C2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PRed.Image")));
			this->C2Table4PRed->Location = System::Drawing::Point(766, 332);
			this->C2Table4PRed->Name = L"C2Table4PRed";
			this->C2Table4PRed->Size = System::Drawing::Size(48, 52);
			this->C2Table4PRed->TabIndex = 136;
			this->C2Table4PRed->TabStop = false;
			// 
			// C3Table4PRed
			// 
			this->C3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PRed.Image")));
			this->C3Table4PRed->Location = System::Drawing::Point(766, 401);
			this->C3Table4PRed->Name = L"C3Table4PRed";
			this->C3Table4PRed->Size = System::Drawing::Size(48, 52);
			this->C3Table4PRed->TabIndex = 137;
			this->C3Table4PRed->TabStop = false;
			// 
			// B3Table6PRed
			// 
			this->B3Table6PRed->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6PRed.Image")));
			this->B3Table6PRed->Location = System::Drawing::Point(515, 354);
			this->B3Table6PRed->Name = L"B3Table6PRed";
			this->B3Table6PRed->Size = System::Drawing::Size(68, 75);
			this->B3Table6PRed->TabIndex = 138;
			this->B3Table6PRed->TabStop = false;
			// 
			// B6Table6PRed
			// 
			this->B6Table6PRed->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6PRed.Image")));
			this->B6Table6PRed->Location = System::Drawing::Point(665, 354);
			this->B6Table6PRed->Name = L"B6Table6PRed";
			this->B6Table6PRed->Size = System::Drawing::Size(68, 75);
			this->B6Table6PRed->TabIndex = 139;
			this->B6Table6PRed->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(18, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 21);
			this->pictureBox1->TabIndex = 140;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BarGong::pictureBox1_Click);
			// 
			// BarGong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(960, 585);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->B6Table6PRed);
			this->Controls->Add(this->B3Table6PRed);
			this->Controls->Add(this->C3Table4PRed);
			this->Controls->Add(this->C2Table4PRed);
			this->Controls->Add(this->C1Table4PRed);
			this->Controls->Add(this->B5Table4PRed);
			this->Controls->Add(this->B4Table4PRed);
			this->Controls->Add(this->B1Table4PRed);
			this->Controls->Add(this->B2Table4PRed);
			this->Controls->Add(this->E1Table4PRed);
			this->Controls->Add(this->E2Table4PRed);
			this->Controls->Add(this->E3Table4PRed);
			this->Controls->Add(this->E4Table4PRed);
			this->Controls->Add(this->D2Table4PRed);
			this->Controls->Add(this->D3Table4PRed);
			this->Controls->Add(this->D1Table4PRed);
			this->Controls->Add(this->A3Table1PRed);
			this->Controls->Add(this->A4Table1PRed);
			this->Controls->Add(this->A2Table1PRed);
			this->Controls->Add(this->A1Table1PRed);
			this->Controls->Add(this->E4Table4PGreen);
			this->Controls->Add(this->E3Table4PGreen);
			this->Controls->Add(this->E2Table4PGreen);
			this->Controls->Add(this->E1Table4PGreen);
			this->Controls->Add(this->D3Table4PGreen);
			this->Controls->Add(this->D2Table4PGreen);
			this->Controls->Add(this->D1Table4PGreen);
			this->Controls->Add(this->C3Table4PGreen);
			this->Controls->Add(this->C2Table4PGreen);
			this->Controls->Add(this->C1Table4PGreen);
			this->Controls->Add(this->B6Table6PGreen);
			this->Controls->Add(this->B5Table4PGreen);
			this->Controls->Add(this->B4Table4PGreen);
			this->Controls->Add(this->B3Table6PGreen);
			this->Controls->Add(this->B2Table4PGreen);
			this->Controls->Add(this->B1Table4PGreen);
			this->Controls->Add(this->A4Table1PGreen);
			this->Controls->Add(this->A3Table1PGreen);
			this->Controls->Add(this->A2Table1PGreen);
			this->Controls->Add(this->A1Table1PGreen);
			this->Controls->Add(this->A4Table1P);
			this->Controls->Add(this->E4Table4P);
			this->Controls->Add(this->E3Table4P);
			this->Controls->Add(this->E2Table4P);
			this->Controls->Add(this->E1Table4P);
			this->Controls->Add(this->D3Table4P);
			this->Controls->Add(this->D2Table4P);
			this->Controls->Add(this->D1Table4P);
			this->Controls->Add(this->C3Table4P);
			this->Controls->Add(this->C2Table4P);
			this->Controls->Add(this->C1Table4P);
			this->Controls->Add(this->B6Table6P);
			this->Controls->Add(this->B5Table4P);
			this->Controls->Add(this->B4Table4P);
			this->Controls->Add(this->B3Table6P);
			this->Controls->Add(this->B2Table4P);
			this->Controls->Add(this->B1Table4P);
			this->Controls->Add(this->A3Table1P);
			this->Controls->Add(this->A2Table1P);
			this->Controls->Add(this->A1Table1P);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"BarGong";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BarGong";
			this->Load += gcnew System::EventHandler(this, &BarGong::BarGong_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		dataTable = gcnew array<bool>(20);
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
	private: System::Void B1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4P->Hide();
		B1Table4PGreen->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B3Table6P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table6P->Hide();
		B3Table6PGreen->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B5Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B5Table4P->Hide();
		B5Table4PGreen->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void B6Table6P_Click(System::Object^ sender, System::EventArgs^ e) {
		B6Table6P->Hide();
		B6Table6PGreen->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void C1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4P->Hide();
		C1Table4PGreen->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void C2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4P->Hide();
		C2Table4PGreen->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void C3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4P->Hide();
		C3Table4PGreen->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void D1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4P->Hide();
		D1Table4PGreen->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void D2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4P->Hide();
		D2Table4PGreen->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void D3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4P->Hide();
		D3Table4PGreen->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void E1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table4P->Hide();
		E1Table4PGreen->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void E2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table4P->Hide();
		E2Table4PGreen->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void E3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table4P->Hide();
		E3Table4PGreen->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void E4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		E4Table4P->Hide();
		E4Table4PGreen->Show();
		dataTable[19] = !dataTable[19];
}
//
//Green
//
	private: System::Void A1Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table1PGreen->Hide();
		A1Table1P->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {\
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
	private: System::Void B1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table4PGreen->Hide();
		B1Table4P->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void B3Table6PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table6PGreen->Hide();
		B3Table6P->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
		dataTable[7] = !dataTable[7];
}
	private: System::Void B5Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B5Table4PGreen->Hide();
		B5Table4P->Show();
		dataTable[8] = !dataTable[8];
}
	private: System::Void B6Table6PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B6Table6PGreen->Hide();
		B6Table6P->Show();
		dataTable[9] = !dataTable[9];
}
	private: System::Void C1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table4PGreen->Hide();
		C1Table4P->Show();
		dataTable[10] = !dataTable[10];
}
	private: System::Void C2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table4PGreen->Hide();
		C2Table4P->Show();
		dataTable[11] = !dataTable[11];
}
	private: System::Void C3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table4PGreen->Hide();
		C3Table4P->Show();
		dataTable[12] = !dataTable[12];
}
	private: System::Void D1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4PGreen->Hide();
		D1Table4P->Show();
		dataTable[13] = !dataTable[13];
}
	private: System::Void D2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4PGreen->Hide();
		D2Table4P->Show();
		dataTable[14] = !dataTable[14];
}
	private: System::Void D3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4PGreen->Hide();
		D3Table4P->Show();
		dataTable[15] = !dataTable[15];
}
	private: System::Void E1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table4PGreen->Hide();
		E1Table4P->Show();
		dataTable[16] = !dataTable[16];
}
	private: System::Void E2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table4PGreen->Hide();
		E2Table4P->Show();
		dataTable[17] = !dataTable[17];
}
	private: System::Void E3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table4PGreen->Hide();
		E3Table4P->Show();
		dataTable[18] = !dataTable[18];
}
	private: System::Void E4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E4Table4PGreen->Hide();
		E4Table4P->Show();
		dataTable[19] = !dataTable[19];
}

public: bool switchToMP = false;

private: System::Void ConfirmTableBarMapraw_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;

	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";

	string path, line;
	MarshalString(temp, path);

	ifstream fileIn(path);
	vector<string> lines;

	while (getline(fileIn, line)) {
		lines.push_back(line);
	}
	fileIn.close();

	for (int i = 0; i < 29; i++) {
		if (dataTable[i]) {
			a[i] = '1';
		}
	}
	
	String^ a2 = a->ToString();
	string newData;
	MarshalString(a2, newData);
	switchToMP = true;
	int targetline = 2;
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
private: System::Void BarGong_Load(System::Object^ sender, System::EventArgs^ e) {
}
public: bool switchToToey = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToToey = true;
	this->Close();
}
};
}
