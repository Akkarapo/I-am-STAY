#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "User.h"
#using <mscorlib.dll>

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
	/// Summary for BarToey
	/// </summary>
	public ref class BarToey : public System::Windows::Forms::Form
	{
	StringBuilder^ a = gcnew StringBuilder("00000000000000000000000000000");
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
		String^ tempUser = nullptr;//==============mpzone==============
		String^ username = nullptr;
	private: System::Windows::Forms::PictureBox^ ConfirmTableBarMapraw;
	public:
		int tableSelect = 0;
		int targetline = 4;
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ exitpnl;
	private: System::Windows::Forms::PictureBox^ noExit;
	private: System::Windows::Forms::PictureBox^ yesExit;
	private: System::Windows::Forms::Label^ Table;
		   array<bool>^ dataTable;
	
	public:
		BarToey(User^ user)
		{
			InitializeComponent();
			tempUser = Application::StartupPath + "\\Data\\UserData\\" + user->username + ".txt";//==============mpzone==============
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
			exitpnl->Hide();
			username = user->username;
			panel1->Hide();
			UpdateTable();
			
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
	private: System::Windows::Forms::PictureBox^ A8Table1PRed;
	private: System::Windows::Forms::PictureBox^ A7Table1PRed;
	private: System::Windows::Forms::PictureBox^ A6Table1PRed;
	private: System::Windows::Forms::PictureBox^ A5Table1PRed;
	private: System::Windows::Forms::PictureBox^ A4Table1PRed;
	private: System::Windows::Forms::PictureBox^ A3Table1PRed;
	private: System::Windows::Forms::PictureBox^ A2Table1PRed;
	private: System::Windows::Forms::PictureBox^ A1Table1PRed;
	private: System::Windows::Forms::PictureBox^ B1Table4PRed;
	private: System::Windows::Forms::PictureBox^ C2Table4PRed;

	private: System::Windows::Forms::PictureBox^ C1Table4PRed;

	private: System::Windows::Forms::PictureBox^ B7Table4PRed;

	private: System::Windows::Forms::PictureBox^ B6Table4PRed;

private: System::Windows::Forms::PictureBox^ B5Table4PRed;

private: System::Windows::Forms::PictureBox^ B4Table4PRed;

private: System::Windows::Forms::PictureBox^ B3Table4PRed;

private: System::Windows::Forms::PictureBox^ B2Table4PRed;
private: System::Windows::Forms::PictureBox^ C7Table4PRed;
private: System::Windows::Forms::PictureBox^ C6Table4PRed;
private: System::Windows::Forms::PictureBox^ C5Table4PRed;
private: System::Windows::Forms::PictureBox^ C4Table4PRed;
private: System::Windows::Forms::PictureBox^ C3Table4PRed;










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
			this->A8Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A7Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A6Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A5Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B7Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C7Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C6Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C5Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->ConfirmTableBarMapraw = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->exitpnl = (gcnew System::Windows::Forms::Panel());
			this->noExit = (gcnew System::Windows::Forms::PictureBox());
			this->yesExit = (gcnew System::Windows::Forms::PictureBox());
			this->Table = (gcnew System::Windows::Forms::Label());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->exitpnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noExit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yesExit))->BeginInit();
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
			// A8Table1PRed
			// 
			this->A8Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A8Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A8Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table1PRed.Image")));
			this->A8Table1PRed->Location = System::Drawing::Point(961, 413);
			this->A8Table1PRed->Name = L"A8Table1PRed";
			this->A8Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A8Table1PRed->TabIndex = 153;
			this->A8Table1PRed->TabStop = false;
			this->A8Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A8Table1PRed_Click);
			// 
			// A7Table1PRed
			// 
			this->A7Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A7Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A7Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table1PRed.Image")));
			this->A7Table1PRed->Location = System::Drawing::Point(913, 413);
			this->A7Table1PRed->Name = L"A7Table1PRed";
			this->A7Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A7Table1PRed->TabIndex = 154;
			this->A7Table1PRed->TabStop = false;
			this->A7Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A7Table1PRed_Click);
			// 
			// A6Table1PRed
			// 
			this->A6Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A6Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A6Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table1PRed.Image")));
			this->A6Table1PRed->Location = System::Drawing::Point(865, 413);
			this->A6Table1PRed->Name = L"A6Table1PRed";
			this->A6Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A6Table1PRed->TabIndex = 155;
			this->A6Table1PRed->TabStop = false;
			this->A6Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A6Table1PRed_Click);
			// 
			// A5Table1PRed
			// 
			this->A5Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A5Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table1PRed.Image")));
			this->A5Table1PRed->Location = System::Drawing::Point(817, 413);
			this->A5Table1PRed->Name = L"A5Table1PRed";
			this->A5Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A5Table1PRed->TabIndex = 156;
			this->A5Table1PRed->TabStop = false;
			this->A5Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A5Table1PRed_Click);
			// 
			// A4Table1PRed
			// 
			this->A4Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PRed.Image")));
			this->A4Table1PRed->Location = System::Drawing::Point(769, 413);
			this->A4Table1PRed->Name = L"A4Table1PRed";
			this->A4Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A4Table1PRed->TabIndex = 157;
			this->A4Table1PRed->TabStop = false;
			this->A4Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A4Table1PRed_Click);
			// 
			// A3Table1PRed
			// 
			this->A3Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PRed.Image")));
			this->A3Table1PRed->Location = System::Drawing::Point(721, 413);
			this->A3Table1PRed->Name = L"A3Table1PRed";
			this->A3Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A3Table1PRed->TabIndex = 158;
			this->A3Table1PRed->TabStop = false;
			this->A3Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A3Table1PRed_Click);
			// 
			// A2Table1PRed
			// 
			this->A2Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PRed.Image")));
			this->A2Table1PRed->Location = System::Drawing::Point(673, 413);
			this->A2Table1PRed->Name = L"A2Table1PRed";
			this->A2Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A2Table1PRed->TabIndex = 159;
			this->A2Table1PRed->TabStop = false;
			this->A2Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A2Table1PRed_Click);
			// 
			// A1Table1PRed
			// 
			this->A1Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PRed.Image")));
			this->A1Table1PRed->Location = System::Drawing::Point(626, 413);
			this->A1Table1PRed->Name = L"A1Table1PRed";
			this->A1Table1PRed->Size = System::Drawing::Size(28, 20);
			this->A1Table1PRed->TabIndex = 160;
			this->A1Table1PRed->TabStop = false;
			this->A1Table1PRed->Click += gcnew System::EventHandler(this, &BarToey::A1Table1PRed_Click);
			// 
			// B1Table4PRed
			// 
			this->B1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PRed.Image")));
			this->B1Table4PRed->Location = System::Drawing::Point(412, 492);
			this->B1Table4PRed->Name = L"B1Table4PRed";
			this->B1Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B1Table4PRed->TabIndex = 161;
			this->B1Table4PRed->TabStop = false;
			this->B1Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B1Table4PRed_Click);
			// 
			// C2Table4PRed
			// 
			this->C2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PRed.Image")));
			this->C2Table4PRed->Location = System::Drawing::Point(514, 580);
			this->C2Table4PRed->Name = L"C2Table4PRed";
			this->C2Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C2Table4PRed->TabIndex = 162;
			this->C2Table4PRed->TabStop = false;
			this->C2Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C2Table4PRed_Click);
			// 
			// C1Table4PRed
			// 
			this->C1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PRed.Image")));
			this->C1Table4PRed->Location = System::Drawing::Point(412, 580);
			this->C1Table4PRed->Name = L"C1Table4PRed";
			this->C1Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C1Table4PRed->TabIndex = 163;
			this->C1Table4PRed->TabStop = false;
			this->C1Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C1Table4PRed_Click);
			// 
			// B7Table4PRed
			// 
			this->B7Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B7Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B7Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B7Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B7Table4PRed.Image")));
			this->B7Table4PRed->Location = System::Drawing::Point(1024, 492);
			this->B7Table4PRed->Name = L"B7Table4PRed";
			this->B7Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B7Table4PRed->TabIndex = 164;
			this->B7Table4PRed->TabStop = false;
			this->B7Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B7Table4PRed_Click);
			// 
			// B6Table4PRed
			// 
			this->B6Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B6Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table4PRed.Image")));
			this->B6Table4PRed->Location = System::Drawing::Point(922, 492);
			this->B6Table4PRed->Name = L"B6Table4PRed";
			this->B6Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B6Table4PRed->TabIndex = 165;
			this->B6Table4PRed->TabStop = false;
			this->B6Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B6Table4PRed_Click);
			// 
			// B5Table4PRed
			// 
			this->B5Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PRed.Image")));
			this->B5Table4PRed->Location = System::Drawing::Point(820, 492);
			this->B5Table4PRed->Name = L"B5Table4PRed";
			this->B5Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B5Table4PRed->TabIndex = 166;
			this->B5Table4PRed->TabStop = false;
			this->B5Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B5Table4PRed_Click);
			// 
			// B4Table4PRed
			// 
			this->B4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PRed.Image")));
			this->B4Table4PRed->Location = System::Drawing::Point(718, 492);
			this->B4Table4PRed->Name = L"B4Table4PRed";
			this->B4Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B4Table4PRed->TabIndex = 167;
			this->B4Table4PRed->TabStop = false;
			this->B4Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B4Table4PRed_Click);
			// 
			// B3Table4PRed
			// 
			this->B3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PRed.Image")));
			this->B3Table4PRed->Location = System::Drawing::Point(616, 492);
			this->B3Table4PRed->Name = L"B3Table4PRed";
			this->B3Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B3Table4PRed->TabIndex = 168;
			this->B3Table4PRed->TabStop = false;
			this->B3Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B3Table4PRed_Click);
			// 
			// B2Table4PRed
			// 
			this->B2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PRed.Image")));
			this->B2Table4PRed->Location = System::Drawing::Point(514, 492);
			this->B2Table4PRed->Name = L"B2Table4PRed";
			this->B2Table4PRed->Size = System::Drawing::Size(80, 67);
			this->B2Table4PRed->TabIndex = 169;
			this->B2Table4PRed->TabStop = false;
			this->B2Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::B2Table4PRed_Click);
			// 
			// C7Table4PRed
			// 
			this->C7Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C7Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C7Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C7Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C7Table4PRed.Image")));
			this->C7Table4PRed->Location = System::Drawing::Point(1024, 580);
			this->C7Table4PRed->Name = L"C7Table4PRed";
			this->C7Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C7Table4PRed->TabIndex = 170;
			this->C7Table4PRed->TabStop = false;
			this->C7Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C7Table4PRed_Click);
			// 
			// C6Table4PRed
			// 
			this->C6Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C6Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C6Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C6Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C6Table4PRed.Image")));
			this->C6Table4PRed->Location = System::Drawing::Point(922, 580);
			this->C6Table4PRed->Name = L"C6Table4PRed";
			this->C6Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C6Table4PRed->TabIndex = 171;
			this->C6Table4PRed->TabStop = false;
			this->C6Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C6Table4PRed_Click);
			// 
			// C5Table4PRed
			// 
			this->C5Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C5Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C5Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C5Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C5Table4PRed.Image")));
			this->C5Table4PRed->Location = System::Drawing::Point(820, 580);
			this->C5Table4PRed->Name = L"C5Table4PRed";
			this->C5Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C5Table4PRed->TabIndex = 172;
			this->C5Table4PRed->TabStop = false;
			this->C5Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C5Table4PRed_Click);
			// 
			// C4Table4PRed
			// 
			this->C4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C4Table4PRed.Image")));
			this->C4Table4PRed->Location = System::Drawing::Point(717, 580);
			this->C4Table4PRed->Name = L"C4Table4PRed";
			this->C4Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C4Table4PRed->TabIndex = 173;
			this->C4Table4PRed->TabStop = false;
			this->C4Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C4Table4PRed_Click);
			// 
			// C3Table4PRed
			// 
			this->C3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PRed.Image")));
			this->C3Table4PRed->Location = System::Drawing::Point(616, 580);
			this->C3Table4PRed->Name = L"C3Table4PRed";
			this->C3Table4PRed->Size = System::Drawing::Size(80, 67);
			this->C3Table4PRed->TabIndex = 174;
			this->C3Table4PRed->TabStop = false;
			this->C3Table4PRed->Click += gcnew System::EventHandler(this, &BarToey::C3Table4PRed_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(22, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 21);
			this->pictureBox1->TabIndex = 175;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BarToey::pictureBox1_Click);
			// 
			// ConfirmTableBarMapraw
			// 
			this->ConfirmTableBarMapraw->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableBarMapraw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableBarMapraw.BackgroundImage")));
			this->ConfirmTableBarMapraw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableBarMapraw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableBarMapraw->Location = System::Drawing::Point(36, 607);
			this->ConfirmTableBarMapraw->Name = L"ConfirmTableBarMapraw";
			this->ConfirmTableBarMapraw->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableBarMapraw->TabIndex = 176;
			this->ConfirmTableBarMapraw->TabStop = false;
			this->ConfirmTableBarMapraw->Click += gcnew System::EventHandler(this, &BarToey::ConfirmTableBarMapraw_Click);
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
			this->panel1->TabIndex = 177;
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
			this->pictureBox3->Click += gcnew System::EventHandler(this, &BarToey::pictureBox3_Click);
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
			this->pictureBox2->Click += gcnew System::EventHandler(this, &BarToey::pictureBox2_Click);
			// 
			// exitpnl
			// 
			this->exitpnl->BackColor = System::Drawing::Color::Transparent;
			this->exitpnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitpnl.BackgroundImage")));
			this->exitpnl->Controls->Add(this->noExit);
			this->exitpnl->Controls->Add(this->yesExit);
			this->exitpnl->Location = System::Drawing::Point(437, 237);
			this->exitpnl->Name = L"exitpnl";
			this->exitpnl->Size = System::Drawing::Size(407, 247);
			this->exitpnl->TabIndex = 178;
			// 
			// noExit
			// 
			this->noExit->BackColor = System::Drawing::Color::Transparent;
			this->noExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"noExit.BackgroundImage")));
			this->noExit->Location = System::Drawing::Point(242, 172);
			this->noExit->Name = L"noExit";
			this->noExit->Size = System::Drawing::Size(133, 56);
			this->noExit->TabIndex = 1;
			this->noExit->TabStop = false;
			this->noExit->Click += gcnew System::EventHandler(this, &BarToey::noExit_Click);
			// 
			// yesExit
			// 
			this->yesExit->BackColor = System::Drawing::Color::Transparent;
			this->yesExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"yesExit.BackgroundImage")));
			this->yesExit->Location = System::Drawing::Point(32, 173);
			this->yesExit->Name = L"yesExit";
			this->yesExit->Size = System::Drawing::Size(133, 56);
			this->yesExit->TabIndex = 0;
			this->yesExit->TabStop = false;
			this->yesExit->Click += gcnew System::EventHandler(this, &BarToey::yesExit_Click);
			// 
			// Table
			// 
			this->Table->BackColor = System::Drawing::Color::Transparent;
			this->Table->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table->ForeColor = System::Drawing::Color::White;
			this->Table->Location = System::Drawing::Point(88, 492);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(144, 40);
			this->Table->TabIndex = 179;
			this->Table->Text = L"XX/29";
			// 
			// BarToey
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->Table);
			this->Controls->Add(this->exitpnl);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->A3Table1PRed);
			this->Controls->Add(this->A4Table1PRed);
			this->Controls->Add(this->A5Table1PRed);
			this->Controls->Add(this->A6Table1PRed);
			this->Controls->Add(this->A7Table1PRed);
			this->Controls->Add(this->A8Table1PRed);
			this->Controls->Add(this->A3Table1PGreen);
			this->Controls->Add(this->A3Table1P);
			this->Controls->Add(this->A2Table1PRed);
			this->Controls->Add(this->A1Table1PRed);
			this->Controls->Add(this->ConfirmTableBarMapraw);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->C3Table4PRed);
			this->Controls->Add(this->C4Table4PRed);
			this->Controls->Add(this->C5Table4PRed);
			this->Controls->Add(this->C6Table4PRed);
			this->Controls->Add(this->C7Table4PRed);
			this->Controls->Add(this->B2Table4PRed);
			this->Controls->Add(this->B3Table4PRed);
			this->Controls->Add(this->B4Table4PRed);
			this->Controls->Add(this->B5Table4PRed);
			this->Controls->Add(this->B6Table4PRed);
			this->Controls->Add(this->B7Table4PRed);
			this->Controls->Add(this->C1Table4PRed);
			this->Controls->Add(this->C2Table4PRed);
			this->Controls->Add(this->B1Table4PRed);
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
			this->Controls->Add(this->A2Table1P);
			this->Controls->Add(this->A1Table1P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BarToey";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BarToey";
			this->Load += gcnew System::EventHandler(this, &BarToey::BarToey_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &BarToey::BarToey_KeyDown);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A8Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A7Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A6Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A5Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B7Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C7Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C6Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C5Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->exitpnl->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->noExit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->yesExit))->EndInit();
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

			A1Table1PRed->Hide();
			A2Table1PRed->Hide();
			A3Table1PRed->Hide();
			A4Table1PRed->Hide();
			A5Table1PRed->Hide();
			A6Table1PRed->Hide();
			A7Table1PRed->Hide();
			A8Table1PRed->Hide();
			B1Table4PRed->Hide();
			B2Table4PRed->Hide();
			B3Table4PRed->Hide();
			B4Table4PRed->Hide();
			B5Table4PRed->Hide();
			B6Table4PRed->Hide();
			B7Table4PRed->Hide();
			C1Table4PRed->Hide();
			C2Table4PRed->Hide();
			C3Table4PRed->Hide();
			C4Table4PRed->Hide();
			C5Table4PRed->Hide();
			C6Table4PRed->Hide();
			C7Table4PRed->Hide();
			

			using namespace std;
			int BarNo = 4;

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
				A1Table1PRed->Show();
				A1Table1P->Hide();
			}
			else {
				A1Table1P->Show();
			}

			if (line[1] == '1') {
				a[1] = '1';
				A2Table1PRed->Show();
				A2Table1P->Hide();
			}
			else {
				A2Table1P->Show();
			}

			if (line[2] == '1') {
				a[2] = '1';
				A3Table1PRed->Show();
				A3Table1P->Hide();
			}
			else {
				A3Table1P->Show();
			}

			if (line[3] == '1') {
				a[3] = '1';
				A4Table1PRed->Show();
				A4Table1P->Hide();
			}
			else {
				A4Table1P->Show();
			}

			if (line[4] == '1') {
				a[4] = '1';
				A5Table1PRed->Show();
				A5Table1P->Hide();
			}
			else {
				A5Table1P->Show();
			}

			if (line[5] == '1') {
				a[5] = '1';
				A6Table1PRed->Show();
				A6Table1P->Hide();
			}
			else {
				A6Table1P->Show();
			}

			if (line[6] == '1') {
				a[6] = '1';
				A7Table1PRed->Show();
				A7Table1P->Hide();
			}
			else {
				A7Table1P->Show();
			}

			if (line[7] == '1') {
				a[7] = '1';
				A8Table1PRed->Show();
				A8Table1P->Hide();
			}
			else {
				A8Table1P->Show();
			}

			if (line[8] == '1') {
				a[8] = '1';
				B1Table4PRed->Show();
				B1Table4P->Hide();
			}
			else {
				B1Table4P->Show();
			}

			if (line[9] == '1') {
				a[9] = '1';
				B2Table4PRed->Show();
				B2Table4P->Hide();
			}
			else {
				B2Table4P->Show();
			}

			if (line[10] == '1') {
				a[10] = '1';
				B3Table4PRed->Show();
				B3Table4P->Hide();
			}
			else {
				B3Table4P->Show();
			}

			if (line[11] == '1') {
				a[11] = '1';
				B4Table4PRed->Show();
				B4Table4P->Hide();
			}
			else {
				B4Table4P->Show();
			}

			if (line[12] == '1') {
				a[12] = '1';
				B5Table4PRed->Show();
				B5Table4P->Hide();
			}
			else {
				B5Table4P->Show();
			}

			if (line[13] == '1') {
				a[13] = '1';
				B6Table4PRed->Show();
				B6Table4P->Hide();
			}
			else {
				B6Table4P->Show();
			}

			if (line[14] == '1') {
				a[14] = '1';
				B7Table4PRed->Show();
				B7Table4P->Hide();
			}
			else {
				B7Table4P->Show();
			}

			if (line[15] == '1') {
				a[15] = '1';
				C1Table4PRed->Show();
				C1Table4P->Hide();
			}
			else {
				C1Table4P->Show();
			}

			if (line[16] == '1') {
				a[16] = '1';
				C2Table4PRed->Show();
				C2Table4P->Hide();
			}
			else {
				C2Table4P->Show();
			}

			if (line[17] == '1') {
				a[17] = '1';
				C3Table4PRed->Show();
				C3Table4P->Hide();
			}
			else {
				C3Table4P->Show();
			}

			if (line[18] == '1') {
				a[18] = '1';
				C4Table4PRed->Show();
				C4Table4P->Hide();
			}
			else {
				C4Table4P->Show();
			}

			if (line[19] == '1') {
				a[19] = '1';
				C5Table4PRed->Show();
				C5Table4P->Hide();
			}
			else {
				C5Table4P->Show();
			}

			if (line[20] == '1') {
				a[20] = '1';
				C6Table4PRed->Show();
				C6Table4P->Hide();
			}
			else {
				C6Table4P->Show();
			}
			
			if (line[21] == '1') {
				a[21] = '1';
				C7Table4PRed->Show();
				C7Table4P->Hide();
			}
			else {
				C7Table4P->Show();
			}
			//label1->Text = gcnew String(line.c_str());
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

	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";

	string path, line;
	MarshalString(temp, path);

	ifstream fileIn(path);
	vector<string> lines;

	while (getline(fileIn, line)) {
		lines.push_back(line);
	}
	fileIn.close();

	for (int i = 0; i < 20; i++) {
		if (dataTable[i]) {
			a[i] = '1';
		}
	}

	String^ a2 = a->ToString();
	string newData;
	MarshalString(a2, newData);
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
	fileOutUser << "BarName: " << "Toey ";
	for (int i = 0; i < dataTable->Length; i++)
	{
		if (dataTable[i]) //fileOutUser << to_string(i) << " ";
		{
			switch (i)
			{
			case 0: fileOutUser << "A1Table2P" << " "; break;
			case 1: fileOutUser << "A2Table2P" << " "; break;
			case 2: fileOutUser << "A3Table2P" << " "; break;
			case 3: fileOutUser << "A4Table2P" << " "; break;
			case 4: fileOutUser << "A5Table2P" << " "; break;
			case 5: fileOutUser << "A6Table1P" << " "; break;
			case 6: fileOutUser << "A7Table1P" << " "; break;
			case 7: fileOutUser << "A8Table1P" << " "; break;
			case 8: fileOutUser << "B1Table4P" << " "; break;
			case 9: fileOutUser << "B2Table4P" << " "; break;
			case 10: fileOutUser << "B3Table4P" << " "; break;
			case 11: fileOutUser << "B4Table4P" << " "; break;
			case 12: fileOutUser << "B5Table4P" << " "; break;
			case 13: fileOutUser << "B6Table4P" << " "; break;
			case 14: fileOutUser << "B7Table4P" << " "; break;
			case 15: fileOutUser << "C1Table4P" << " "; break;
			case 16: fileOutUser << "C2Table4P" << " "; break;
			case 17: fileOutUser << "C3Table4P" << " "; break;
			case 18: fileOutUser << "C4Table4P" << " "; break;
			case 19: fileOutUser << "C5Table4P" << " "; break;
			case 20: fileOutUser << "C6Table4P" << " "; break;
			case 21: fileOutUser << "C7Table4P" << " "; break;
			default:
				break;
			}
		}

	}
	fileOutUser << "/Date: " << datec << " Time: " << timec << " complete" << endl;
	fileOutUser.close();
	//==============mpzone==============
	UpdateTable();
	this->Close();
}
public: bool switchToToey = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToToey = true;
	this->Close();
}
private: System::Void BarToey_Load(System::Object^ sender, System::EventArgs^ e) {
	dataTable = gcnew array<bool>(29);
	using namespace std;
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
	string path, line;
	int count = 0;
	MarshalString(temp, path);
	std::ifstream fileIn(path);
	for (int i = 0; i < targetline; i++)
	{
		getline(fileIn, line);
	}
	count = 0;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == '1') count++;
	}
	Table->Text = count.ToString() + "/" + line.size();
}

