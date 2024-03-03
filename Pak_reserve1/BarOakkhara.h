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
	using namespace System::Text;

	using namespace System::IO;

	/// <summary>
	/// Summary for BarOakkhara
	/// </summary>
	public ref class BarOakkhara : public System::Windows::Forms::Form
	{

	StringBuilder^ a = gcnew StringBuilder("00000000000000000000000000000");
	array<bool>^ dataTable;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
		   int targetline = 6;

	public:
		BarOakkhara(void)
		{
			InitializeComponent();
			array<int>^ reservedTable = {};
			//
			//TODO: Add the constructor code here
			//
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

			UpdateTable();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BarOakkhara()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ F3Table4PRed;
	protected:
	private: System::Windows::Forms::PictureBox^ F2Table4PRed;
	private: System::Windows::Forms::PictureBox^ F1Table4PRed;
	private: System::Windows::Forms::PictureBox^ D3Table4PRed;
	private: System::Windows::Forms::PictureBox^ D2Table4PRed;
	private: System::Windows::Forms::PictureBox^ D1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B4Table4PRed;
	private: System::Windows::Forms::PictureBox^ B3Table4PRed;
	private: System::Windows::Forms::PictureBox^ B2Table4PRed;
	private: System::Windows::Forms::PictureBox^ H7Table1PRed;
	private: System::Windows::Forms::PictureBox^ H6Table1PRed;
	private: System::Windows::Forms::PictureBox^ H5Table1PRed;
	private: System::Windows::Forms::PictureBox^ H4Table1PRed;
	private: System::Windows::Forms::PictureBox^ H3Table1PRed;
	private: System::Windows::Forms::PictureBox^ H2Table1PRed;
	private: System::Windows::Forms::PictureBox^ H1Table1PRed;
	private: System::Windows::Forms::PictureBox^ B1Table2PRed;
	private: System::Windows::Forms::PictureBox^ G3Table2PRed;
	private: System::Windows::Forms::PictureBox^ G2Table2PRed;
	private: System::Windows::Forms::PictureBox^ G1Table2PRed;
	private: System::Windows::Forms::PictureBox^ E3Table2PRed;
	private: System::Windows::Forms::PictureBox^ E2Table2PRed;
	private: System::Windows::Forms::PictureBox^ E1Table2PRed;
	private: System::Windows::Forms::PictureBox^ C3Table2PRed;
	private: System::Windows::Forms::PictureBox^ C2Table2PRed;
	private: System::Windows::Forms::PictureBox^ C1Table2PRed;
	private: System::Windows::Forms::PictureBox^ A3Table2PRed;
	private: System::Windows::Forms::PictureBox^ A2Table2PRed;
	private: System::Windows::Forms::PictureBox^ A1Table2PRed;
	private: System::Windows::Forms::PictureBox^ H7Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H7Table1P;
	private: System::Windows::Forms::PictureBox^ H6Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H6Table1P;
	private: System::Windows::Forms::PictureBox^ H5Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H5Table1P;
	private: System::Windows::Forms::PictureBox^ H4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H4Table1P;
	private: System::Windows::Forms::PictureBox^ H3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H3Table1P;
	private: System::Windows::Forms::PictureBox^ H2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H2Table1P;
	private: System::Windows::Forms::PictureBox^ H1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ H1Table1P;
	private: System::Windows::Forms::PictureBox^ G3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G3Table2P;
	private: System::Windows::Forms::PictureBox^ G2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G2Table2P;
	private: System::Windows::Forms::PictureBox^ G1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ G1Table2P;
	private: System::Windows::Forms::PictureBox^ F3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F3Table4P;
	private: System::Windows::Forms::PictureBox^ F2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F2Table4P;
	private: System::Windows::Forms::PictureBox^ F1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ F1Table4P;
	private: System::Windows::Forms::PictureBox^ E3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E3Table2P;
	private: System::Windows::Forms::PictureBox^ E2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E2Table2P;
	private: System::Windows::Forms::PictureBox^ E1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ E1Table2P;
	private: System::Windows::Forms::PictureBox^ D3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table4P;
	private: System::Windows::Forms::PictureBox^ D2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table4P;
	private: System::Windows::Forms::PictureBox^ D1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D1Table4P;
	private: System::Windows::Forms::PictureBox^ C3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table2P;
	private: System::Windows::Forms::PictureBox^ C2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table2P;
	private: System::Windows::Forms::PictureBox^ C1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ C1Table2P;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ B3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table4P;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table2P;
	private: System::Windows::Forms::PictureBox^ A3Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table2P;
	private: System::Windows::Forms::PictureBox^ A2Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A1Table2PGreen;
	private: System::Windows::Forms::PictureBox^ A1Table2P;
	private: System::Windows::Forms::PictureBox^ ConfirmTableNo1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ A2Table2P;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarOakkhara::typeid));
			this->F3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PRed = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H7Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H6Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H5Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->H1Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->G1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->F1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->ConfirmTableNo1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->A2Table2P = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
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
			this->F3Table4PRed->TabIndex = 182;
			this->F3Table4PRed->TabStop = false;
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
			this->F2Table4PRed->TabIndex = 181;
			this->F2Table4PRed->TabStop = false;
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
			this->F1Table4PRed->TabIndex = 180;
			this->F1Table4PRed->TabStop = false;
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
			this->D3Table4PRed->TabIndex = 179;
			this->D3Table4PRed->TabStop = false;
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
			this->D2Table4PRed->TabIndex = 178;
			this->D2Table4PRed->TabStop = false;
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
			this->D1Table4PRed->TabIndex = 177;
			this->D1Table4PRed->TabStop = false;
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
			this->B4Table4PRed->TabIndex = 176;
			this->B4Table4PRed->TabStop = false;
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
			this->B3Table4PRed->TabIndex = 175;
			this->B3Table4PRed->TabStop = false;
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
			this->B2Table4PRed->TabIndex = 174;
			this->B2Table4PRed->TabStop = false;
			// 
			// H7Table1PRed
			// 
			this->H7Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1PRed.BackgroundImage")));
			this->H7Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H7Table1PRed->Location = System::Drawing::Point(1082, 506);
			this->H7Table1PRed->Name = L"H7Table1PRed";
			this->H7Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H7Table1PRed->TabIndex = 173;
			this->H7Table1PRed->TabStop = false;
			// 
			// H6Table1PRed
			// 
			this->H6Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1PRed.BackgroundImage")));
			this->H6Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H6Table1PRed->Location = System::Drawing::Point(1082, 478);
			this->H6Table1PRed->Name = L"H6Table1PRed";
			this->H6Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H6Table1PRed->TabIndex = 172;
			this->H6Table1PRed->TabStop = false;
			// 
			// H5Table1PRed
			// 
			this->H5Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1PRed.BackgroundImage")));
			this->H5Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H5Table1PRed->Location = System::Drawing::Point(1082, 450);
			this->H5Table1PRed->Name = L"H5Table1PRed";
			this->H5Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H5Table1PRed->TabIndex = 171;
			this->H5Table1PRed->TabStop = false;
			// 
			// H4Table1PRed
			// 
			this->H4Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1PRed.BackgroundImage")));
			this->H4Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H4Table1PRed->Location = System::Drawing::Point(1082, 422);
			this->H4Table1PRed->Name = L"H4Table1PRed";
			this->H4Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H4Table1PRed->TabIndex = 170;
			this->H4Table1PRed->TabStop = false;
			// 
			// H3Table1PRed
			// 
			this->H3Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1PRed.BackgroundImage")));
			this->H3Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H3Table1PRed->Location = System::Drawing::Point(1082, 394);
			this->H3Table1PRed->Name = L"H3Table1PRed";
			this->H3Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H3Table1PRed->TabIndex = 169;
			this->H3Table1PRed->TabStop = false;
			// 
			// H2Table1PRed
			// 
			this->H2Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1PRed.BackgroundImage")));
			this->H2Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H2Table1PRed->Location = System::Drawing::Point(1082, 366);
			this->H2Table1PRed->Name = L"H2Table1PRed";
			this->H2Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H2Table1PRed->TabIndex = 168;
			this->H2Table1PRed->TabStop = false;
			// 
			// H1Table1PRed
			// 
			this->H1Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1PRed->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1PRed.BackgroundImage")));
			this->H1Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1PRed->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->H1Table1PRed->Location = System::Drawing::Point(1082, 339);
			this->H1Table1PRed->Name = L"H1Table1PRed";
			this->H1Table1PRed->Size = System::Drawing::Size(27, 29);
			this->H1Table1PRed->TabIndex = 167;
			this->H1Table1PRed->TabStop = false;
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
			this->B1Table2PRed->TabIndex = 166;
			this->B1Table2PRed->TabStop = false;
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
			this->G3Table2PRed->TabIndex = 165;
			this->G3Table2PRed->TabStop = false;
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
			this->G2Table2PRed->TabIndex = 164;
			this->G2Table2PRed->TabStop = false;
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
			this->G1Table2PRed->TabIndex = 163;
			this->G1Table2PRed->TabStop = false;
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
			this->E3Table2PRed->TabIndex = 162;
			this->E3Table2PRed->TabStop = false;
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
			this->E2Table2PRed->TabIndex = 161;
			this->E2Table2PRed->TabStop = false;
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
			this->E1Table2PRed->TabIndex = 160;
			this->E1Table2PRed->TabStop = false;
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
			this->C3Table2PRed->TabIndex = 159;
			this->C3Table2PRed->TabStop = false;
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
			this->C2Table2PRed->TabIndex = 158;
			this->C2Table2PRed->TabStop = false;
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
			this->C1Table2PRed->TabIndex = 157;
			this->C1Table2PRed->TabStop = false;
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
			this->A3Table2PRed->TabIndex = 156;
			this->A3Table2PRed->TabStop = false;
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
			this->A2Table2PRed->TabIndex = 155;
			this->A2Table2PRed->TabStop = false;
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
			this->A1Table2PRed->TabIndex = 154;
			this->A1Table2PRed->TabStop = false;
			// 
			// H7Table1PGreen
			// 
			this->H7Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1PGreen.BackgroundImage")));
			this->H7Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1PGreen->Location = System::Drawing::Point(1082, 506);
			this->H7Table1PGreen->Name = L"H7Table1PGreen";
			this->H7Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H7Table1PGreen->TabIndex = 153;
			this->H7Table1PGreen->TabStop = false;
			// 
			// H7Table1P
			// 
			this->H7Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H7Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H7Table1P.BackgroundImage")));
			this->H7Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H7Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H7Table1P->Location = System::Drawing::Point(1082, 506);
			this->H7Table1P->Name = L"H7Table1P";
			this->H7Table1P->Size = System::Drawing::Size(27, 29);
			this->H7Table1P->TabIndex = 152;
			this->H7Table1P->TabStop = false;
			// 
			// H6Table1PGreen
			// 
			this->H6Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1PGreen.BackgroundImage")));
			this->H6Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1PGreen->Location = System::Drawing::Point(1082, 478);
			this->H6Table1PGreen->Name = L"H6Table1PGreen";
			this->H6Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H6Table1PGreen->TabIndex = 151;
			this->H6Table1PGreen->TabStop = false;
			// 
			// H6Table1P
			// 
			this->H6Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H6Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H6Table1P.BackgroundImage")));
			this->H6Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H6Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H6Table1P->Location = System::Drawing::Point(1082, 478);
			this->H6Table1P->Name = L"H6Table1P";
			this->H6Table1P->Size = System::Drawing::Size(27, 29);
			this->H6Table1P->TabIndex = 150;
			this->H6Table1P->TabStop = false;
			// 
			// H5Table1PGreen
			// 
			this->H5Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1PGreen.BackgroundImage")));
			this->H5Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1PGreen->Location = System::Drawing::Point(1082, 450);
			this->H5Table1PGreen->Name = L"H5Table1PGreen";
			this->H5Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H5Table1PGreen->TabIndex = 149;
			this->H5Table1PGreen->TabStop = false;
			// 
			// H5Table1P
			// 
			this->H5Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H5Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H5Table1P.BackgroundImage")));
			this->H5Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H5Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H5Table1P->Location = System::Drawing::Point(1082, 450);
			this->H5Table1P->Name = L"H5Table1P";
			this->H5Table1P->Size = System::Drawing::Size(27, 29);
			this->H5Table1P->TabIndex = 148;
			this->H5Table1P->TabStop = false;
			// 
			// H4Table1PGreen
			// 
			this->H4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1PGreen.BackgroundImage")));
			this->H4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1PGreen->Location = System::Drawing::Point(1082, 422);
			this->H4Table1PGreen->Name = L"H4Table1PGreen";
			this->H4Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H4Table1PGreen->TabIndex = 147;
			this->H4Table1PGreen->TabStop = false;
			// 
			// H4Table1P
			// 
			this->H4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H4Table1P.BackgroundImage")));
			this->H4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H4Table1P->Location = System::Drawing::Point(1082, 422);
			this->H4Table1P->Name = L"H4Table1P";
			this->H4Table1P->Size = System::Drawing::Size(27, 29);
			this->H4Table1P->TabIndex = 146;
			this->H4Table1P->TabStop = false;
			// 
			// H3Table1PGreen
			// 
			this->H3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1PGreen.BackgroundImage")));
			this->H3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1PGreen->Location = System::Drawing::Point(1082, 394);
			this->H3Table1PGreen->Name = L"H3Table1PGreen";
			this->H3Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H3Table1PGreen->TabIndex = 145;
			this->H3Table1PGreen->TabStop = false;
			// 
			// H3Table1P
			// 
			this->H3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H3Table1P.BackgroundImage")));
			this->H3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H3Table1P->Location = System::Drawing::Point(1082, 394);
			this->H3Table1P->Name = L"H3Table1P";
			this->H3Table1P->Size = System::Drawing::Size(27, 29);
			this->H3Table1P->TabIndex = 144;
			this->H3Table1P->TabStop = false;
			// 
			// H2Table1PGreen
			// 
			this->H2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1PGreen.BackgroundImage")));
			this->H2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1PGreen->Location = System::Drawing::Point(1082, 366);
			this->H2Table1PGreen->Name = L"H2Table1PGreen";
			this->H2Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H2Table1PGreen->TabIndex = 143;
			this->H2Table1PGreen->TabStop = false;
			// 
			// H2Table1P
			// 
			this->H2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H2Table1P.BackgroundImage")));
			this->H2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H2Table1P->Location = System::Drawing::Point(1082, 366);
			this->H2Table1P->Name = L"H2Table1P";
			this->H2Table1P->Size = System::Drawing::Size(27, 29);
			this->H2Table1P->TabIndex = 142;
			this->H2Table1P->TabStop = false;
			// 
			// H1Table1PGreen
			// 
			this->H1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1PGreen.BackgroundImage")));
			this->H1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1PGreen->Location = System::Drawing::Point(1082, 339);
			this->H1Table1PGreen->Name = L"H1Table1PGreen";
			this->H1Table1PGreen->Size = System::Drawing::Size(27, 29);
			this->H1Table1PGreen->TabIndex = 141;
			this->H1Table1PGreen->TabStop = false;
			// 
			// H1Table1P
			// 
			this->H1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->H1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"H1Table1P.BackgroundImage")));
			this->H1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->H1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->H1Table1P->Location = System::Drawing::Point(1082, 339);
			this->H1Table1P->Name = L"H1Table1P";
			this->H1Table1P->Size = System::Drawing::Size(27, 29);
			this->H1Table1P->TabIndex = 140;
			this->H1Table1P->TabStop = false;
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
			this->G3Table2PGreen->TabIndex = 139;
			this->G3Table2PGreen->TabStop = false;
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
			this->G3Table2P->TabIndex = 138;
			this->G3Table2P->TabStop = false;
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
			this->G2Table2PGreen->TabIndex = 137;
			this->G2Table2PGreen->TabStop = false;
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
			this->G2Table2P->TabIndex = 136;
			this->G2Table2P->TabStop = false;
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
			this->G1Table2PGreen->TabIndex = 135;
			this->G1Table2PGreen->TabStop = false;
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
			this->G1Table2P->TabIndex = 134;
			this->G1Table2P->TabStop = false;
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
			this->F3Table4PGreen->TabIndex = 133;
			this->F3Table4PGreen->TabStop = false;
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
			this->F3Table4P->TabIndex = 132;
			this->F3Table4P->TabStop = false;
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
			this->F2Table4PGreen->TabIndex = 131;
			this->F2Table4PGreen->TabStop = false;
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
			this->F2Table4P->TabIndex = 130;
			this->F2Table4P->TabStop = false;
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
			this->F1Table4PGreen->TabIndex = 129;
			this->F1Table4PGreen->TabStop = false;
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
			this->F1Table4P->TabIndex = 128;
			this->F1Table4P->TabStop = false;
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
			this->E3Table2PGreen->TabIndex = 127;
			this->E3Table2PGreen->TabStop = false;
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
			this->E3Table2P->TabIndex = 126;
			this->E3Table2P->TabStop = false;
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
			this->E2Table2PGreen->TabIndex = 125;
			this->E2Table2PGreen->TabStop = false;
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
			this->E2Table2P->TabIndex = 124;
			this->E2Table2P->TabStop = false;
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
			this->E1Table2PGreen->TabIndex = 123;
			this->E1Table2PGreen->TabStop = false;
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
			this->E1Table2P->TabIndex = 122;
			this->E1Table2P->TabStop = false;
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
			this->D3Table4PGreen->TabIndex = 121;
			this->D3Table4PGreen->TabStop = false;
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
			this->D3Table4P->TabIndex = 120;
			this->D3Table4P->TabStop = false;
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
			this->D2Table4PGreen->TabIndex = 119;
			this->D2Table4PGreen->TabStop = false;
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
			this->D2Table4P->TabIndex = 118;
			this->D2Table4P->TabStop = false;
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
			this->D1Table4PGreen->TabIndex = 117;
			this->D1Table4PGreen->TabStop = false;
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
			this->D1Table4P->TabIndex = 116;
			this->D1Table4P->TabStop = false;
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
			this->C3Table2PGreen->TabIndex = 115;
			this->C3Table2PGreen->TabStop = false;
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
			this->C3Table2P->TabIndex = 114;
			this->C3Table2P->TabStop = false;
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
			this->C2Table2PGreen->TabIndex = 113;
			this->C2Table2PGreen->TabStop = false;
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
			this->C2Table2P->TabIndex = 112;
			this->C2Table2P->TabStop = false;
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
			this->C1Table2PGreen->TabIndex = 111;
			this->C1Table2PGreen->TabStop = false;
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
			this->C1Table2P->TabIndex = 110;
			this->C1Table2P->TabStop = false;
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
			this->B4Table4PGreen->TabIndex = 109;
			this->B4Table4PGreen->TabStop = false;
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
			this->B4Table4P->TabIndex = 108;
			this->B4Table4P->TabStop = false;
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
			this->B3Table4PGreen->TabIndex = 107;
			this->B3Table4PGreen->TabStop = false;
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
			this->B3Table4P->TabIndex = 106;
			this->B3Table4P->TabStop = false;
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
			this->B2Table4PGreen->TabIndex = 105;
			this->B2Table4PGreen->TabStop = false;
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
			this->B2Table4P->TabIndex = 104;
			this->B2Table4P->TabStop = false;
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
			this->B1Table2PGreen->TabIndex = 103;
			this->B1Table2PGreen->TabStop = false;
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
			this->B1Table2P->TabIndex = 102;
			this->B1Table2P->TabStop = false;
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
			this->A3Table2PGreen->TabIndex = 101;
			this->A3Table2PGreen->TabStop = false;
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
			this->A3Table2P->TabIndex = 100;
			this->A3Table2P->TabStop = false;
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
			this->A2Table2PGreen->TabIndex = 98;
			this->A2Table2PGreen->TabStop = false;
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
			this->A1Table2PGreen->TabIndex = 97;
			this->A1Table2PGreen->TabStop = false;
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
			this->A1Table2P->TabIndex = 96;
			this->A1Table2P->TabStop = false;
			this->A1Table2P->Click += gcnew System::EventHandler(this, &BarOakkhara::A1Table2P_Click);
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
			this->ConfirmTableNo1->TabIndex = 95;
			this->ConfirmTableNo1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(143, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 94;
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
			this->A2Table2P->TabIndex = 99;
			this->A2Table2P->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(22, 18);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(53, 21);
			this->pictureBox1->TabIndex = 183;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &BarOakkhara::pictureBox1_Click);
			// 
			// BarOakkhara
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->pictureBox1);
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
			this->Name = L"BarOakkhara";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BarOakkhara";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H7Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H6Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H5Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->H1Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->G1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->F1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableNo1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table2P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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
		using namespace std;
		int BarNo = 6;

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
		if (line[1] == '1') {
			a[1] = '1';
			A2Table2PRed->Show();
			A2Table2P->Hide();
		}
		if (line[2] == '1') {
			a[2] = '1';
			A3Table2PRed->Show();
			A3Table2P->Hide();
		}
		if (line[3] == '1') {
			a[3] = '1';
			B1Table2PRed->Show();
			B1Table2P->Hide();
		}
		if (line[4] == '1') {
			a[4] = '1';
			B2Table4PRed->Show();
			B2Table4P->Hide();
		}
		if (line[5] == '1') {
			a[5] = '1';
			B3Table4PRed->Show();
			B3Table4P->Hide();
		}
		if (line[6] == '1') {
			a[6] = '1';
			B4Table4PRed->Show();
			B4Table4P->Hide();
		}
		if (line[7] == '1') {
			a[7] = '1';
			C1Table2PRed->Show();
			C1Table2P->Hide();
		}
		if (line[8] == '1') {
			a[8] = '1';
			C2Table2PRed->Show();
			C2Table2P->Hide();
		}
		if (line[9] == '1') {
			a[9] = '1';
			C3Table2PRed->Show();
			C3Table2P->Hide();
		}
		if (line[10] == '1') {
			a[10] = '1';
			D1Table4PRed->Show();
			D1Table4P->Hide();
		}
		if (line[11] == '1') {
			a[11] = '1';
			D2Table4PRed->Show();
			D2Table4P->Hide();
		}
		if (line[12] == '1') {
			a[12] = '1';
			D3Table4PRed->Show();
			D3Table4P->Hide();
		}
		if (line[13] == '1') {
			a[13] = '1';
			E1Table2PRed->Show();
			E1Table2P->Hide();
		}
		if (line[14] == '1') {
			a[14] = '1';
			E2Table2PRed->Show();
			E2Table2P->Hide();
		}
		if (line[15] == '1') {
			a[15] = '1';
			E3Table2PRed->Show();
			E3Table2P->Hide();
		}
		if (line[16] == '1') {
			a[16] = '1';
			F1Table4PRed->Show();
			F1Table4P->Hide();
		}
		if (line[17] == '1') {
			a[17] = '1';
			F2Table4PRed->Show();
			F2Table4P->Hide();
		}
		if (line[18] == '1') {
			a[18] = '1';
			F3Table4PRed->Show();
			F3Table4P->Hide();
		}
		if (line[19] == '1') {
			a[19] = '1';
			G1Table2PRed->Show();
			G1Table2P->Hide();
		}
		if (line[20] == '1') {
			a[20] = '1';
			G2Table2PRed->Show();
			G2Table2P->Hide();
		}
		if (line[21] == '1') {
			a[21] = '1';
			G3Table2PRed->Show();
			G3Table2P->Hide();
		}
		if (line[22] == '1') {
			a[22] = '1';
			H1Table1PRed->Show();
			H1Table1P->Hide();
		}
		if (line[23] == '1') {
			a[23] = '1';
			H2Table1PRed->Show();
			H2Table1P->Hide();
		}
		if (line[24] == '1') {
			a[24] = '1';
			H3Table1PRed->Show();
			H3Table1P->Hide();
		}
		if (line[25] == '1') {
			a[25] = '1';
			H4Table1PRed->Show();
			H4Table1P->Hide();
		}
		if (line[26] == '1') {
			a[26] = '1';
			H5Table1PRed->Show();
			H5Table1P->Hide();
		}
		if (line[27] == '1') {
			a[27] = '1';
			H6Table1PRed->Show();
			H6Table1P->Hide();
		}
		if (line[28] == '1') {
			a[28] = '1';
			H7Table1PRed->Show();
			H7Table1P->Hide();
		}
		//label1->Text = gcnew String(line.c_str());
	}
#pragma endregion
	bool A1Table2PGreenCheck = true;
	private: System::Void PakForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
private: System::Void C3Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void A1Table2PRed_Click(System::Object^ sender, System::EventArgs^ e) {
}
public: bool switchToToey = false;
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToToey = true;
	this->Close();
}
};
}