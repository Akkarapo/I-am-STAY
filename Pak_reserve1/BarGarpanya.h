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

	using namespace System::IO;



	/// <summary>
	/// Summary for BarGarpanya
	/// </summary>


	public ref class BarGarpanya : public System::Windows::Forms::Form
	{

		StringBuilder^ a = gcnew StringBuilder("00000000000000000000000000000");
	private: System::Windows::Forms::Panel^ panel1;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   int targetline = 11;
		   array<bool>^ dataTable;


	public:
		String^ username = nullptr;
	private: System::Windows::Forms::Panel^ panel2;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	public:
		String^ tempUser = nullptr;//==============mpzone==============
	private: System::Windows::Forms::PictureBox^ HomeBTN;
	public:

	public:
		int tableSelect = 0;
		BarGarpanya(User^ user)
		{
			username = user->username;
			InitializeComponent();
			tempUser = Application::StartupPath + "\\Data\\UserData\\" + user->username + ".txt";//==============mpzone==============
			//array<bool>^ dataTable = { false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false,false };
			//std::vector<int> reservedTable;
			array<int>^ reservedTable = {};
			//array<bool>^ dataTable;
			/*label1->Hide();
			label3->Hide();
			button1->Hide();
			*/


			A1Table2PGreen->Hide();
			A2Table2PGreen->Hide();
			A3Table2PGreen->Hide();
			B1Table2PGreen->Hide();
			B2Table4PGreen->Hide();
			B3Table4PGreen->Hide();
			B4Table4PGreen->Hide();
			C1Table2PGreen->Hide();
			C2Table2PGreen->Hide();
			C3Table2PGreen->Hide();
			D1Table4PGreen->Hide();
			D2Table4PGreen->Hide();
			D3Table4PGreen->Hide();
			E1Table2PGreen->Hide();
			E2Table2PGreen->Hide();
			E3Table2PGreen->Hide();
			F1Table4PGreen->Hide();
			F2Table4PGreen->Hide();
			F3Table4PGreen->Hide();
			G1Table2PGreen->Hide();
			G2Table2PGreen->Hide();
			G3Table2PGreen->Hide();
			H1Table1PGreen->Hide();
			H2Table1PGreen->Hide();
			H3Table1PGreen->Hide();
			H4Table1PGreen->Hide();
			H5Table1PGreen->Hide();
			H6Table1PGreen->Hide();
			H7Table1PGreen->Hide();

			panel2->Hide();

			panel1->Hide();
			UpdateTable();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarGarpanya()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ ConfirmTableNo1;


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
	private: System::Windows::Forms::PictureBox^ C1Table2PGreen;

	private: System::Windows::Forms::PictureBox^ C1Table2P;
	private: System::Windows::Forms::PictureBox^ C2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table2P;
	private: System::Windows::Forms::PictureBox^ C3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table2P;
	private: System::Windows::Forms::PictureBox^ D1Table4PGreen;


	private: System::Windows::Forms::PictureBox^ D1Table4P;
	private: System::Windows::Forms::PictureBox^ D2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table4P;
	private: System::Windows::Forms::PictureBox^ D3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table4P;
	private: System::Windows::Forms::PictureBox^ E1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E1Table2P;
	private: System::Windows::Forms::PictureBox^ E2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E2Table2P;
	private: System::Windows::Forms::PictureBox^ E3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E3Table2P;
	private: System::Windows::Forms::PictureBox^ F1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F1Table4P;
	private: System::Windows::Forms::PictureBox^ F2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F2Table4P;
	private: System::Windows::Forms::PictureBox^ F3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F3Table4P;
	private: System::Windows::Forms::PictureBox^ G1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G1Table2P;
	private: System::Windows::Forms::PictureBox^ G2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G2Table2P;
	private: System::Windows::Forms::PictureBox^ G3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G3Table2P;
	private: System::Windows::Forms::PictureBox^ H1Table1P;
	private: System::Windows::Forms::PictureBox^ H1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H2Table1P;
	private: System::Windows::Forms::PictureBox^ H3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H3Table1P;
	private: System::Windows::Forms::PictureBox^ H4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H4Table1P;
	private: System::Windows::Forms::PictureBox^ H5Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H5Table1P;
	private: System::Windows::Forms::PictureBox^ H6Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H6Table1P;
	private: System::Windows::Forms::PictureBox^ H7Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H7Table1P;



	private: System::Windows::Forms::PictureBox^ A1Table2PRed;
	private: System::Windows::Forms::PictureBox^ A2Table2PRed;
	private: System::Windows::Forms::PictureBox^ A3Table2PRed;
	private: System::Windows::Forms::PictureBox^ C1Table2PRed;
	private: System::Windows::Forms::PictureBox^ C2Table2PRed;
	private: System::Windows::Forms::PictureBox^ C3Table2PRed;
	private: System::Windows::Forms::PictureBox^ E1Table2PRed;
	private: System::Windows::Forms::PictureBox^ E2Table2PRed;
	private: System::Windows::Forms::PictureBox^ E3Table2PRed;
	private: System::Windows::Forms::PictureBox^ G1Table2PRed;
	private: System::Windows::Forms::PictureBox^ G2Table2PRed;
	private: System::Windows::Forms::PictureBox^ G3Table2PRed;
	private: System::Windows::Forms::PictureBox^ B1Table2PRed;
	private: System::Windows::Forms::PictureBox^ H1Table1PRed;
	private: System::Windows::Forms::PictureBox^ H2Table1PRed;
	private: System::Windows::Forms::PictureBox^ H3Table1PRed;
	private: System::Windows::Forms::PictureBox^ H4Table1PRed;
	private: System::Windows::Forms::PictureBox^ H5Table1PRed;
	private: System::Windows::Forms::PictureBox^ H6Table1PRed;
	private: System::Windows::Forms::PictureBox^ H7Table1PRed;
	private: System::Windows::Forms::PictureBox^ B2Table4PRed;
	private: System::Windows::Forms::PictureBox^ B3Table4PRed;
	private: System::Windows::Forms::PictureBox^ B4Table4PRed;
	private: System::Windows::Forms::PictureBox^ D1Table4PRed;
	private: System::Windows::Forms::PictureBox^ D2Table4PRed;
	private: System::Windows::Forms::PictureBox^ D3Table4PRed;
	private: System::Windows::Forms::PictureBox^ F1Table4PRed;
	private: System::Windows::Forms::PictureBox^ F2Table4PRed;


	private: System::Windows::Forms::PictureBox^ F3Table4PRed;




























	private: System::Windows::Forms::PictureBox^ pictureBox2;
























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarGarpanya::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ConfirmTableNo1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->C1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->HomeBTN = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->BeginInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomeBTN))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 1;
			// 
			// ConfirmTableNo1
			// 
			this->ConfirmTableNo1->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableNo1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableNo1.BackgroundImage")));
			this->ConfirmTableNo1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableNo1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableNo1->Location = System::Drawing::Point(36, 594);
			this->ConfirmTableNo1->Name = L"ConfirmTableNo1";
			this->ConfirmTableNo1->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableNo1->TabIndex = 2;
			this->ConfirmTableNo1->TabStop = false;
			this->ConfirmTableNo1->Click += gcnew System::EventHandler(this, &BarGarpanya::ConfirmTableNo1_Click);
			// 
			// A1Table2P
			// 
			this->A1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2P.BackgroundImage")));
			this->A1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2P->Location = System::Drawing::Point(496, 157);
			this->A1Table2P->Name = L"A1Table2P";
			this->A1Table2P->Size = System::Drawing::Size(33, 75);
			this->A1Table2P->TabIndex = 3;
			this->A1Table2P->TabStop = false;
			this->A1Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::A1Table2P_Click);
			// 
			// A1Table2PGreen
			// 
			this->A1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PGreen.BackgroundImage")));
			this->A1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table2PGreen->Location = System::Drawing::Point(496, 157);
			this->A1Table2PGreen->Name = L"A1Table2PGreen";
			this->A1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A1Table2PGreen->TabIndex = 4;
			this->A1Table2PGreen->TabStop = false;
			this->A1Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::A1Table2PGreen_Click);
			// 
			// A2Table2PGreen
			// 
			this->A2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PGreen.BackgroundImage")));
			this->A2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2PGreen->Location = System::Drawing::Point(665, 157);
			this->A2Table2PGreen->Name = L"A2Table2PGreen";
			this->A2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A2Table2PGreen->TabIndex = 5;
			this->A2Table2PGreen->TabStop = false;
			this->A2Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::A2Table2PGreen_Click);
			// 
			// A2Table2P
			// 
			this->A2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2P.BackgroundImage")));
			this->A2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table2P->Location = System::Drawing::Point(665, 157);
			this->A2Table2P->Name = L"A2Table2P";
			this->A2Table2P->Size = System::Drawing::Size(33, 75);
			this->A2Table2P->TabIndex = 6;
			this->A2Table2P->TabStop = false;
			this->A2Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::A2Table2P_Click);
			// 
			// A3Table2P
			// 
			this->A3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2P.BackgroundImage")));
			this->A3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2P->Location = System::Drawing::Point(834, 157);
			this->A3Table2P->Name = L"A3Table2P";
			this->A3Table2P->Size = System::Drawing::Size(33, 75);
			this->A3Table2P->TabIndex = 8;
			this->A3Table2P->TabStop = false;
			this->A3Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::A3Table2P_Click);
			// 
			// A3Table2PGreen
			// 
			this->A3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PGreen.BackgroundImage")));
			this->A3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table2PGreen->Location = System::Drawing::Point(834, 157);
			this->A3Table2PGreen->Name = L"A3Table2PGreen";
			this->A3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->A3Table2PGreen->TabIndex = 9;
			this->A3Table2PGreen->TabStop = false;
			this->A3Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::A3Table2PGreen_Click);
			// 
			// B1Table2PGreen
			// 
			this->B1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2PGreen.BackgroundImage")));
			this->B1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table2PGreen->Location = System::Drawing::Point(432, 224);
			this->B1Table2PGreen->Name = L"B1Table2PGreen";
			this->B1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->B1Table2PGreen->TabIndex = 11;
			this->B1Table2PGreen->TabStop = false;
			this->B1Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::B1Table2PGreen_Click);
			// 
			// B1Table2P
			// 
			this->B1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2P.BackgroundImage")));
			this->B1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table2P->Location = System::Drawing::Point(432, 224);
			this->B1Table2P->Name = L"B1Table2P";
			this->B1Table2P->Size = System::Drawing::Size(33, 75);
			this->B1Table2P->TabIndex = 10;
			this->B1Table2P->TabStop = false;
			this->B1Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::B1Table2P_Click);
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(559, 224);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(75, 75);
			this->B2Table4P->TabIndex = 12;
			this->B2Table4P->TabStop = false;
			this->B2Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::B2Table4P_Click);
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(559, 224);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B2Table4PGreen->TabIndex = 13;
			this->B2Table4PGreen->TabStop = false;
			this->B2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::B2Table4PGreen_Click);
			// 
			// B3Table4PGreen
			// 
			this->B3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PGreen.BackgroundImage")));
			this->B3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4PGreen->Location = System::Drawing::Point(729, 224);
			this->B3Table4PGreen->Name = L"B3Table4PGreen";
			this->B3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B3Table4PGreen->TabIndex = 15;
			this->B3Table4PGreen->TabStop = false;
			this->B3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::B3Table4PGreen_Click);
			// 
			// B3Table4P
			// 
			this->B3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4P.BackgroundImage")));
			this->B3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table4P->Location = System::Drawing::Point(729, 224);
			this->B3Table4P->Name = L"B3Table4P";
			this->B3Table4P->Size = System::Drawing::Size(75, 75);
			this->B3Table4P->TabIndex = 14;
			this->B3Table4P->TabStop = false;
			this->B3Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::B3Table4P_Click);
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(897, 224);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->B4Table4PGreen->TabIndex = 17;
			this->B4Table4PGreen->TabStop = false;
			this->B4Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::B4Table4PGreen_Click);
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(897, 224);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(75, 75);
			this->B4Table4P->TabIndex = 16;
			this->B4Table4P->TabStop = false;
			this->B4Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::B4Table4P_Click);
			// 
			// C1Table2PGreen
			// 
			this->C1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table2PGreen.BackgroundImage")));
			this->C1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table2PGreen->Location = System::Drawing::Point(496, 292);
			this->C1Table2PGreen->Name = L"C1Table2PGreen";
			this->C1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C1Table2PGreen->TabIndex = 19;
			this->C1Table2PGreen->TabStop = false;
			this->C1Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::C1Table2PGreen_Click);
			// 
			// C1Table2P
			// 
			this->C1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table2P.BackgroundImage")));
			this->C1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table2P->Location = System::Drawing::Point(496, 292);
			this->C1Table2P->Name = L"C1Table2P";
			this->C1Table2P->Size = System::Drawing::Size(33, 75);
			this->C1Table2P->TabIndex = 18;
			this->C1Table2P->TabStop = false;
			this->C1Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::C1Table2P_Click);
			// 
			// C2Table2PGreen
			// 
			this->C2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table2PGreen.BackgroundImage")));
			this->C2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table2PGreen->Location = System::Drawing::Point(665, 292);
			this->C2Table2PGreen->Name = L"C2Table2PGreen";
			this->C2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C2Table2PGreen->TabIndex = 21;
			this->C2Table2PGreen->TabStop = false;
			this->C2Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::C2Table2PGreen_Click);
			// 
			// C2Table2P
			// 
			this->C2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table2P.BackgroundImage")));
			this->C2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table2P->Location = System::Drawing::Point(665, 292);
			this->C2Table2P->Name = L"C2Table2P";
			this->C2Table2P->Size = System::Drawing::Size(33, 75);
			this->C2Table2P->TabIndex = 20;
			this->C2Table2P->TabStop = false;
			this->C2Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::C2Table2P_Click);
			// 
			// C3Table2PGreen
			// 
			this->C3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table2PGreen.BackgroundImage")));
			this->C3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table2PGreen->Location = System::Drawing::Point(834, 292);
			this->C3Table2PGreen->Name = L"C3Table2PGreen";
			this->C3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->C3Table2PGreen->TabIndex = 23;
			this->C3Table2PGreen->TabStop = false;
			this->C3Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::C3Table2PGreen_Click);
			// 
			// C3Table2P
			// 
			this->C3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table2P.BackgroundImage")));
			this->C3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table2P->Location = System::Drawing::Point(834, 292);
			this->C3Table2P->Name = L"C3Table2P";
			this->C3Table2P->Size = System::Drawing::Size(33, 75);
			this->C3Table2P->TabIndex = 22;
			this->C3Table2P->TabStop = false;
			this->C3Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::C3Table2P_Click);
			// 
			// D1Table4PGreen
			// 
			this->D1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PGreen.BackgroundImage")));
			this->D1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PGreen->Location = System::Drawing::Point(559, 359);
			this->D1Table4PGreen->Name = L"D1Table4PGreen";
			this->D1Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D1Table4PGreen->TabIndex = 25;
			this->D1Table4PGreen->TabStop = false;
			this->D1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::D1Table4PGreen_Click);
			// 
			// D1Table4P
			// 
			this->D1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4P.BackgroundImage")));
			this->D1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4P->Location = System::Drawing::Point(559, 359);
			this->D1Table4P->Name = L"D1Table4P";
			this->D1Table4P->Size = System::Drawing::Size(75, 75);
			this->D1Table4P->TabIndex = 24;
			this->D1Table4P->TabStop = false;
			this->D1Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::D1Table4P_Click);
			// 
			// D2Table4PGreen
			// 
			this->D2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PGreen.BackgroundImage")));
			this->D2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PGreen->Location = System::Drawing::Point(729, 359);
			this->D2Table4PGreen->Name = L"D2Table4PGreen";
			this->D2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D2Table4PGreen->TabIndex = 27;
			this->D2Table4PGreen->TabStop = false;
			this->D2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::D2Table4PGreen_Click);
			// 
			// D2Table4P
			// 
			this->D2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4P.BackgroundImage")));
			this->D2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4P->Location = System::Drawing::Point(729, 359);
			this->D2Table4P->Name = L"D2Table4P";
			this->D2Table4P->Size = System::Drawing::Size(75, 75);
			this->D2Table4P->TabIndex = 26;
			this->D2Table4P->TabStop = false;
			this->D2Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::D2Table4P_Click);
			// 
			// D3Table4PGreen
			// 
			this->D3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PGreen.BackgroundImage")));
			this->D3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PGreen->Location = System::Drawing::Point(897, 359);
			this->D3Table4PGreen->Name = L"D3Table4PGreen";
			this->D3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->D3Table4PGreen->TabIndex = 29;
			this->D3Table4PGreen->TabStop = false;
			this->D3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::D3Table4PGreen_Click);
			// 
			// D3Table4P
			// 
			this->D3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4P.BackgroundImage")));
			this->D3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4P->Location = System::Drawing::Point(897, 359);
			this->D3Table4P->Name = L"D3Table4P";
			this->D3Table4P->Size = System::Drawing::Size(75, 75);
			this->D3Table4P->TabIndex = 28;
			this->D3Table4P->TabStop = false;
			this->D3Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::D3Table4P_Click);
			// 
			// E1Table2PGreen
			// 
			this->E1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table2PGreen.BackgroundImage")));
			this->E1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table2PGreen->Location = System::Drawing::Point(496, 426);
			this->E1Table2PGreen->Name = L"E1Table2PGreen";
			this->E1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E1Table2PGreen->TabIndex = 31;
			this->E1Table2PGreen->TabStop = false;
			this->E1Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::E1Table2PGreen_Click);
			// 
			// E1Table2P
			// 
			this->E1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table2P.BackgroundImage")));
			this->E1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table2P->Location = System::Drawing::Point(496, 426);
			this->E1Table2P->Name = L"E1Table2P";
			this->E1Table2P->Size = System::Drawing::Size(33, 75);
			this->E1Table2P->TabIndex = 30;
			this->E1Table2P->TabStop = false;
			this->E1Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::E1Table2P_Click);
			// 
			// E2Table2PGreen
			// 
			this->E2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table2PGreen.BackgroundImage")));
			this->E2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table2PGreen->Location = System::Drawing::Point(665, 426);
			this->E2Table2PGreen->Name = L"E2Table2PGreen";
			this->E2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E2Table2PGreen->TabIndex = 33;
			this->E2Table2PGreen->TabStop = false;
			this->E2Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::E2Table2PGreen_Click);
			// 
			// E2Table2P
			// 
			this->E2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table2P.BackgroundImage")));
			this->E2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table2P->Location = System::Drawing::Point(665, 426);
			this->E2Table2P->Name = L"E2Table2P";
			this->E2Table2P->Size = System::Drawing::Size(33, 75);
			this->E2Table2P->TabIndex = 32;
			this->E2Table2P->TabStop = false;
			this->E2Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::E2Table2P_Click);
			// 
			// E3Table2PGreen
			// 
			this->E3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table2PGreen.BackgroundImage")));
			this->E3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table2PGreen->Location = System::Drawing::Point(834, 426);
			this->E3Table2PGreen->Name = L"E3Table2PGreen";
			this->E3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->E3Table2PGreen->TabIndex = 35;
			this->E3Table2PGreen->TabStop = false;
			this->E3Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::E3Table2PGreen_Click);
			// 
			// E3Table2P
			// 
			this->E3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->E3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table2P.BackgroundImage")));
			this->E3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table2P->Location = System::Drawing::Point(834, 426);
			this->E3Table2P->Name = L"E3Table2P";
			this->E3Table2P->Size = System::Drawing::Size(33, 75);
			this->E3Table2P->TabIndex = 34;
			this->E3Table2P->TabStop = false;
			this->E3Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::E3Table2P_Click);
			// 
			// F1Table4PGreen
			// 
			this->F1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1Table4PGreen.BackgroundImage")));
			this->F1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F1Table4PGreen->Location = System::Drawing::Point(559, 494);
			this->F1Table4PGreen->Name = L"F1Table4PGreen";
			this->F1Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F1Table4PGreen->TabIndex = 37;
			this->F1Table4PGreen->TabStop = false;
			this->F1Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::F1Table4PGreen_Click);
			// 
			// F1Table4P
			// 
			this->F1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1Table4P.BackgroundImage")));
			this->F1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F1Table4P->Location = System::Drawing::Point(559, 494);
			this->F1Table4P->Name = L"F1Table4P";
			this->F1Table4P->Size = System::Drawing::Size(75, 75);
			this->F1Table4P->TabIndex = 36;
			this->F1Table4P->TabStop = false;
			this->F1Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::F1Table4P_Click);
			// 
			// F2Table4PGreen
			// 
			this->F2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2Table4PGreen.BackgroundImage")));
			this->F2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F2Table4PGreen->Location = System::Drawing::Point(729, 494);
			this->F2Table4PGreen->Name = L"F2Table4PGreen";
			this->F2Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F2Table4PGreen->TabIndex = 39;
			this->F2Table4PGreen->TabStop = false;
			this->F2Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::F2Table4PGreen_Click);
			// 
			// F2Table4P
			// 
			this->F2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2Table4P.BackgroundImage")));
			this->F2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F2Table4P->Location = System::Drawing::Point(729, 494);
			this->F2Table4P->Name = L"F2Table4P";
			this->F2Table4P->Size = System::Drawing::Size(75, 75);
			this->F2Table4P->TabIndex = 38;
			this->F2Table4P->TabStop = false;
			this->F2Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::F2Table4P_Click);
			// 
			// F3Table4PGreen
			// 
			this->F3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->F3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3Table4PGreen.BackgroundImage")));
			this->F3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F3Table4PGreen->Location = System::Drawing::Point(897, 494);
			this->F3Table4PGreen->Name = L"F3Table4PGreen";
			this->F3Table4PGreen->Size = System::Drawing::Size(75, 75);
			this->F3Table4PGreen->TabIndex = 41;
			this->F3Table4PGreen->TabStop = false;
			this->F3Table4PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::F3Table4PGreen_Click);
			// 
			// F3Table4P
			// 
			this->F3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->F3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3Table4P.BackgroundImage")));
			this->F3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->F3Table4P->Location = System::Drawing::Point(897, 494);
			this->F3Table4P->Name = L"F3Table4P";
			this->F3Table4P->Size = System::Drawing::Size(75, 75);
			this->F3Table4P->TabIndex = 40;
			this->F3Table4P->TabStop = false;
			this->F3Table4P->Click += gcnew System::EventHandler(this, &BarGarpanya::F3Table4P_Click);
			// 
			// G1Table2PGreen
			// 
			this->G1Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G1Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1Table2PGreen.BackgroundImage")));
			this->G1Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G1Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G1Table2PGreen->Location = System::Drawing::Point(496, 561);
			this->G1Table2PGreen->Name = L"G1Table2PGreen";
			this->G1Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G1Table2PGreen->TabIndex = 43;
			this->G1Table2PGreen->TabStop = false;
			this->G1Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::G1Table2PGreen_Click);
			// 
			// G1Table2P
			// 
			this->G1Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G1Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1Table2P.BackgroundImage")));
			this->G1Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G1Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G1Table2P->Location = System::Drawing::Point(496, 561);
			this->G1Table2P->Name = L"G1Table2P";
			this->G1Table2P->Size = System::Drawing::Size(33, 75);
			this->G1Table2P->TabIndex = 42;
			this->G1Table2P->TabStop = false;
			this->G1Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::G1Table2P_Click);
			// 
			// G2Table2PGreen
			// 
			this->G2Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G2Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2Table2PGreen.BackgroundImage")));
			this->G2Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G2Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G2Table2PGreen->Location = System::Drawing::Point(665, 561);
			this->G2Table2PGreen->Name = L"G2Table2PGreen";
			this->G2Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G2Table2PGreen->TabIndex = 45;
			this->G2Table2PGreen->TabStop = false;
			this->G2Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::G2Table2PGreen_Click);
			// 
			// G2Table2P
			// 
			this->G2Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G2Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2Table2P.BackgroundImage")));
			this->G2Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G2Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G2Table2P->Location = System::Drawing::Point(665, 561);
			this->G2Table2P->Name = L"G2Table2P";
			this->G2Table2P->Size = System::Drawing::Size(33, 75);
			this->G2Table2P->TabIndex = 44;
			this->G2Table2P->TabStop = false;
			this->G2Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::G2Table2P_Click);
			// 
			// G3Table2PGreen
			// 
			this->G3Table2PGreen->BackColor = System::Drawing::Color::Transparent;
			this->G3Table2PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3Table2PGreen.BackgroundImage")));
			this->G3Table2PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G3Table2PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G3Table2PGreen->Location = System::Drawing::Point(834, 561);
			this->G3Table2PGreen->Name = L"G3Table2PGreen";
			this->G3Table2PGreen->Size = System::Drawing::Size(33, 75);
			this->G3Table2PGreen->TabIndex = 47;
			this->G3Table2PGreen->TabStop = false;
			this->G3Table2PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::G3Table2PGreen_Click);
			// 
			// G3Table2P
			// 
			this->G3Table2P->BackColor = System::Drawing::Color::Transparent;
			this->G3Table2P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3Table2P.BackgroundImage")));
			this->G3Table2P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G3Table2P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->G3Table2P->Location = System::Drawing::Point(834, 561);
			this->G3Table2P->Name = L"G3Table2P";
			this->G3Table2P->Size = System::Drawing::Size(33, 75);
			this->G3Table2P->TabIndex = 46;
			this->G3Table2P->TabStop = false;
			this->G3Table2P->Click += gcnew System::EventHandler(this, &BarGarpanya::G3Table2P_Click);
			// 
			// H1Table1P
			// 
			this->H1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1P.BackgroundImage")));
			this->H1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1P->Location = System::Drawing::Point(1081, 338);
			this->H1Table1P->Name = L"H1Table1P";
			this->H1Table1P->Size = System::Drawing::Size(27, 29);
			this->H1Table1P->TabIndex = 48;
			this->H1Table1P->TabStop = false;
			this->H1Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H1Table1P_Click);
			// 
			// H1Table1PGreen
			// 
			this->H1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1PGreen.BackgroundImage")));
			this->H1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1PGreen->Location = System::Drawing::Point(1081, 338);
			this->H1Table1PGreen->Name = L"H1Table1PGreen";
			this->H1Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H1Table1PGreen->TabIndex = 49;
			this->H1Table1PGreen->TabStop = false;
			this->H1Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H1Table1PGreen_Click);
			// 
			// H2Table1PGreen
			// 
			this->H2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1PGreen.BackgroundImage")));
			this->H2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1PGreen->Location = System::Drawing::Point(1081, 365);
			this->H2Table1PGreen->Name = L"H2Table1PGreen";
			this->H2Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H2Table1PGreen->TabIndex = 51;
			this->H2Table1PGreen->TabStop = false;
			this->H2Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H2Table1PGreen_Click);
			// 
			// H2Table1P
			// 
			this->H2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1P.BackgroundImage")));
			this->H2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1P->Location = System::Drawing::Point(1081, 365);
			this->H2Table1P->Name = L"H2Table1P";
			this->H2Table1P->Size = System::Drawing::Size(27, 29);
			this->H2Table1P->TabIndex = 50;
			this->H2Table1P->TabStop = false;
			this->H2Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H2Table1P_Click);
			// 
			// H3Table1PGreen
			// 
			this->H3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1PGreen.BackgroundImage")));
			this->H3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1PGreen->Location = System::Drawing::Point(1081, 393);
			this->H3Table1PGreen->Name = L"H3Table1PGreen";
			this->H3Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H3Table1PGreen->TabIndex = 53;
			this->H3Table1PGreen->TabStop = false;
			this->H3Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H3Table1PGreen_Click);
			// 
			// H3Table1P
			// 
			this->H3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1P.BackgroundImage")));
			this->H3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1P->Location = System::Drawing::Point(1081, 393);
			this->H3Table1P->Name = L"H3Table1P";
			this->H3Table1P->Size = System::Drawing::Size(27, 29);
			this->H3Table1P->TabIndex = 52;
			this->H3Table1P->TabStop = false;
			this->H3Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H3Table1P_Click);
			// 
			// H4Table1PGreen
			// 
			this->H4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1PGreen.BackgroundImage")));
			this->H4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1PGreen->Location = System::Drawing::Point(1081, 421);
			this->H4Table1PGreen->Name = L"H4Table1PGreen";
			this->H4Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H4Table1PGreen->TabIndex = 55;
			this->H4Table1PGreen->TabStop = false;
			this->H4Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H4Table1PGreen_Click);
			// 
			// H4Table1P
			// 
			this->H4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1P.BackgroundImage")));
			this->H4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1P->Location = System::Drawing::Point(1081, 421);
			this->H4Table1P->Name = L"H4Table1P";
			this->H4Table1P->Size = System::Drawing::Size(27, 29);
			this->H4Table1P->TabIndex = 54;
			this->H4Table1P->TabStop = false;
			this->H4Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H4Table1P_Click);
			// 
			// H5Table1PGreen
			// 
			this->H5Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1PGreen.BackgroundImage")));
			this->H5Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1PGreen->Location = System::Drawing::Point(1081, 449);
			this->H5Table1PGreen->Name = L"H5Table1PGreen";
			this->H5Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H5Table1PGreen->TabIndex = 57;
			this->H5Table1PGreen->TabStop = false;
			this->H5Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H5Table1PGreen_Click);
			// 
			// H5Table1P
			// 
			this->H5Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1P.BackgroundImage")));
			this->H5Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1P->Location = System::Drawing::Point(1081, 449);
			this->H5Table1P->Name = L"H5Table1P";
			this->H5Table1P->Size = System::Drawing::Size(27, 29);
			this->H5Table1P->TabIndex = 56;
			this->H5Table1P->TabStop = false;
			this->H5Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H5Table1P_Click);
			// 
			// H6Table1PGreen
			// 
			this->H6Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1PGreen.BackgroundImage")));
			this->H6Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1PGreen->Location = System::Drawing::Point(1081, 477);
			this->H6Table1PGreen->Name = L"H6Table1PGreen";
			this->H6Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H6Table1PGreen->TabIndex = 59;
			this->H6Table1PGreen->TabStop = false;
			this->H6Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H6Table1PGreen_Click);
			// 
			// H6Table1P
			// 
			this->H6Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1P.BackgroundImage")));
			this->H6Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1P->Location = System::Drawing::Point(1081, 477);
			this->H6Table1P->Name = L"H6Table1P";
			this->H6Table1P->Size = System::Drawing::Size(27, 29);
			this->H6Table1P->TabIndex = 58;
			this->H6Table1P->TabStop = false;
			this->H6Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H6Table1P_Click);
			// 
			// H7Table1PGreen
			// 
			this->H7Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1PGreen.BackgroundImage")));
			this->H7Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1PGreen->Location = System::Drawing::Point(1081, 505);
			this->H7Table1PGreen->Name = L"H7Table1PGreen";
			this->H7Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H7Table1PGreen->TabIndex = 61;
			this->H7Table1PGreen->TabStop = false;
			this->H7Table1PGreen->Click += gcnew System::EventHandler(this, &BarGarpanya::H7Table1PGreen_Click);
			// 
			// H7Table1P
			// 
			this->H7Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1P.BackgroundImage")));
			this->H7Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1P->Location = System::Drawing::Point(1081, 505);
			this->H7Table1P->Name = L"H7Table1P";
			this->H7Table1P->Size = System::Drawing::Size(27, 29);
			this->H7Table1P->TabIndex = 60;
			this->H7Table1P->TabStop = false;
			this->H7Table1P->Click += gcnew System::EventHandler(this, &BarGarpanya::H7Table1P_Click);
			// 
			// A1Table2PRed
			// 
			this->A1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table2PRed.BackgroundImage")));
			this->A1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->A1Table2PRed->Location = System::Drawing::Point(496, 157);
			this->A1Table2PRed->Name = L"A1Table2PRed";
			this->A1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A1Table2PRed->TabIndex = 65;
			this->A1Table2PRed->TabStop = false;
			this->A1Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::A1Table2PRed_Click);
			// 
			// A2Table2PRed
			// 
			this->A2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table2PRed.BackgroundImage")));
			this->A2Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->A2Table2PRed->Location = System::Drawing::Point(665, 157);
			this->A2Table2PRed->Name = L"A2Table2PRed";
			this->A2Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A2Table2PRed->TabIndex = 66;
			this->A2Table2PRed->TabStop = false;
			this->A2Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::A2Table2PRed_Click);
			// 
			// A3Table2PRed
			// 
			this->A3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table2PRed.BackgroundImage")));
			this->A3Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->A3Table2PRed->Location = System::Drawing::Point(834, 157);
			this->A3Table2PRed->Name = L"A3Table2PRed";
			this->A3Table2PRed->Size = System::Drawing::Size(33, 75);
			this->A3Table2PRed->TabIndex = 67;
			this->A3Table2PRed->TabStop = false;
			this->A3Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::A3Table2PRed_Click);
			// 
			// C1Table2PRed
			// 
			this->C1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->C1Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table2PRed.BackgroundImage")));
			this->C1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->C1Table2PRed->Location = System::Drawing::Point(496, 292);
			this->C1Table2PRed->Name = L"C1Table2PRed";
			this->C1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->C1Table2PRed->TabIndex = 68;
			this->C1Table2PRed->TabStop = false;
			this->C1Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::C1Table2PRed_Click);
			// 
			// C2Table2PRed
			// 
			this->C2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->C2Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table2PRed.BackgroundImage")));
			this->C2Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->C2Table2PRed->Location = System::Drawing::Point(665, 292);
			this->C2Table2PRed->Name = L"C2Table2PRed";
			this->C2Table2PRed->Size = System::Drawing::Size(33, 75);
			this->C2Table2PRed->TabIndex = 69;
			this->C2Table2PRed->TabStop = false;
			this->C2Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::C2Table2PRed_Click);
			// 
			// C3Table2PRed
			// 
			this->C3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->C3Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table2PRed.BackgroundImage")));
			this->C3Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->C3Table2PRed->Location = System::Drawing::Point(834, 292);
			this->C3Table2PRed->Name = L"C3Table2PRed";
			this->C3Table2PRed->Size = System::Drawing::Size(33, 75);
			this->C3Table2PRed->TabIndex = 70;
			this->C3Table2PRed->TabStop = false;
			this->C3Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::C3Table2PRed_Click);
			// 
			// E1Table2PRed
			// 
			this->E1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->E1Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table2PRed.BackgroundImage")));
			this->E1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->E1Table2PRed->Location = System::Drawing::Point(496, 426);
			this->E1Table2PRed->Name = L"E1Table2PRed";
			this->E1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->E1Table2PRed->TabIndex = 71;
			this->E1Table2PRed->TabStop = false;
			this->E1Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::E1Table2PRed_Click);
			// 
			// E2Table2PRed
			// 
			this->E2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->E2Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table2PRed.BackgroundImage")));
			this->E2Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->E2Table2PRed->Location = System::Drawing::Point(665, 426);
			this->E2Table2PRed->Name = L"E2Table2PRed";
			this->E2Table2PRed->Size = System::Drawing::Size(33, 75);
			this->E2Table2PRed->TabIndex = 72;
			this->E2Table2PRed->TabStop = false;
			this->E2Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::E2Table2PRed_Click);
			// 
			// E3Table2PRed
			// 
			this->E3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->E3Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table2PRed.BackgroundImage")));
			this->E3Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->E3Table2PRed->Location = System::Drawing::Point(834, 426);
			this->E3Table2PRed->Name = L"E3Table2PRed";
			this->E3Table2PRed->Size = System::Drawing::Size(33, 75);
			this->E3Table2PRed->TabIndex = 73;
			this->E3Table2PRed->TabStop = false;
			this->E3Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::E3Table2PRed_Click);
			// 
			// G1Table2PRed
			// 
			this->G1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->G1Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G1Table2PRed.BackgroundImage")));
			this->G1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G1Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->G1Table2PRed->Location = System::Drawing::Point(496, 561);
			this->G1Table2PRed->Name = L"G1Table2PRed";
			this->G1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->G1Table2PRed->TabIndex = 74;
			this->G1Table2PRed->TabStop = false;
			this->G1Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::G1Table2PRed_Click);
			// 
			// G2Table2PRed
			// 
			this->G2Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->G2Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G2Table2PRed.BackgroundImage")));
			this->G2Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G2Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->G2Table2PRed->Location = System::Drawing::Point(665, 561);
			this->G2Table2PRed->Name = L"G2Table2PRed";
			this->G2Table2PRed->Size = System::Drawing::Size(33, 75);
			this->G2Table2PRed->TabIndex = 75;
			this->G2Table2PRed->TabStop = false;
			this->G2Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::G2Table2PRed_Click);
			// 
			// G3Table2PRed
			// 
			this->G3Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->G3Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"G3Table2PRed.BackgroundImage")));
			this->G3Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->G3Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->G3Table2PRed->Location = System::Drawing::Point(834, 561);
			this->G3Table2PRed->Name = L"G3Table2PRed";
			this->G3Table2PRed->Size = System::Drawing::Size(33, 75);
			this->G3Table2PRed->TabIndex = 76;
			this->G3Table2PRed->TabStop = false;
			this->G3Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::G3Table2PRed_Click);
			// 
			// B1Table2PRed
			// 
			this->B1Table2PRed->BackColor = System::Drawing::Color::Transparent;
			this->B1Table2PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table2PRed.BackgroundImage")));
			this->B1Table2PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table2PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->B1Table2PRed->Location = System::Drawing::Point(432, 224);
			this->B1Table2PRed->Name = L"B1Table2PRed";
			this->B1Table2PRed->Size = System::Drawing::Size(33, 75);
			this->B1Table2PRed->TabIndex = 77;
			this->B1Table2PRed->TabStop = false;
			this->B1Table2PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::B1Table2PRed_Click);
			// 
			// H1Table1PRed
			// 
			this->H1Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1PRed.BackgroundImage")));
			this->H1Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H1Table1PRed->Location = System::Drawing::Point(1081, 338);
			this->H1Table1PRed->Name = L"H1Table1PRed";
			this->H1Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H1Table1PRed->TabIndex = 78;
			this->H1Table1PRed->TabStop = false;
			this->H1Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H1Table1PRed_Click);
			// 
			// H2Table1PRed
			// 
			this->H2Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1PRed.BackgroundImage")));
			this->H2Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H2Table1PRed->Location = System::Drawing::Point(1081, 365);
			this->H2Table1PRed->Name = L"H2Table1PRed";
			this->H2Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H2Table1PRed->TabIndex = 79;
			this->H2Table1PRed->TabStop = false;
			this->H2Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H2Table1PRed_Click);
			// 
			// H3Table1PRed
			// 
			this->H3Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1PRed.BackgroundImage")));
			this->H3Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H3Table1PRed->Location = System::Drawing::Point(1081, 393);
			this->H3Table1PRed->Name = L"H3Table1PRed";
			this->H3Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H3Table1PRed->TabIndex = 80;
			this->H3Table1PRed->TabStop = false;
			this->H3Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H3Table1PRed_Click);
			// 
			// H4Table1PRed
			// 
			this->H4Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1PRed.BackgroundImage")));
			this->H4Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H4Table1PRed->Location = System::Drawing::Point(1081, 421);
			this->H4Table1PRed->Name = L"H4Table1PRed";
			this->H4Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H4Table1PRed->TabIndex = 81;
			this->H4Table1PRed->TabStop = false;
			this->H4Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H4Table1PRed_Click);
			// 
			// H5Table1PRed
			// 
			this->H5Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1PRed.BackgroundImage")));
			this->H5Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H5Table1PRed->Location = System::Drawing::Point(1081, 449);
			this->H5Table1PRed->Name = L"H5Table1PRed";
			this->H5Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H5Table1PRed->TabIndex = 82;
			this->H5Table1PRed->TabStop = false;
			this->H5Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H5Table1PRed_Click);
			// 
			// H6Table1PRed
			// 
			this->H6Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1PRed.BackgroundImage")));
			this->H6Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H6Table1PRed->Location = System::Drawing::Point(1081, 477);
			this->H6Table1PRed->Name = L"H6Table1PRed";
			this->H6Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H6Table1PRed->TabIndex = 83;
			this->H6Table1PRed->TabStop = false;
			this->H6Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H6Table1PRed_Click);
			// 
			// H7Table1PRed
			// 
			this->H7Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1PRed.BackgroundImage")));
			this->H7Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H7Table1PRed->Location = System::Drawing::Point(1081, 505);
			this->H7Table1PRed->Name = L"H7Table1PRed";
			this->H7Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H7Table1PRed->TabIndex = 84;
			this->H7Table1PRed->TabStop = false;
			this->H7Table1PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::H7Table1PRed_Click);
			// 
			// B2Table4PRed
			// 
			this->B2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PRed.BackgroundImage")));
			this->B2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->B2Table4PRed->Location = System::Drawing::Point(559, 224);
			this->B2Table4PRed->Name = L"B2Table4PRed";
			this->B2Table4PRed->Size = System::Drawing::Size(75, 75);
			this->B2Table4PRed->TabIndex = 85;
			this->B2Table4PRed->TabStop = false;
			this->B2Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::B2Table4PRed_Click);
			// 
			// B3Table4PRed
			// 
			this->B3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B3Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table4PRed.BackgroundImage")));
			this->B3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->B3Table4PRed->Location = System::Drawing::Point(729, 224);
			this->B3Table4PRed->Name = L"B3Table4PRed";
			this->B3Table4PRed->Size = System::Drawing::Size(75, 75);
			this->B3Table4PRed->TabIndex = 86;
			this->B3Table4PRed->TabStop = false;
			this->B3Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::B3Table4PRed_Click);
			// 
			// B4Table4PRed
			// 
			this->B4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PRed.BackgroundImage")));
			this->B4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->B4Table4PRed->Location = System::Drawing::Point(897, 224);
			this->B4Table4PRed->Name = L"B4Table4PRed";
			this->B4Table4PRed->Size = System::Drawing::Size(75, 75);
			this->B4Table4PRed->TabIndex = 87;
			this->B4Table4PRed->TabStop = false;
			this->B4Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::B4Table4PRed_Click);
			// 
			// D1Table4PRed
			// 
			this->D1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PRed.BackgroundImage")));
			this->D1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->D1Table4PRed->Location = System::Drawing::Point(559, 359);
			this->D1Table4PRed->Name = L"D1Table4PRed";
			this->D1Table4PRed->Size = System::Drawing::Size(75, 75);
			this->D1Table4PRed->TabIndex = 88;
			this->D1Table4PRed->TabStop = false;
			this->D1Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::D1Table4PRed_Click);
			// 
			// D2Table4PRed
			// 
			this->D2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PRed.BackgroundImage")));
			this->D2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->D2Table4PRed->Location = System::Drawing::Point(729, 359);
			this->D2Table4PRed->Name = L"D2Table4PRed";
			this->D2Table4PRed->Size = System::Drawing::Size(75, 75);
			this->D2Table4PRed->TabIndex = 89;
			this->D2Table4PRed->TabStop = false;
			this->D2Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::D2Table4PRed_Click);
			// 
			// D3Table4PRed
			// 
			this->D3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PRed.BackgroundImage")));
			this->D3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->D3Table4PRed->Location = System::Drawing::Point(897, 359);
			this->D3Table4PRed->Name = L"D3Table4PRed";
			this->D3Table4PRed->Size = System::Drawing::Size(75, 75);
			this->D3Table4PRed->TabIndex = 90;
			this->D3Table4PRed->TabStop = false;
			this->D3Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::D3Table4PRed_Click);
			// 
			// F1Table4PRed
			// 
			this->F1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->F1Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F1Table4PRed.BackgroundImage")));
			this->F1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F1Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->F1Table4PRed->Location = System::Drawing::Point(559, 494);
			this->F1Table4PRed->Name = L"F1Table4PRed";
			this->F1Table4PRed->Size = System::Drawing::Size(75, 75);
			this->F1Table4PRed->TabIndex = 91;
			this->F1Table4PRed->TabStop = false;
			this->F1Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::F1Table4PRed_Click);
			// 
			// F2Table4PRed
			// 
			this->F2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->F2Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F2Table4PRed.BackgroundImage")));
			this->F2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F2Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->F2Table4PRed->Location = System::Drawing::Point(729, 494);
			this->F2Table4PRed->Name = L"F2Table4PRed";
			this->F2Table4PRed->Size = System::Drawing::Size(75, 75);
			this->F2Table4PRed->TabIndex = 92;
			this->F2Table4PRed->TabStop = false;
			this->F2Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::F2Table4PRed_Click);
			// 
			// F3Table4PRed
			// 
			this->F3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->F3Table4PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"F3Table4PRed.BackgroundImage")));
			this->F3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->F3Table4PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->F3Table4PRed->Location = System::Drawing::Point(897, 494);
			this->F3Table4PRed->Name = L"F3Table4PRed";
			this->F3Table4PRed->Size = System::Drawing::Size(75, 75);
			this->F3Table4PRed->TabIndex = 93;
			this->F3Table4PRed->TabStop = false;
			this->F3Table4PRed->Click += gcnew System::EventHandler(this, &BarGarpanya::F3Table4PRed_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Location = System::Drawing::Point(1216, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 45);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 63;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &BarGarpanya::pictureBox2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(433, 237);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 247);
			this->panel1->TabIndex = 94;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(242, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 56);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &BarGarpanya::pictureBox3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(32, 173);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 56);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BarGarpanya::pictureBox1_Click_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Location = System::Drawing::Point(432, 238);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(407, 247);
			this->panel2->TabIndex = 95;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(242, 172);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(133, 56);
			this->pictureBox4->TabIndex = 1;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &BarGarpanya::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(32, 173);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(133, 56);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &BarGarpanya::pictureBox5_Click);
			// 
			// HomeBTN
			// 
			this->HomeBTN->BackColor = System::Drawing::Color::Black;
			this->HomeBTN->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"HomeBTN.BackgroundImage")));
			this->HomeBTN->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->HomeBTN->Cursor = System::Windows::Forms::Cursors::Hand;
			this->HomeBTN->Location = System::Drawing::Point(12, 12);
			this->HomeBTN->Name = L"HomeBTN";
			this->HomeBTN->Size = System::Drawing::Size(70, 31);
			this->HomeBTN->TabIndex = 95;
			this->HomeBTN->TabStop = false;
			this->HomeBTN->Click += gcnew System::EventHandler(this, &BarGarpanya::HomeBTN_Click);
			// 
			// BarGarpanya
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->HomeBTN);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->F3Table4PRed);
			this->Controls->Add(this->F2Table4PRed);
			this->Controls->Add(this->F1Table4PRed);
			this->Controls->Add(this->D3Table4PRed);
			this->Controls->Add(this->D2Table4PRed);
			this->Controls->Add(this->D1Table4PRed);
			this->Controls->Add(this->B4Table4PRed);
			this->Controls->Add(this->B3Table4PRed);
			this->Controls->Add(this->B2Table4PRed);
			this->Controls->Add(this->H7Table1PRed);
			this->Controls->Add(this->H6Table1PRed);
			this->Controls->Add(this->H5Table1PRed);
			this->Controls->Add(this->H4Table1PRed);
			this->Controls->Add(this->H3Table1PRed);
			this->Controls->Add(this->H2Table1PRed);
			this->Controls->Add(this->H1Table1PRed);
			this->Controls->Add(this->B1Table2PRed);
			this->Controls->Add(this->G3Table2PRed);
			this->Controls->Add(this->G2Table2PRed);
			this->Controls->Add(this->G1Table2PRed);
			this->Controls->Add(this->E3Table2PRed);
			this->Controls->Add(this->E2Table2PRed);
			this->Controls->Add(this->E1Table2PRed);
			this->Controls->Add(this->C3Table2PRed);
			this->Controls->Add(this->C2Table2PRed);
			this->Controls->Add(this->C1Table2PRed);
			this->Controls->Add(this->A3Table2PRed);
			this->Controls->Add(this->A2Table2PRed);
			this->Controls->Add(this->A1Table2PRed);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->H7Table1PGreen);
			this->Controls->Add(this->H7Table1P);
			this->Controls->Add(this->H6Table1PGreen);
			this->Controls->Add(this->H6Table1P);
			this->Controls->Add(this->H5Table1PGreen);
			this->Controls->Add(this->H5Table1P);
			this->Controls->Add(this->H4Table1PGreen);
			this->Controls->Add(this->H4Table1P);
			this->Controls->Add(this->H3Table1PGreen);
			this->Controls->Add(this->H3Table1P);
			this->Controls->Add(this->H2Table1PGreen);
			this->Controls->Add(this->H2Table1P);
			this->Controls->Add(this->H1Table1PGreen);
			this->Controls->Add(this->H1Table1P);
			this->Controls->Add(this->G3Table2PGreen);
			this->Controls->Add(this->G3Table2P);
			this->Controls->Add(this->G2Table2PGreen);
			this->Controls->Add(this->G2Table2P);
			this->Controls->Add(this->G1Table2PGreen);
			this->Controls->Add(this->G1Table2P);
			this->Controls->Add(this->F3Table4PGreen);
			this->Controls->Add(this->F3Table4P);
			this->Controls->Add(this->F2Table4PGreen);
			this->Controls->Add(this->F2Table4P);
			this->Controls->Add(this->F1Table4PGreen);
			this->Controls->Add(this->F1Table4P);
			this->Controls->Add(this->E3Table2PGreen);
			this->Controls->Add(this->E3Table2P);
			this->Controls->Add(this->E2Table2PGreen);
			this->Controls->Add(this->E2Table2P);
			this->Controls->Add(this->E1Table2PGreen);
			this->Controls->Add(this->E1Table2P);
			this->Controls->Add(this->D3Table4PGreen);
			this->Controls->Add(this->D3Table4P);
			this->Controls->Add(this->D2Table4PGreen);
			this->Controls->Add(this->D2Table4P);
			this->Controls->Add(this->D1Table4PGreen);
			this->Controls->Add(this->D1Table4P);
			this->Controls->Add(this->C3Table2PGreen);
			this->Controls->Add(this->C3Table2P);
			this->Controls->Add(this->C2Table2PGreen);
			this->Controls->Add(this->C2Table2P);
			this->Controls->Add(this->C1Table2PGreen);
			this->Controls->Add(this->C1Table2P);
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
			this->Controls->Add(this->ConfirmTableNo1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->A2Table2P);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BarGarpanya";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"\?\?";
			this->Load += gcnew System::EventHandler(this, &BarGarpanya::BarGarpanya_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &BarGarpanya::BarGarpanya_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->EndInit();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->HomeBTN))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

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

			A1Table2PRed->Hide();
			A2Table2PRed->Hide();
			A3Table2PRed->Hide();
			B1Table2PRed->Hide();
			B2Table4PRed->Hide();
			B3Table4PRed->Hide();
			B4Table4PRed->Hide();
			C1Table2PRed->Hide();
			C2Table2PRed->Hide();
			C3Table2PRed->Hide();
			D1Table4PRed->Hide();
			D2Table4PRed->Hide();
			D3Table4PRed->Hide();
			E1Table2PRed->Hide();
			E2Table2PRed->Hide();
			E3Table2PRed->Hide();
			F1Table4PRed->Hide();
			F2Table4PRed->Hide();
			F3Table4PRed->Hide();
			G1Table2PRed->Hide();
			G2Table2PRed->Hide();
			G3Table2PRed->Hide();
			H1Table1PRed->Hide();
			H2Table1PRed->Hide();
			H3Table1PRed->Hide();
			H4Table1PRed->Hide();
			H5Table1PRed->Hide();
			H6Table1PRed->Hide();
			H7Table1PRed->Hide();

			using namespace std;
			int BarNo = 11;

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
				A1Table2PRed->Show();
				A1Table2P->Hide();
			}
			else {
				A1Table2P->Show();
			}

			if (line[1] == '1') {
				a[1] = '1';
				A2Table2PRed->Show();
				A2Table2P->Hide();
			}
			else {
				A2Table2P->Show();
			}

			if (line[2] == '1') {
				a[2] = '1';
				A3Table2PRed->Show();
				A3Table2P->Hide();
			}
			else {
				A3Table2P->Show();
			}

			if (line[3] == '1') {
				a[3] = '1';
				B1Table2PRed->Show();
				B1Table2P->Hide();
			}
			else {
				B1Table2P->Show();
			}

			if (line[4] == '1') {
				a[4] = '1';
				B2Table4PRed->Show();
				B2Table4P->Hide();
			}
			else {
				B2Table4P->Show();
			}

			if (line[5] == '1') {
				a[5] = '1';
				B3Table4PRed->Show();
				B3Table4P->Hide();
			}
			else {
				B3Table4P->Show();
			}

			if (line[6] == '1') {
				a[6] = '1';
				B4Table4PRed->Show();
				B4Table4P->Hide();
			}
			else {
				B4Table4P->Show();
			}

			if (line[7] == '1') {
				a[7] = '1';
				C1Table2PRed->Show();
				C1Table2P->Hide();
			}
			else {
				C1Table2P->Show();
			}

			if (line[8] == '1') {
				a[8] = '1';
				C2Table2PRed->Show();
				C2Table2P->Hide();
			}
			else {
				C2Table2P->Show();
			}

			if (line[9] == '1') {
				a[9] = '1';
				C3Table2PRed->Show();
				C3Table2P->Hide();
			}
			else {
				C3Table2P->Show();
			}

			if (line[10] == '1') {
				a[10] = '1';
				D1Table4PRed->Show();
				D1Table4P->Hide();
			}
			else {
				D1Table4P->Show();
			}

			if (line[11] == '1') {
				a[11] = '1';
				D2Table4PRed->Show();
				D2Table4P->Hide();
			}
			else {
				D2Table4P->Show();
			}

			if (line[12] == '1') {
				a[12] = '1';
				D3Table4PRed->Show();
				D3Table4P->Hide();
			}
			else {
				D3Table4P->Show();
			}

			if (line[13] == '1') {
				a[13] = '1';
				E1Table2PRed->Show();
				E1Table2P->Hide();
			}
			else {
				E1Table2P->Show();
			}

			if (line[14] == '1') {
				a[14] = '1';
				E2Table2PRed->Show();
				E2Table2P->Hide();
			}
			else {
				E2Table2P->Show();
			}

			if (line[15] == '1') {
				a[15] = '1';
				E3Table2PRed->Show();
				E3Table2P->Hide();
			}
			else {
				E3Table2P->Show();
			}

			if (line[16] == '1') {
				a[16] = '1';
				F1Table4PRed->Show();
				F1Table4P->Hide();
			}
			else {
				F1Table4P->Show();
			}

			if (line[17] == '1') {
				a[17] = '1';
				F2Table4PRed->Show();
				F2Table4P->Hide();
			}
			else {
				F2Table4P->Show();
			}

			if (line[18] == '1') {
				a[18] = '1';
				F3Table4PRed->Show();
				F3Table4P->Hide();
			}
			else {
				F3Table4P->Show();
			}

			if (line[19] == '1') {
				a[19] = '1';
				G1Table2PRed->Show();
				G1Table2P->Hide();
			}
			else {
				G1Table2P->Show();
			}

			if (line[20] == '1') {
				a[20] = '1';
				G2Table2PRed->Show();
				G2Table2P->Hide();
			}
			else {
				G2Table2P->Show();
			}

			if (line[21] == '1') {
				a[21] = '1';
				G3Table2PRed->Show();
				G3Table2P->Hide();
			}
			else {
				G3Table2P->Show();
			}

			if (line[22] == '1') {
				a[22] = '1';
				H1Table1PRed->Show();
				H1Table1P->Hide();
			}
			else {
				H1Table1P->Show();
			}

			if (line[23] == '1') {
				a[23] = '1';
				H2Table1PRed->Show();
				H2Table1P->Hide();
			}
			else {
				H2Table1P->Show();
			}

			if (line[24] == '1') {
				a[24] = '1';
				H3Table1PRed->Show();
				H3Table1P->Hide();
			}
			else {
				H3Table1P->Show();
			}

			if (line[25] == '1') {
				a[25] = '1';
				H4Table1PRed->Show();
				H4Table1P->Hide();
			}
			else {
				H4Table1P->Show();
			}

			if (line[26] == '1') {
				a[26] = '1';
				H5Table1PRed->Show();
				H5Table1P->Hide();
			}
			else {
				H5Table1P->Show();
			}

			if (line[27] == '1') {
				a[27] = '1';
				H6Table1PRed->Show();
				H6Table1P->Hide();
			}
			else {
				H6Table1P->Show();
			}

			if (line[28] == '1') {
				a[28] = '1';
				H7Table1PRed->Show();
				H7Table1P->Hide();
			}
			else {
				H7Table1P->Show();
			}

			//label1->Text = gcnew String(line.c_str());
		}