private: System::Void A1Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 0;
	}
}
private: System::Void A2Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 1;
	}
}
private: System::Void A3Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 2;
	}
}
private: System::Void A4Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 3;
	}
}
private: System::Void A5Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 4;
	}
}
private: System::Void A6Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 5;
	}
}
private: System::Void A7Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 6;
	}
}
private: System::Void A8Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 7;
	}
}
private: System::Void B1Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 8;
	}
}
private: System::Void B2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 9;
	}
}
private: System::Void B3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 10;
	}
}
private: System::Void B4Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 11;
	}
}
private: System::Void B5Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 12;
	}
}
private: System::Void B6Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 13;
	}
}
private: System::Void B7Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 14;
	}
}
private: System::Void C1Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 15;
	}
}
private: System::Void C2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 16;
	}
}
private: System::Void C3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 17;
	}
}
private: System::Void C4Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 18;
	}
}
private: System::Void C5Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 19;
	}
}
private: System::Void C6Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 20;
	}
}
private: System::Void C7Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
	if (username == "admin") {
		panel1->Show();
		tableSelect = 21;
	}
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

	UpdateTable();
	panel1->Hide();
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide();
}
private: System::Void yesExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void noExit_Click(System::Object^ sender, System::EventArgs^ e) {
	exitpnl->Hide();
}
private: System::Void BarToey_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys::Escape) {
		exitpnl->Show();
	}
}
};
}
