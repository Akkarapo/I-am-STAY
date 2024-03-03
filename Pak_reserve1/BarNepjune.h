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
	using namespace System::Globalization;
	/// <summary>
	/// Summary for BarNepjune
	/// </summary>
	public ref class BarNepjune : public System::Windows::Forms::Form
	{
	StringBuilder^ a = gcnew StringBuilder("00000000000000000000000000000");
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		String^ tempUser = nullptr;
		String^ username = nullptr;

		//==============mpzone==============
	private: System::Windows::Forms::PictureBox^ ConfirmTableBarMapraw;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	
	public:
		int tableSelect = 0;
		int targetline = 5;
			array<bool>^ dataTable;
		BarNepjune(User^ user)
		{
			InitializeComponent();
			tempUser = Application::StartupPath + "\\Data\\UserData\\" + user->username + ".txt";//==============mpzone==============
			//
			//TODO: Add the constructor code here
			//
			A1Table4PGreen->Hide();
			A2Table4PGreen->Hide();
			A3Table4PGreen->Hide();
			A4Table4PGreen->Hide();
			A5Table4PGreen->Hide();
			A6Table4PGreen->Hide();
			A7Table4PGreen->Hide();
			A8Table4PGreen->Hide();
			username = user->username;
			panel1->Hide();
			UpdateTable();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarNepjune()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ A1Table4P;
	private: System::Windows::Forms::PictureBox^ A2Table4P;
	private: System::Windows::Forms::PictureBox^ A3Table4P;
	private: System::Windows::Forms::PictureBox^ A4Table4P;
	private: System::Windows::Forms::PictureBox^ A5Table4P;
	private: System::Windows::Forms::PictureBox^ A6Table4P;
	private: System::Windows::Forms::PictureBox^ A7Table4P;
	private: System::Windows::Forms::PictureBox^ A8Table4P;
	private: System::Windows::Forms::PictureBox^ A1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A5Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A6Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A7Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A8Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A1Table4PRed;
	private: System::Windows::Forms::PictureBox^ A8Table4PRed;

	private: System::Windows::Forms::PictureBox^ A7Table4PRed;

	private: System::Windows::Forms::PictureBox^ A6Table4PRed;

	private: System::Windows::Forms::PictureBox^ A5Table4PRed;

	private: System::Windows::Forms::PictureBox^ A4Table4PRed;

	private: System::Windows::Forms::PictureBox^ A3Table4PRed;

	private: System::Windows::Forms::PictureBox^ A2Table4PRed;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarNepjune::typeid));
			this->A1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A8Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A8Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A8Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ConfirmTableBarMapraw = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// A1Table4P
			// 
			this->A1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table4P.BackgroundImage")));
			this->A1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table4P->Location = System::Drawing::Point(515, 353);
			this->A1Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A1Table4P->Name = L"A1Table4P";
			this->A1Table4P->Size = System::Drawing::Size(64, 64);
			this->A1Table4P->TabIndex = 6;
			this->A1Table4P->TabStop = false;
			this->A1Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A1Table4P_Click);
			// 
			// A2Table4P
			// 
			this->A2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table4P.BackgroundImage")));
			this->A2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table4P->Location = System::Drawing::Point(515, 466);
			this->A2Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A2Table4P->Name = L"A2Table4P";
			this->A2Table4P->Size = System::Drawing::Size(64, 64);
			this->A2Table4P->TabIndex = 7;
			this->A2Table4P->TabStop = false;
			this->A2Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A2Table4P_Click);
			// 
			// A3Table4P
			// 
			this->A3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table4P.BackgroundImage")));
			this->A3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table4P->Location = System::Drawing::Point(515, 580);
			this->A3Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A3Table4P->Name = L"A3Table4P";
			this->A3Table4P->Size = System::Drawing::Size(64, 64);
			this->A3Table4P->TabIndex = 8;
			this->A3Table4P->TabStop = false;
			this->A3Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A3Table4P_Click);
			// 
			// A4Table4P
			// 
			this->A4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table4P.BackgroundImage")));
			this->A4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table4P->Location = System::Drawing::Point(628, 580);
			this->A4Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A4Table4P->Name = L"A4Table4P";
			this->A4Table4P->Size = System::Drawing::Size(64, 64);
			this->A4Table4P->TabIndex = 9;
			this->A4Table4P->TabStop = false;
			this->A4Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A4Table4P_Click);
			// 
			// A5Table4P
			// 
			this->A5Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A5Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table4P.BackgroundImage")));
			this->A5Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table4P->Location = System::Drawing::Point(741, 580);
			this->A5Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A5Table4P->Name = L"A5Table4P";
			this->A5Table4P->Size = System::Drawing::Size(64, 64);
			this->A5Table4P->TabIndex = 10;
			this->A5Table4P->TabStop = false;
			this->A5Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A5Table4P_Click);
			// 
			// A6Table4P
			// 
			this->A6Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A6Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table4P.BackgroundImage")));
			this->A6Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A6Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table4P->Location = System::Drawing::Point(853, 580);
			this->A6Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A6Table4P->Name = L"A6Table4P";
			this->A6Table4P->Size = System::Drawing::Size(64, 64);
			this->A6Table4P->TabIndex = 11;
			this->A6Table4P->TabStop = false;
			this->A6Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A6Table4P_Click);
			// 
			// A7Table4P
			// 
			this->A7Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A7Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table4P.BackgroundImage")));
			this->A7Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A7Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table4P->Location = System::Drawing::Point(1017, 466);
			this->A7Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A7Table4P->Name = L"A7Table4P";
			this->A7Table4P->Size = System::Drawing::Size(64, 64);
			this->A7Table4P->TabIndex = 13;
			this->A7Table4P->TabStop = false;
			this->A7Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A7Table4P_Click);
			// 
			// A8Table4P
			// 
			this->A8Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A8Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table4P.BackgroundImage")));
			this->A8Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A8Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table4P->Location = System::Drawing::Point(1017, 353);
			this->A8Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A8Table4P->Name = L"A8Table4P";
			this->A8Table4P->Size = System::Drawing::Size(64, 64);
			this->A8Table4P->TabIndex = 12;
			this->A8Table4P->TabStop = false;
			this->A8Table4P->Click += gcnew System::EventHandler(this, &BarNepjune::A8Table4P_Click);
			// 
			// A1Table4PGreen
			// 
			this->A1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table4PGreen.BackgroundImage")));
			this->A1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table4PGreen->Location = System::Drawing::Point(515, 353);
			this->A1Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A1Table4PGreen->Name = L"A1Table4PGreen";
			this->A1Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A1Table4PGreen->TabIndex = 22;
			this->A1Table4PGreen->TabStop = false;
			this->A1Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A1Table4PGreen_Click);
			// 
			// A2Table4PGreen
			// 
			this->A2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table4PGreen.BackgroundImage")));
			this->A2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table4PGreen->Location = System::Drawing::Point(515, 466);
			this->A2Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A2Table4PGreen->Name = L"A2Table4PGreen";
			this->A2Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A2Table4PGreen->TabIndex = 23;
			this->A2Table4PGreen->TabStop = false;
			this->A2Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A2Table4PGreen_Click);
			// 
			// A3Table4PGreen
			// 
			this->A3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table4PGreen.BackgroundImage")));
			this->A3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table4PGreen->Location = System::Drawing::Point(515, 580);
			this->A3Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A3Table4PGreen->Name = L"A3Table4PGreen";
			this->A3Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A3Table4PGreen->TabIndex = 24;
			this->A3Table4PGreen->TabStop = false;
			this->A3Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A3Table4PGreen_Click);
			// 
			// A4Table4PGreen
			// 
			this->A4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table4PGreen.BackgroundImage")));
			this->A4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table4PGreen->Location = System::Drawing::Point(628, 580);
			this->A4Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A4Table4PGreen->Name = L"A4Table4PGreen";
			this->A4Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A4Table4PGreen->TabIndex = 25;
			this->A4Table4PGreen->TabStop = false;
			this->A4Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A4Table4PGreen_Click);
			// 
			// A5Table4PGreen
			// 
			this->A5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table4PGreen.BackgroundImage")));
			this->A5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table4PGreen->Location = System::Drawing::Point(741, 580);
			this->A5Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A5Table4PGreen->Name = L"A5Table4PGreen";
			this->A5Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A5Table4PGreen->TabIndex = 26;
			this->A5Table4PGreen->TabStop = false;
			this->A5Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A5Table4PGreen_Click);
			// 
			// A6Table4PGreen
			// 
			this->A6Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A6Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table4PGreen.BackgroundImage")));
			this->A6Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A6Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table4PGreen->Location = System::Drawing::Point(853, 580);
			this->A6Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A6Table4PGreen->Name = L"A6Table4PGreen";
			this->A6Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A6Table4PGreen->TabIndex = 27;
			this->A6Table4PGreen->TabStop = false;
			this->A6Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A6Table4PGreen_Click);
			// 
			// A7Table4PGreen
			// 
			this->A7Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A7Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table4PGreen.BackgroundImage")));
			this->A7Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A7Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table4PGreen->Location = System::Drawing::Point(1017, 466);
			this->A7Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A7Table4PGreen->Name = L"A7Table4PGreen";
			this->A7Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A7Table4PGreen->TabIndex = 28;
			this->A7Table4PGreen->TabStop = false;
			this->A7Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A7Table4PGreen_Click);
			// 
			// A8Table4PGreen
			// 
			this->A8Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A8Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table4PGreen.BackgroundImage")));
			this->A8Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A8Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table4PGreen->Location = System::Drawing::Point(1017, 353);
			this->A8Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A8Table4PGreen->Name = L"A8Table4PGreen";
			this->A8Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A8Table4PGreen->TabIndex = 29;
			this->A8Table4PGreen->TabStop = false;
			this->A8Table4PGreen->Click += gcnew System::EventHandler(this, &BarNepjune::A8Table4PGreen_Click);
			// 
			// A1Table4PRed
			// 
			this->A1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table4PRed.Image")));
			this->A1Table4PRed->Location = System::Drawing::Point(515, 353);
			this->A1Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A1Table4PRed->Name = L"A1Table4PRed";
			this->A1Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A1Table4PRed->TabIndex = 30;
			this->A1Table4PRed->TabStop = false;
			this->A1Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A1Table4PRed_Click);
			// 
			// A8Table4PRed
			// 
			this->A8Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A8Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A8Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table4PRed.Image")));
			this->A8Table4PRed->Location = System::Drawing::Point(1017, 353);
			this->A8Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A8Table4PRed->Name = L"A8Table4PRed";
			this->A8Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A8Table4PRed->TabIndex = 31;
			this->A8Table4PRed->TabStop = false;
			this->A8Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A8Table4PRed_Click);
			// 
			// A7Table4PRed
			// 
			this->A7Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A7Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A7Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table4PRed.Image")));
			this->A7Table4PRed->Location = System::Drawing::Point(1017, 466);
			this->A7Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A7Table4PRed->Name = L"A7Table4PRed";
			this->A7Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A7Table4PRed->TabIndex = 32;
			this->A7Table4PRed->TabStop = false;
			this->A7Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A7Table4PRed_Click);
			// 
			// A6Table4PRed
			// 
			this->A6Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A6Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A6Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table4PRed.Image")));
			this->A6Table4PRed->Location = System::Drawing::Point(853, 580);
			this->A6Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A6Table4PRed->Name = L"A6Table4PRed";
			this->A6Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A6Table4PRed->TabIndex = 33;
			this->A6Table4PRed->TabStop = false;
			this->A6Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A6Table4PRed_Click);
			// 
			// A5Table4PRed
			// 
			this->A5Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A5Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table4PRed.Image")));
			this->A5Table4PRed->Location = System::Drawing::Point(741, 580);
			this->A5Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A5Table4PRed->Name = L"A5Table4PRed";
			this->A5Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A5Table4PRed->TabIndex = 34;
			this->A5Table4PRed->TabStop = false;
			this->A5Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A5Table4PRed_Click);
			// 
			// A4Table4PRed
			// 
			this->A4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table4PRed.Image")));
			this->A4Table4PRed->Location = System::Drawing::Point(628, 580);
			this->A4Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A4Table4PRed->Name = L"A4Table4PRed";
			this->A4Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A4Table4PRed->TabIndex = 35;
			this->A4Table4PRed->TabStop = false;
			this->A4Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A4Table4PRed_Click);
			// 
			// A3Table4PRed
			// 
			this->A3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table4PRed.Image")));
			this->A3Table4PRed->Location = System::Drawing::Point(515, 580);
			this->A3Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A3Table4PRed->Name = L"A3Table4PRed";
			this->A3Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A3Table4PRed->TabIndex = 36;
			this->A3Table4PRed->TabStop = false;
			this->A3Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A3Table4PRed_Click);
			// 
			// A2Table4PRed
			// 
			this->A2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table4PRed.Image")));
			this->A2Table4PRed->Location = System::Drawing::Point(515, 466);
			this->A2Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->A2Table4PRed->Name = L"A2Table4PRed";
			this->A2Table4PRed->Size = System::Drawing::Size(64, 64);
			this->A2Table4PRed->TabIndex = 37;
			this->A2Table4PRed->TabStop = false;
			this->A2Table4PRed->Click += gcnew System::EventHandler(this, &BarNepjune::A2Table4PRed_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(24, 22);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(71, 26);
			this->pictureBox1->TabIndex = 38;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BarNepjune::pictureBox1_Click);
			// 
			// ConfirmTableBarMapraw
			// 
			this->ConfirmTableBarMapraw->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableBarMapraw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableBarMapraw.BackgroundImage")));
			this->ConfirmTableBarMapraw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableBarMapraw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableBarMapraw->Location = System::Drawing::Point(36, 606);
			this->ConfirmTableBarMapraw->Name = L"ConfirmTableBarMapraw";
			this->ConfirmTableBarMapraw->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableBarMapraw->TabIndex = 39;
			this->ConfirmTableBarMapraw->TabStop = false;
			this->ConfirmTableBarMapraw->Click += gcnew System::EventHandler(this, &BarNepjune::ConfirmTableBarMapraw_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Location = System::Drawing::Point(437, 237);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 247);
			this->panel1->TabIndex = 96;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(242, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 56);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &BarNepjune::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(32, 173);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 56);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &BarNepjune::pictureBox2_Click);
			// 
			// BarNepjune
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ConfirmTableBarMapraw);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->A2Table4PRed);
			this->Controls->Add(this->A3Table4PRed);
			this->Controls->Add(this->A4Table4PRed);
			this->Controls->Add(this->A5Table4PRed);
			this->Controls->Add(this->A6Table4PRed);
			this->Controls->Add(this->A7Table4PRed);
			this->Controls->Add(this->A8Table4PRed);
			this->Controls->Add(this->A1Table4PRed);
			this->Controls->Add(this->A8Table4PGreen);
			this->Controls->Add(this->A7Table4PGreen);
			this->Controls->Add(this->A6Table4PGreen);
			this->Controls->Add(this->A5Table4PGreen);
			this->Controls->Add(this->A4Table4PGreen);
			this->Controls->Add(this->A3Table4PGreen);
			this->Controls->Add(this->A2Table4PGreen);
			this->Controls->Add(this->A1Table4PGreen);
			this->Controls->Add(this->A7Table4P);
			this->Controls->Add(this->A8Table4P);
			this->Controls->Add(this->A6Table4P);
			this->Controls->Add(this->A5Table4P);
			this->Controls->Add(this->A4Table4P);
			this->Controls->Add(this->A3Table4P);
			this->Controls->Add(this->A2Table4P);
			this->Controls->Add(this->A1Table4P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"BarNepjune";
			this->Text = L"BarNepjune";
			this->Load += gcnew System::EventHandler(this, &BarNepjune::BarNepjune_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
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
	void UpdateTable() {

		A1Table4PRed->Hide();
		A2Table4PRed->Hide();
		A3Table4PRed->Hide();
		A4Table4PRed->Hide();
		A5Table4PRed->Hide();
		A6Table4PRed->Hide();
		A7Table4PRed->Hide();
		A8Table4PRed->Hide();


		using namespace std;
		int BarNo = 5;

		String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
		string path, line;
		MarshalString(temp, path);
		ifstream fileIn(path);
		if (!fileIn.is_open()) {
			MessageBox::Show("Can't open file Location", "Error", MessageBoxButtons::OK);
			return;
		}
		for (int i = 0; i < BarNo; i++) {
			getline(fileIn, line);
		}
		if (line[0] == '1') {
			a[0] = '1';
			A1Table4PRed->Show();
			A1Table4P->Hide();
		}
		else {
			A1Table4P->Show();
		}

		if (line[1] == '1') {
			a[1] = '1';
			A2Table4PRed->Show();
			A2Table4P->Hide();
		}
		else {
			A2Table4P->Show();
		}

		if (line[2] == '1') {
			a[2] = '1';
			A3Table4PRed->Show();
			A3Table4P->Hide();
		}
		else {
			A3Table4P->Show();
		}

		if (line[3] == '1') {
			a[3] = '1';
			A4Table4PRed->Show();
			A4Table4P->Hide();
		}
		else {
			A4Table4P->Show();
		}

		if (line[4] == '1') {
			a[4] = '1';
			A5Table4PRed->Show();
			A5Table4P->Hide();
		}
		else {
			A5Table4P->Show();
		}

		if (line[5] == '1') {
			a[5] = '1';
			A6Table4PRed->Show();
			A6Table4P->Hide();
		}
		else {
			A6Table4P->Show();
		}

		if (line[6] == '1') {
			a[6] = '1';
			A7Table4PRed->Show();
			A7Table4P->Hide();
		}
		else {
			A7Table4P->Show();
		}

		if (line[7] == '1') {
			a[7] = '1';
			A8Table4PRed->Show();
			A8Table4P->Hide();
		}
		else {
			A8Table4P->Show();
		}
	}

#pragma endregion
	private: System::Void BarMapraw_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTable = gcnew array<bool>(8);
	}
	private: System::Void A1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table4P->Hide();
		A1Table4PGreen->Show();
		dataTable[0] = !dataTable[0];
	}
	private: System::Void A2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table4P->Hide();
		A2Table4PGreen->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table4P->Hide();
		A3Table4PGreen->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table4P->Hide();
		A4Table4PGreen->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table4P->Hide();
		A5Table4PGreen->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void A6Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A6Table4P->Hide();
		A6Table4PGreen->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void A7Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A7Table4P->Hide();
		A7Table4PGreen->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void A8Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		A8Table4P->Hide();
		A8Table4PGreen->Show();
		dataTable[7] = !dataTable[7];
}
//
//Green
//
	private: System::Void A1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table4PGreen->Hide();
		A1Table4P->Show();
		dataTable[0] = !dataTable[0];
}
	private: System::Void A2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table4PGreen->Hide();
		A2Table4P->Show();
		dataTable[1] = !dataTable[1];
}
	private: System::Void A3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table4PGreen->Hide();
		A3Table4P->Show();
		dataTable[2] = !dataTable[2];
}
	private: System::Void A4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A4Table4PGreen->Hide();
		A4Table4P->Show();
		dataTable[3] = !dataTable[3];
}
	private: System::Void A5Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A5Table4PGreen->Hide();
		A5Table4P->Show();
		dataTable[4] = !dataTable[4];
}
	private: System::Void A6Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A6Table4PGreen->Hide();
		A6Table4P->Show();
		dataTable[5] = !dataTable[5];
}
	private: System::Void A7Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A7Table4PGreen->Hide();
		A7Table4P->Show();
		dataTable[6] = !dataTable[6];
}
	private: System::Void A8Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A8Table4PGreen->Hide();
		A8Table4P->Show();
		dataTable[7] = !dataTable[7];

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

	for (int i = 0; i < 8; i++) {
		if (dataTable[i]) {
			a[i] = '1';
		}
	}

	String^ a2 = a->ToString();
	string newData;
	MarshalString(a2, newData);
	switchToMP = true;
	int targetline = 5;
	if (lines.size() >= targetline) {
		lines[targetline - 1] = newData;
	}

	ofstream fileOut(path);
	int i = 0;

	for (const auto& modifiedLine : lines) {
		fileOut << modifiedLine << endl;
	}


	fileOut.close();
	//==============mpzone==============
	CultureInfo^ culture = gcnew CultureInfo("en-US");
	String^ time = DateTime::Now.ToString("hh:mm tt");
	String^ date = DateTime::Now.ToString("dd MMMM yyyy", culture);
	using namespace std;
	string pathUser, datec, timec;
	MarshalString(tempUser, pathUser);
	MarshalString(time, timec);
	MarshalString(date, datec);
	ofstream fileOutUser(pathUser, ios::app);
	fileOutUser << "BarName: " << "MaewNoi ";
	for (int i = 0; i < dataTable->Length; i++)
	{
		if (dataTable[i]) //fileOutUser << to_string(i) << " ";
		{
			switch (i)
			{
			case 0: fileOutUser << "A1Table2P" << " "; break;
			case 1: fileOutUser << "A2Table2P" << " "; break;
			case 2: fileOutUser << "A3Table2P" << " "; break;
			case 3: fileOutUser << "A4Table4P" << " "; break;
			case 4: fileOutUser << "A5Table4P" << " "; break;
			case 5: fileOutUser << "A6Table4P" << " "; break;
			case 6: fileOutUser << "A7Table4P" << " "; break;
			case 7: fileOutUser << "A8Table4P" << " "; break;
			default:
				break;
			}
		}

	}
	fileOutUser << "/Date: " << datec << " Time: " << timec << " complete" << endl;
	fileOutUser.close();
	//==============mpzone==============
	this->Close();
}
private: System::Void A1Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 0;
	}
}
private: System::Void A2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 1;
	}
}
private: System::Void A3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 2;
	}
}private: System::Void A4Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 3;
	}
}
private: System::Void A5Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 4;
	}
}
private: System::Void A6Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 5;
	}
}
private: System::Void A7Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 6;
	}
}
private: System::Void A8Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 7;
	}
}

public: bool switchToToey = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToToey = true;
	this->Close();
}
private: System::Void BarNepjune_Load(System::Object^ sender, System::EventArgs^ e) {
	dataTable = gcnew array<bool>(29);
}

private: System::Void ConfirmTableBarMapraw_Click_1(System::Object^ sender, System::EventArgs^ e) {
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

	for (int i = 0; i < 16; i++) {
		if (dataTable[i]) {
			a[i] = '1';
		}
	}

	String^ a2 = a->ToString();
	string newData;
	MarshalString(a2, newData);
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
	UpdateTable();
	switchToMP = true;
	this->Close();
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	a[tableSelect] = '0';
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
		//a[i] = (dataTable[i] ? '1' : '0');
		if (dataTable[i]) {
			a[i] = '1';
		}
	}
	String^ a2 = a->ToString();
	string newData;
	MarshalString(a2, newData);
	if (lines.size() >= targetline) {
		lines[targetline - 1] = newData;
	}

	ofstream fileOut(path);
	int i = 0;

	for (const auto& modifiedLine : lines) {
		fileOut << modifiedLine << endl;
	}
	fileOut.close();

	UpdateTable();
	panel1->Hide();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}
};
}