#pragma endregion
		bool A1Table2PGreenCheck = true;
	private: System::Void BarGarpanya_Load(System::Object^ sender, System::EventArgs^ e) {
		dataTable = gcnew array<bool>(29);
	}
	private: System::Void A1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2P->Hide();
		A1Table2PGreen->Show();
		A1Table2PGreenCheck = false;
		dataTable[0] = !dataTable[0];
	}
	private: System::Void A1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A1Table2PGreen->Hide();
		A1Table2P->Show();
		A1Table2PGreenCheck = true;
		dataTable[0] = !dataTable[0];
	}
	private: System::Void A2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2P->Hide();
		A2Table2PGreen->Show();
		dataTable[1] = !dataTable[1];
	}
	private: System::Void A2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A2Table2PGreen->Hide();
		A2Table2P->Show();
		dataTable[1] = !dataTable[1];
	}
	private: System::Void A3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2P->Hide();
		A3Table2PGreen->Show();
		dataTable[2] = !dataTable[2];
	}
	private: System::Void A3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		A3Table2PGreen->Hide();
		A3Table2P->Show();
		dataTable[2] = !dataTable[2];
	}
	private: System::Void B1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2P->Hide();
		B1Table2PGreen->Show();
		dataTable[3] = !dataTable[3];
	}
	private: System::Void B1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B1Table2PGreen->Hide();
		B1Table2P->Show();
		dataTable[3] = !dataTable[3];
	}
	private: System::Void B2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4P->Hide();
		B2Table4PGreen->Show();
		dataTable[4] = !dataTable[4];
	}
	private: System::Void B2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B2Table4PGreen->Hide();
		B2Table4P->Show();
		dataTable[4] = !dataTable[4];
	}
	private: System::Void B3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4P->Hide();
		B3Table4PGreen->Show();
		dataTable[5] = !dataTable[5];
	}
	private: System::Void B3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B3Table4PGreen->Hide();
		B3Table4P->Show();
		dataTable[5] = !dataTable[5];
	}
	private: System::Void B4Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4P->Hide();
		B4Table4PGreen->Show();
		dataTable[6] = !dataTable[6];
	}
	private: System::Void B4Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		B4Table4PGreen->Hide();
		B4Table4P->Show();
		dataTable[6] = !dataTable[6];
	}

	private: System::Void C1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table2P->Hide();
		C1Table2PGreen->Show();
		dataTable[7] = !dataTable[7];
	}
	private: System::Void C1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C1Table2PGreen->Hide();
		C1Table2P->Show();
		dataTable[7] = !dataTable[7];
	}
	private: System::Void C2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table2P->Hide();
		C2Table2PGreen->Show();
		dataTable[8] = !dataTable[8];
	}
	private: System::Void C2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C2Table2PGreen->Hide();
		C2Table2P->Show();
		dataTable[8] = !dataTable[8];
	}
	private: System::Void C3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table2P->Hide();
		C3Table2PGreen->Show();
		dataTable[9] = !dataTable[9];
	}
	private: System::Void C3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		C3Table2PGreen->Hide();
		C3Table2P->Show();
		dataTable[9] = !dataTable[9];
	}
	private: System::Void D1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4P->Hide();
		D1Table4PGreen->Show();
		dataTable[10] = !dataTable[10];
	}
	private: System::Void D1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D1Table4PGreen->Hide();
		D1Table4P->Show();
		dataTable[10] = !dataTable[10];
	}
	private: System::Void D2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4P->Hide();
		D2Table4PGreen->Show();
		dataTable[11] = !dataTable[11];
	}
	private: System::Void D2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D2Table4PGreen->Hide();
		D2Table4P->Show();
		dataTable[11] = !dataTable[11];
	}
	private: System::Void D3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4P->Hide();
		D3Table4PGreen->Show();
		dataTable[12] = !dataTable[12];
	}
	private: System::Void D3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		D3Table4PGreen->Hide();
		D3Table4P->Show();
		dataTable[12] = !dataTable[12];
	}
	private: System::Void E1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table2P->Hide();
		E1Table2PGreen->Show();
		dataTable[13] = !dataTable[13];
	}
	private: System::Void E1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E1Table2PGreen->Hide();
		E1Table2P->Show();
		dataTable[13] = !dataTable[13];
	}
	private: System::Void E2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table2P->Hide();
		E2Table2PGreen->Show();
		dataTable[14] = !dataTable[14];
	}
	private: System::Void E2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E2Table2PGreen->Hide();
		E2Table2P->Show();
		dataTable[14] = !dataTable[14];
	}
	private: System::Void E3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table2P->Hide();
		E3Table2PGreen->Show();
		dataTable[15] = !dataTable[15];
	}
	private: System::Void E3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		E3Table2PGreen->Hide();
		E3Table2P->Show();
		dataTable[15] = !dataTable[15];
	}
	private: System::Void F1Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F1Table4P->Hide();
		F1Table4PGreen->Show();
		dataTable[16] = !dataTable[16];
	}
	private: System::Void F1Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F1Table4PGreen->Hide();
		F1Table4P->Show();
		dataTable[16] = !dataTable[16];
	}
	private: System::Void F2Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F2Table4P->Hide();
		F2Table4PGreen->Show();
		dataTable[17] = !dataTable[17];
	}
	private: System::Void F2Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F2Table4PGreen->Hide();
		F2Table4P->Show();
		dataTable[17] = !dataTable[17];
	}
	private: System::Void F3Table4P_Click(System::Object^ sender, System::EventArgs^ e) {
		F3Table4P->Hide();
		F3Table4PGreen->Show();
		dataTable[18] = !dataTable[18];
	}
	private: System::Void F3Table4PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		F3Table4PGreen->Hide();
		F3Table4P->Show();
		dataTable[18] = !dataTable[18];
	}
	private: System::Void G1Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G1Table2P->Hide();
		G1Table2PGreen->Show();
		dataTable[19] = !dataTable[19];
	}
	private: System::Void G1Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G1Table2PGreen->Hide();
		G1Table2P->Show();
		dataTable[19] = !dataTable[19];
	}
	private: System::Void G2Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G2Table2P->Hide();
		G2Table2PGreen->Show();
		dataTable[20] = !dataTable[20];
	}
	private: System::Void G2Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G2Table2PGreen->Hide();
		G2Table2P->Show();
		dataTable[20] = !dataTable[20];
	}
	private: System::Void G3Table2P_Click(System::Object^ sender, System::EventArgs^ e) {
		G3Table2P->Hide();
		G3Table2PGreen->Show();
		dataTable[21] = !dataTable[21];
	}
	private: System::Void G3Table2PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		G3Table2PGreen->Hide();
		G3Table2P->Show();
		dataTable[21] = !dataTable[21];
	}
	private: System::Void H1Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H1Table1P->Hide();
		H1Table1PGreen->Show();
		dataTable[22] = !dataTable[22];
	}
	private: System::Void H1Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H1Table1PGreen->Hide();
		H1Table1P->Show();
		dataTable[22] = !dataTable[22];
	}
	private: System::Void H2Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H2Table1P->Hide();
		H2Table1PGreen->Show();
		dataTable[23] = !dataTable[23];
	}
	private: System::Void H2Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H2Table1PGreen->Hide();
		H2Table1P->Show();
		dataTable[23] = !dataTable[23];
	}
	private: System::Void H3Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H3Table1P->Hide();
		H3Table1PGreen->Show();
		dataTable[24] = !dataTable[24];
	}
	private: System::Void H3Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H3Table1PGreen->Hide();
		H3Table1P->Show();
		dataTable[24] = !dataTable[24];
	}
	private: System::Void H4Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H4Table1P->Hide();
		H4Table1PGreen->Show();
		dataTable[25] = !dataTable[25];
	}
	private: System::Void H4Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H4Table1PGreen->Hide();
		H4Table1P->Show();
		dataTable[25] = !dataTable[25];
	}
	private: System::Void H5Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H5Table1P->Hide();
		H5Table1PGreen->Show();
		dataTable[26] = !dataTable[26];
	}
	private: System::Void H5Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H5Table1PGreen->Hide();
		H5Table1P->Show();
		dataTable[26] = !dataTable[26];
	}
	private: System::Void H6Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H6Table1P->Hide();
		H6Table1PGreen->Show();
		dataTable[27] = !dataTable[27];
	}
	private: System::Void H6Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H6Table1PGreen->Hide();
		H6Table1P->Show();
		dataTable[27] = !dataTable[27];
	}
	private: System::Void H7Table1P_Click(System::Object^ sender, System::EventArgs^ e) {
		H7Table1P->Hide();
		H7Table1PGreen->Show();
		dataTable[28] = !dataTable[28];
	}
	private: System::Void H7Table1PGreen_Click(System::Object^ sender, System::EventArgs^ e) {
		H7Table1PGreen->Hide();
		H7Table1P->Show();
		dataTable[28] = !dataTable[28];
	}

	public: bool switchToMP = false;

	private: System::Void ConfirmTableNo1_Click(System::Object^ sender, System::EventArgs^ e) {
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
		switchToMP = true;
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
		fileOutUser << "BarName: " << "Garpanya ";
		for (int i = 0; i < dataTable->Length; i++)
		{
			if (dataTable[i]) //fileOutUser << to_string(i) << " ";
			{
				switch (i)
				{
				case 0: fileOutUser << "A1Table2P" << " "; break;
				case 1: fileOutUser << "A2Table2P" << " "; break;
				case 2: fileOutUser << "A3Table2P" << " "; break;
				case 3: fileOutUser << "B1Table2P" << " "; break;
				case 4: fileOutUser << "B2Table4P" << " "; break;
				case 5: fileOutUser << "B3Table4P" << " "; break;
				case 6: fileOutUser << "B4Table4P" << " "; break;
				case 7: fileOutUser << "C1Table2P" << " "; break;
				case 8: fileOutUser << "C2Table2P" << " "; break;
				case 9: fileOutUser << "C3Table2P" << " "; break;
				case 10: fileOutUser << "D1Table4P" << " "; break;
				case 11: fileOutUser << "D2Table4P" << " "; break;
				case 12: fileOutUser << "D3Table4P" << " "; break;
				case 13: fileOutUser << "E1Table2P" << " "; break;
				case 14: fileOutUser << "E2Table2P" << " "; break;
				case 15: fileOutUser << "E3Table2P" << " "; break;
				case 16: fileOutUser << "F1Table4P" << " "; break;
				case 17: fileOutUser << "F2Table4P" << " "; break;
				case 18: fileOutUser << "F3Table4P" << " "; break;
				case 19: fileOutUser << "G1Table2P" << " "; break;
				case 20: fileOutUser << "G2Table2P" << " "; break;
				case 21: fileOutUser << "G3Table2P" << " "; break;
				case 22: fileOutUser << "H1Table1P" << " "; break;
				case 23: fileOutUser << "H2Table1P" << " "; break;
				case 24: fileOutUser << "H3Table1P" << " "; break;
				case 25: fileOutUser << "H4Table1P" << " "; break;
				case 26: fileOutUser << "H5Table1P" << " "; break;
				case 27: fileOutUser << "H6Table1P" << " "; break;
				case 28: fileOutUser << "H7Table1P" << " "; break;
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
	private: System::Void A1Table2PFull_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //array<bool>^ dataTable;

	public: bool switchToProfile = false;
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToProfile = true;
		this->Close();
	}


	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Hide();
	} // No-ButtonCode

	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
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
	} //YesButtonCode
	private: System::Void A2Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 1;
		}
	}
	private: System::Void A1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 0;
		}
	}

	private: System::Void A3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 2;
		}
	}
	private: System::Void B1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 3;
		}
	}
	private: System::Void B2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 4;
		}
	}
	private: System::Void B3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 5;
		}
	}
	private: System::Void B4Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 6;
		}
	}
	private: System::Void C1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 7;
		}
	}
	private: System::Void C2Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 8;
		}
	}
	private: System::Void C3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 9;
		}
	}
	private: System::Void D1Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 10;
		}
	}
	private: System::Void D2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 11;
		}
	}
	private: System::Void D3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 12;
		}
	}
	private: System::Void E1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 13;
		}
	}
	private: System::Void E2Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 14;
		}
	}
	private: System::Void E3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 15;
		}
	}
	private: System::Void F1Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 16;
		}
	}
	private: System::Void F2Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 17;
		}
	}
	private: System::Void F3Table4PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 18;
		}
	}
	private: System::Void G1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 19;
		}
	}
	private: System::Void G2Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 20;
		}
	}
	private: System::Void G3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 21;
		}
	}
	private: System::Void H1Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 22;
		}
	}
	private: System::Void H2Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 23;
		}
	}
	private: System::Void H3Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 24;
		}
	}
	private: System::Void H4Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 25;
		}
	}
	private: System::Void H5Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 26;
		}
	}
	private: System::Void H6Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 27;
		}
	}
	private: System::Void H7Table1PRed_Click(System::Object^ sender, System::EventArgs^ e) {
		if (username == "admin") {
			panel1->Show();
			tableSelect = 28;
		}
	}
	private: System::Void BarGarpanya_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		if (e->KeyCode == Keys::Escape)
		{
			panel2->Show();
			//Application::Exit(); 
		}
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
		panel2->Hide();
	}
	public: bool switchToToey = false;
	private: System::Void HomeBTN_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToToey = true;
		this->Close();
	}
	};
}
