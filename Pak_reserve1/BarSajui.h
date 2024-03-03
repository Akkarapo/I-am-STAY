#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for BarSajui
	/// </summary>
	public ref class BarSajui : public System::Windows::Forms::Form
	{
	public:
		BarSajui(void)
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
		~BarSajui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ ConfirmTableBarMapraw;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ B6Table6PRed;
	private: System::Windows::Forms::PictureBox^ B6Table6PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table6PRed;
	private: System::Windows::Forms::PictureBox^ C3Table4PRed;
	private: System::Windows::Forms::PictureBox^ C2Table4PRed;
	private: System::Windows::Forms::PictureBox^ C1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B5Table4PRed;
	private: System::Windows::Forms::PictureBox^ B4Table4PRed;
	private: System::Windows::Forms::PictureBox^ B1Table4PRed;
	private: System::Windows::Forms::PictureBox^ B2Table4PRed;
	private: System::Windows::Forms::PictureBox^ E1Table4PRed;
	private: System::Windows::Forms::PictureBox^ E2Table4PRed;
	private: System::Windows::Forms::PictureBox^ E3Table4PRed;
	private: System::Windows::Forms::PictureBox^ E4Table4PRed;
	private: System::Windows::Forms::PictureBox^ D2Table4PRed;
	private: System::Windows::Forms::PictureBox^ D3Table4PRed;
	private: System::Windows::Forms::PictureBox^ D1Table4PRed;
	private: System::Windows::Forms::PictureBox^ A3Table1PRed;
	private: System::Windows::Forms::PictureBox^ A4Table1PRed;
	private: System::Windows::Forms::PictureBox^ A2Table1PRed;
	private: System::Windows::Forms::PictureBox^ A1Table1PRed;
	private: System::Windows::Forms::PictureBox^ E4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ E1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ D1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C3Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ C1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B5Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B4Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B3Table6PGreen;
	private: System::Windows::Forms::PictureBox^ B2Table4PGreen;
	private: System::Windows::Forms::PictureBox^ B1Table4PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A3Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A2Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A1Table1PGreen;
	private: System::Windows::Forms::PictureBox^ A4Table1P;
	private: System::Windows::Forms::PictureBox^ E4Table4P;
	private: System::Windows::Forms::PictureBox^ E3Table4P;
	private: System::Windows::Forms::PictureBox^ E2Table4P;
	private: System::Windows::Forms::PictureBox^ E1Table4P;
	private: System::Windows::Forms::PictureBox^ D3Table4P;
	private: System::Windows::Forms::PictureBox^ D2Table4P;
	private: System::Windows::Forms::PictureBox^ D1Table4P;
	private: System::Windows::Forms::PictureBox^ C3Table4P;
	private: System::Windows::Forms::PictureBox^ C2Table4P;
	private: System::Windows::Forms::PictureBox^ C1Table4P;
	private: System::Windows::Forms::PictureBox^ B6Table6P;
	private: System::Windows::Forms::PictureBox^ B5Table4P;
	private: System::Windows::Forms::PictureBox^ B4Table4P;
	private: System::Windows::Forms::PictureBox^ B3Table6P;
	private: System::Windows::Forms::PictureBox^ B2Table4P;
	private: System::Windows::Forms::PictureBox^ B1Table4P;
	private: System::Windows::Forms::PictureBox^ A3Table1P;
	private: System::Windows::Forms::PictureBox^ A2Table1P;
	private: System::Windows::Forms::PictureBox^ A1Table1P;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BarSajui::typeid));
			this->ConfirmTableBarMapraw = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PRed = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1PGreen = (gcnew System::Windows::Forms::PictureBox());
			this->A4Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->E4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->E1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->D1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C3Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->C1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B6Table6P = (gcnew System::Windows::Forms::PictureBox());
			this->B5Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B4Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B3Table6P = (gcnew System::Windows::Forms::PictureBox());
			this->B2Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->B1Table4P = (gcnew System::Windows::Forms::PictureBox());
			this->A3Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A2Table1P = (gcnew System::Windows::Forms::PictureBox());
			this->A1Table1P = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->BeginInit();
			this->SuspendLayout();
			// 
			// ConfirmTableBarMapraw
			// 
			this->ConfirmTableBarMapraw->BackColor = System::Drawing::Color::Transparent;
			this->ConfirmTableBarMapraw->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmTableBarMapraw.BackgroundImage")));
			this->ConfirmTableBarMapraw->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ConfirmTableBarMapraw->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmTableBarMapraw->Location = System::Drawing::Point(38, 578);
			this->ConfirmTableBarMapraw->Name = L"ConfirmTableBarMapraw";
			this->ConfirmTableBarMapraw->Size = System::Drawing::Size(267, 66);
			this->ConfirmTableBarMapraw->TabIndex = 203;
			this->ConfirmTableBarMapraw->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(437, 237);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(407, 247);
			this->panel1->TabIndex = 202;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(242, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(133, 56);
			this->pictureBox3->TabIndex = 1;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(36, 172);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 56);
			this->pictureBox1->TabIndex = 140;
			this->pictureBox1->TabStop = false;
			// 
			// B6Table6PRed
			// 
			this->B6Table6PRed->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6PRed.Image")));
			this->B6Table6PRed->Location = System::Drawing::Point(888, 436);
			this->B6Table6PRed->Margin = System::Windows::Forms::Padding(4);
			this->B6Table6PRed->Name = L"B6Table6PRed";
			this->B6Table6PRed->Size = System::Drawing::Size(91, 92);
			this->B6Table6PRed->TabIndex = 201;
			this->B6Table6PRed->TabStop = false;
			// 
			// B6Table6PGreen
			// 
			this->B6Table6PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6PGreen.BackgroundImage")));
			this->B6Table6PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6PGreen->Location = System::Drawing::Point(888, 436);
			this->B6Table6PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B6Table6PGreen->Name = L"B6Table6PGreen";
			this->B6Table6PGreen->Size = System::Drawing::Size(91, 92);
			this->B6Table6PGreen->TabIndex = 171;
			this->B6Table6PGreen->TabStop = false;
			// 
			// B3Table6PRed
			// 
			this->B3Table6PRed->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6PRed.Image")));
			this->B3Table6PRed->Location = System::Drawing::Point(688, 436);
			this->B3Table6PRed->Margin = System::Windows::Forms::Padding(4);
			this->B3Table6PRed->Name = L"B3Table6PRed";
			this->B3Table6PRed->Size = System::Drawing::Size(91, 92);
			this->B3Table6PRed->TabIndex = 200;
			this->B3Table6PRed->TabStop = false;
			// 
			// C3Table4PRed
			// 
			this->C3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PRed.Image")));
			this->C3Table4PRed->Location = System::Drawing::Point(1022, 494);
			this->C3Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->C3Table4PRed->Name = L"C3Table4PRed";
			this->C3Table4PRed->Size = System::Drawing::Size(64, 64);
			this->C3Table4PRed->TabIndex = 199;
			this->C3Table4PRed->TabStop = false;
			// 
			// C2Table4PRed
			// 
			this->C2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PRed.Image")));
			this->C2Table4PRed->Location = System::Drawing::Point(1022, 409);
			this->C2Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->C2Table4PRed->Name = L"C2Table4PRed";
			this->C2Table4PRed->Size = System::Drawing::Size(64, 64);
			this->C2Table4PRed->TabIndex = 198;
			this->C2Table4PRed->TabStop = false;
			// 
			// C1Table4PRed
			// 
			this->C1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PRed.Image")));
			this->C1Table4PRed->Location = System::Drawing::Point(1022, 322);
			this->C1Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->C1Table4PRed->Name = L"C1Table4PRed";
			this->C1Table4PRed->Size = System::Drawing::Size(64, 64);
			this->C1Table4PRed->TabIndex = 197;
			this->C1Table4PRed->TabStop = false;
			// 
			// B5Table4PRed
			// 
			this->B5Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PRed.Image")));
			this->B5Table4PRed->Location = System::Drawing::Point(800, 494);
			this->B5Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->B5Table4PRed->Name = L"B5Table4PRed";
			this->B5Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B5Table4PRed->TabIndex = 196;
			this->B5Table4PRed->TabStop = false;
			// 
			// B4Table4PRed
			// 
			this->B4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PRed.Image")));
			this->B4Table4PRed->Location = System::Drawing::Point(800, 409);
			this->B4Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->B4Table4PRed->Name = L"B4Table4PRed";
			this->B4Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B4Table4PRed->TabIndex = 195;
			this->B4Table4PRed->TabStop = false;
			// 
			// B1Table4PRed
			// 
			this->B1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PRed.Image")));
			this->B1Table4PRed->Location = System::Drawing::Point(602, 409);
			this->B1Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->B1Table4PRed->Name = L"B1Table4PRed";
			this->B1Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B1Table4PRed->TabIndex = 194;
			this->B1Table4PRed->TabStop = false;
			// 
			// B2Table4PRed
			// 
			this->B2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PRed.Image")));
			this->B2Table4PRed->Location = System::Drawing::Point(602, 494);
			this->B2Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->B2Table4PRed->Name = L"B2Table4PRed";
			this->B2Table4PRed->Size = System::Drawing::Size(64, 64);
			this->B2Table4PRed->TabIndex = 193;
			this->B2Table4PRed->TabStop = false;
			// 
			// E1Table4PRed
			// 
			this->E1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4PRed.Image")));
			this->E1Table4PRed->Location = System::Drawing::Point(642, 602);
			this->E1Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->E1Table4PRed->Name = L"E1Table4PRed";
			this->E1Table4PRed->Size = System::Drawing::Size(80, 66);
			this->E1Table4PRed->TabIndex = 192;
			this->E1Table4PRed->TabStop = false;
			// 
			// E2Table4PRed
			// 
			this->E2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4PRed.Image")));
			this->E2Table4PRed->Location = System::Drawing::Point(764, 602);
			this->E2Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->E2Table4PRed->Name = L"E2Table4PRed";
			this->E2Table4PRed->Size = System::Drawing::Size(80, 66);
			this->E2Table4PRed->TabIndex = 191;
			this->E2Table4PRed->TabStop = false;
			// 
			// E3Table4PRed
			// 
			this->E3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4PRed.Image")));
			this->E3Table4PRed->Location = System::Drawing::Point(890, 602);
			this->E3Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->E3Table4PRed->Name = L"E3Table4PRed";
			this->E3Table4PRed->Size = System::Drawing::Size(80, 66);
			this->E3Table4PRed->TabIndex = 190;
			this->E3Table4PRed->TabStop = false;
			// 
			// E4Table4PRed
			// 
			this->E4Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4PRed.Image")));
			this->E4Table4PRed->Location = System::Drawing::Point(1012, 602);
			this->E4Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->E4Table4PRed->Name = L"E4Table4PRed";
			this->E4Table4PRed->Size = System::Drawing::Size(80, 66);
			this->E4Table4PRed->TabIndex = 189;
			this->E4Table4PRed->TabStop = false;
			// 
			// D2Table4PRed
			// 
			this->D2Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PRed.Image")));
			this->D2Table4PRed->Location = System::Drawing::Point(1162, 350);
			this->D2Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->D2Table4PRed->Name = L"D2Table4PRed";
			this->D2Table4PRed->Size = System::Drawing::Size(67, 81);
			this->D2Table4PRed->TabIndex = 188;
			this->D2Table4PRed->TabStop = false;
			// 
			// D3Table4PRed
			// 
			this->D3Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PRed.Image")));
			this->D3Table4PRed->Location = System::Drawing::Point(1162, 450);
			this->D3Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->D3Table4PRed->Name = L"D3Table4PRed";
			this->D3Table4PRed->Size = System::Drawing::Size(67, 81);
			this->D3Table4PRed->TabIndex = 187;
			this->D3Table4PRed->TabStop = false;
			// 
			// D1Table4PRed
			// 
			this->D1Table4PRed->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PRed.Image")));
			this->D1Table4PRed->Location = System::Drawing::Point(1162, 247);
			this->D1Table4PRed->Margin = System::Windows::Forms::Padding(4);
			this->D1Table4PRed->Name = L"D1Table4PRed";
			this->D1Table4PRed->Size = System::Drawing::Size(67, 81);
			this->D1Table4PRed->TabIndex = 186;
			this->D1Table4PRed->TabStop = false;
			// 
			// A3Table1PRed
			// 
			this->A3Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PRed.Image")));
			this->A3Table1PRed->Location = System::Drawing::Point(1043, 200);
			this->A3Table1PRed->Margin = System::Windows::Forms::Padding(4);
			this->A3Table1PRed->Name = L"A3Table1PRed";
			this->A3Table1PRed->Size = System::Drawing::Size(27, 30);
			this->A3Table1PRed->TabIndex = 185;
			this->A3Table1PRed->TabStop = false;
			// 
			// A4Table1PRed
			// 
			this->A4Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PRed.Image")));
			this->A4Table1PRed->Location = System::Drawing::Point(1043, 231);
			this->A4Table1PRed->Margin = System::Windows::Forms::Padding(4);
			this->A4Table1PRed->Name = L"A4Table1PRed";
			this->A4Table1PRed->Size = System::Drawing::Size(27, 30);
			this->A4Table1PRed->TabIndex = 184;
			this->A4Table1PRed->TabStop = false;
			// 
			// A2Table1PRed
			// 
			this->A2Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PRed.Image")));
			this->A2Table1PRed->Location = System::Drawing::Point(1043, 171);
			this->A2Table1PRed->Margin = System::Windows::Forms::Padding(4);
			this->A2Table1PRed->Name = L"A2Table1PRed";
			this->A2Table1PRed->Size = System::Drawing::Size(27, 30);
			this->A2Table1PRed->TabIndex = 183;
			this->A2Table1PRed->TabStop = false;
			// 
			// A1Table1PRed
			// 
			this->A1Table1PRed->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PRed->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PRed->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PRed->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PRed.Image")));
			this->A1Table1PRed->Location = System::Drawing::Point(1043, 141);
			this->A1Table1PRed->Margin = System::Windows::Forms::Padding(4);
			this->A1Table1PRed->Name = L"A1Table1PRed";
			this->A1Table1PRed->Size = System::Drawing::Size(27, 30);
			this->A1Table1PRed->TabIndex = 182;
			this->A1Table1PRed->TabStop = false;
			// 
			// E4Table4PGreen
			// 
			this->E4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4PGreen.BackgroundImage")));
			this->E4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4PGreen->Location = System::Drawing::Point(1012, 602);
			this->E4Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E4Table4PGreen->Name = L"E4Table4PGreen";
			this->E4Table4PGreen->Size = System::Drawing::Size(80, 66);
			this->E4Table4PGreen->TabIndex = 181;
			this->E4Table4PGreen->TabStop = false;
			// 
			// E3Table4PGreen
			// 
			this->E3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4PGreen.BackgroundImage")));
			this->E3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4PGreen->Location = System::Drawing::Point(890, 602);
			this->E3Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E3Table4PGreen->Name = L"E3Table4PGreen";
			this->E3Table4PGreen->Size = System::Drawing::Size(80, 66);
			this->E3Table4PGreen->TabIndex = 180;
			this->E3Table4PGreen->TabStop = false;
			// 
			// E2Table4PGreen
			// 
			this->E2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4PGreen.BackgroundImage")));
			this->E2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4PGreen->Location = System::Drawing::Point(764, 602);
			this->E2Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E2Table4PGreen->Name = L"E2Table4PGreen";
			this->E2Table4PGreen->Size = System::Drawing::Size(80, 66);
			this->E2Table4PGreen->TabIndex = 179;
			this->E2Table4PGreen->TabStop = false;
			// 
			// E1Table4PGreen
			// 
			this->E1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4PGreen.BackgroundImage")));
			this->E1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4PGreen->Location = System::Drawing::Point(642, 602);
			this->E1Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E1Table4PGreen->Name = L"E1Table4PGreen";
			this->E1Table4PGreen->Size = System::Drawing::Size(80, 66);
			this->E1Table4PGreen->TabIndex = 178;
			this->E1Table4PGreen->TabStop = false;
			// 
			// D3Table4PGreen
			// 
			this->D3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4PGreen.BackgroundImage")));
			this->D3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4PGreen->Location = System::Drawing::Point(1162, 450);
			this->D3Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D3Table4PGreen->Name = L"D3Table4PGreen";
			this->D3Table4PGreen->Size = System::Drawing::Size(67, 81);
			this->D3Table4PGreen->TabIndex = 177;
			this->D3Table4PGreen->TabStop = false;
			// 
			// D2Table4PGreen
			// 
			this->D2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4PGreen.BackgroundImage")));
			this->D2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4PGreen->Location = System::Drawing::Point(1162, 350);
			this->D2Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D2Table4PGreen->Name = L"D2Table4PGreen";
			this->D2Table4PGreen->Size = System::Drawing::Size(67, 81);
			this->D2Table4PGreen->TabIndex = 176;
			this->D2Table4PGreen->TabStop = false;
			// 
			// D1Table4PGreen
			// 
			this->D1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4PGreen.BackgroundImage")));
			this->D1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4PGreen->Location = System::Drawing::Point(1162, 247);
			this->D1Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D1Table4PGreen->Name = L"D1Table4PGreen";
			this->D1Table4PGreen->Size = System::Drawing::Size(67, 81);
			this->D1Table4PGreen->TabIndex = 175;
			this->D1Table4PGreen->TabStop = false;
			// 
			// C3Table4PGreen
			// 
			this->C3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4PGreen.BackgroundImage")));
			this->C3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4PGreen->Location = System::Drawing::Point(1022, 494);
			this->C3Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C3Table4PGreen->Name = L"C3Table4PGreen";
			this->C3Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->C3Table4PGreen->TabIndex = 174;
			this->C3Table4PGreen->TabStop = false;
			// 
			// C2Table4PGreen
			// 
			this->C2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4PGreen.BackgroundImage")));
			this->C2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4PGreen->Location = System::Drawing::Point(1022, 409);
			this->C2Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C2Table4PGreen->Name = L"C2Table4PGreen";
			this->C2Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->C2Table4PGreen->TabIndex = 173;
			this->C2Table4PGreen->TabStop = false;
			// 
			// C1Table4PGreen
			// 
			this->C1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4PGreen.BackgroundImage")));
			this->C1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4PGreen->Location = System::Drawing::Point(1022, 322);
			this->C1Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C1Table4PGreen->Name = L"C1Table4PGreen";
			this->C1Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->C1Table4PGreen->TabIndex = 172;
			this->C1Table4PGreen->TabStop = false;
			// 
			// B5Table4PGreen
			// 
			this->B5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4PGreen.BackgroundImage")));
			this->B5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4PGreen->Location = System::Drawing::Point(800, 494);
			this->B5Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B5Table4PGreen->Name = L"B5Table4PGreen";
			this->B5Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B5Table4PGreen->TabIndex = 170;
			this->B5Table4PGreen->TabStop = false;
			// 
			// B4Table4PGreen
			// 
			this->B4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4PGreen.BackgroundImage")));
			this->B4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4PGreen->Location = System::Drawing::Point(800, 409);
			this->B4Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B4Table4PGreen->Name = L"B4Table4PGreen";
			this->B4Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B4Table4PGreen->TabIndex = 169;
			this->B4Table4PGreen->TabStop = false;
			// 
			// B3Table6PGreen
			// 
			this->B3Table6PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6PGreen.BackgroundImage")));
			this->B3Table6PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6PGreen->Location = System::Drawing::Point(688, 436);
			this->B3Table6PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B3Table6PGreen->Name = L"B3Table6PGreen";
			this->B3Table6PGreen->Size = System::Drawing::Size(91, 92);
			this->B3Table6PGreen->TabIndex = 168;
			this->B3Table6PGreen->TabStop = false;
			// 
			// B2Table4PGreen
			// 
			this->B2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4PGreen.BackgroundImage")));
			this->B2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4PGreen->Location = System::Drawing::Point(602, 494);
			this->B2Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B2Table4PGreen->Name = L"B2Table4PGreen";
			this->B2Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B2Table4PGreen->TabIndex = 167;
			this->B2Table4PGreen->TabStop = false;
			// 
			// B1Table4PGreen
			// 
			this->B1Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4PGreen.BackgroundImage")));
			this->B1Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4PGreen->Location = System::Drawing::Point(602, 409);
			this->B1Table4PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B1Table4PGreen->Name = L"B1Table4PGreen";
			this->B1Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->B1Table4PGreen->TabIndex = 166;
			this->B1Table4PGreen->TabStop = false;
			// 
			// A4Table1PGreen
			// 
			this->A4Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1PGreen.BackgroundImage")));
			this->A4Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1PGreen->Location = System::Drawing::Point(1043, 231);
			this->A4Table1PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A4Table1PGreen->Name = L"A4Table1PGreen";
			this->A4Table1PGreen->Size = System::Drawing::Size(27, 30);
			this->A4Table1PGreen->TabIndex = 165;
			this->A4Table1PGreen->TabStop = false;
			// 
			// A3Table1PGreen
			// 
			this->A3Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1PGreen.BackgroundImage")));
			this->A3Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1PGreen->Location = System::Drawing::Point(1043, 200);
			this->A3Table1PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A3Table1PGreen->Name = L"A3Table1PGreen";
			this->A3Table1PGreen->Size = System::Drawing::Size(27, 30);
			this->A3Table1PGreen->TabIndex = 164;
			this->A3Table1PGreen->TabStop = false;
			// 
			// A2Table1PGreen
			// 
			this->A2Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1PGreen.BackgroundImage")));
			this->A2Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1PGreen->Location = System::Drawing::Point(1043, 171);
			this->A2Table1PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A2Table1PGreen->Name = L"A2Table1PGreen";
			this->A2Table1PGreen->Size = System::Drawing::Size(27, 30);
			this->A2Table1PGreen->TabIndex = 163;
			this->A2Table1PGreen->TabStop = false;
			// 
			// A1Table1PGreen
			// 
			this->A1Table1PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1PGreen.BackgroundImage")));
			this->A1Table1PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1PGreen->Location = System::Drawing::Point(1043, 141);
			this->A1Table1PGreen->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A1Table1PGreen->Name = L"A1Table1PGreen";
			this->A1Table1PGreen->Size = System::Drawing::Size(27, 30);
			this->A1Table1PGreen->TabIndex = 162;
			this->A1Table1PGreen->TabStop = false;
			// 
			// A4Table1P
			// 
			this->A4Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A4Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table1P.BackgroundImage")));
			this->A4Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table1P->Location = System::Drawing::Point(1043, 231);
			this->A4Table1P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A4Table1P->Name = L"A4Table1P";
			this->A4Table1P->Size = System::Drawing::Size(27, 30);
			this->A4Table1P->TabIndex = 161;
			this->A4Table1P->TabStop = false;
			// 
			// E4Table4P
			// 
			this->E4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E4Table4P.BackgroundImage")));
			this->E4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E4Table4P->Location = System::Drawing::Point(1012, 602);
			this->E4Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E4Table4P->Name = L"E4Table4P";
			this->E4Table4P->Size = System::Drawing::Size(80, 66);
			this->E4Table4P->TabIndex = 160;
			this->E4Table4P->TabStop = false;
			// 
			// E3Table4P
			// 
			this->E3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E3Table4P.BackgroundImage")));
			this->E3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E3Table4P->Location = System::Drawing::Point(890, 602);
			this->E3Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E3Table4P->Name = L"E3Table4P";
			this->E3Table4P->Size = System::Drawing::Size(80, 66);
			this->E3Table4P->TabIndex = 159;
			this->E3Table4P->TabStop = false;
			// 
			// E2Table4P
			// 
			this->E2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E2Table4P.BackgroundImage")));
			this->E2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E2Table4P->Location = System::Drawing::Point(764, 602);
			this->E2Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E2Table4P->Name = L"E2Table4P";
			this->E2Table4P->Size = System::Drawing::Size(80, 66);
			this->E2Table4P->TabIndex = 158;
			this->E2Table4P->TabStop = false;
			// 
			// E1Table4P
			// 
			this->E1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->E1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"E1Table4P.BackgroundImage")));
			this->E1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->E1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->E1Table4P->Location = System::Drawing::Point(642, 602);
			this->E1Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->E1Table4P->Name = L"E1Table4P";
			this->E1Table4P->Size = System::Drawing::Size(80, 66);
			this->E1Table4P->TabIndex = 157;
			this->E1Table4P->TabStop = false;
			// 
			// D3Table4P
			// 
			this->D3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D3Table4P.BackgroundImage")));
			this->D3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D3Table4P->Location = System::Drawing::Point(1162, 450);
			this->D3Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D3Table4P->Name = L"D3Table4P";
			this->D3Table4P->Size = System::Drawing::Size(67, 81);
			this->D3Table4P->TabIndex = 156;
			this->D3Table4P->TabStop = false;
			// 
			// D2Table4P
			// 
			this->D2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D2Table4P.BackgroundImage")));
			this->D2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D2Table4P->Location = System::Drawing::Point(1162, 350);
			this->D2Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D2Table4P->Name = L"D2Table4P";
			this->D2Table4P->Size = System::Drawing::Size(67, 81);
			this->D2Table4P->TabIndex = 155;
			this->D2Table4P->TabStop = false;
			// 
			// D1Table4P
			// 
			this->D1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->D1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"D1Table4P.BackgroundImage")));
			this->D1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->D1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->D1Table4P->Location = System::Drawing::Point(1162, 247);
			this->D1Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->D1Table4P->Name = L"D1Table4P";
			this->D1Table4P->Size = System::Drawing::Size(67, 81);
			this->D1Table4P->TabIndex = 154;
			this->D1Table4P->TabStop = false;
			// 
			// C3Table4P
			// 
			this->C3Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C3Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C3Table4P.BackgroundImage")));
			this->C3Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C3Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C3Table4P->Location = System::Drawing::Point(1022, 494);
			this->C3Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C3Table4P->Name = L"C3Table4P";
			this->C3Table4P->Size = System::Drawing::Size(64, 64);
			this->C3Table4P->TabIndex = 153;
			this->C3Table4P->TabStop = false;
			// 
			// C2Table4P
			// 
			this->C2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C2Table4P.BackgroundImage")));
			this->C2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C2Table4P->Location = System::Drawing::Point(1022, 409);
			this->C2Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C2Table4P->Name = L"C2Table4P";
			this->C2Table4P->Size = System::Drawing::Size(64, 64);
			this->C2Table4P->TabIndex = 152;
			this->C2Table4P->TabStop = false;
			// 
			// C1Table4P
			// 
			this->C1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->C1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"C1Table4P.BackgroundImage")));
			this->C1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->C1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->C1Table4P->Location = System::Drawing::Point(1022, 322);
			this->C1Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->C1Table4P->Name = L"C1Table4P";
			this->C1Table4P->Size = System::Drawing::Size(64, 64);
			this->C1Table4P->TabIndex = 151;
			this->C1Table4P->TabStop = false;
			// 
			// B6Table6P
			// 
			this->B6Table6P->BackColor = System::Drawing::Color::Transparent;
			this->B6Table6P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B6Table6P.BackgroundImage")));
			this->B6Table6P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B6Table6P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B6Table6P->Location = System::Drawing::Point(888, 436);
			this->B6Table6P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B6Table6P->Name = L"B6Table6P";
			this->B6Table6P->Size = System::Drawing::Size(91, 92);
			this->B6Table6P->TabIndex = 150;
			this->B6Table6P->TabStop = false;
			// 
			// B5Table4P
			// 
			this->B5Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B5Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B5Table4P.BackgroundImage")));
			this->B5Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B5Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B5Table4P->Location = System::Drawing::Point(800, 494);
			this->B5Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B5Table4P->Name = L"B5Table4P";
			this->B5Table4P->Size = System::Drawing::Size(64, 64);
			this->B5Table4P->TabIndex = 149;
			this->B5Table4P->TabStop = false;
			// 
			// B4Table4P
			// 
			this->B4Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B4Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B4Table4P.BackgroundImage")));
			this->B4Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B4Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B4Table4P->Location = System::Drawing::Point(800, 409);
			this->B4Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B4Table4P->Name = L"B4Table4P";
			this->B4Table4P->Size = System::Drawing::Size(64, 64);
			this->B4Table4P->TabIndex = 148;
			this->B4Table4P->TabStop = false;
			// 
			// B3Table6P
			// 
			this->B3Table6P->BackColor = System::Drawing::Color::Transparent;
			this->B3Table6P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B3Table6P.BackgroundImage")));
			this->B3Table6P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B3Table6P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B3Table6P->Location = System::Drawing::Point(688, 436);
			this->B3Table6P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B3Table6P->Name = L"B3Table6P";
			this->B3Table6P->Size = System::Drawing::Size(91, 92);
			this->B3Table6P->TabIndex = 147;
			this->B3Table6P->TabStop = false;
			// 
			// B2Table4P
			// 
			this->B2Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B2Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B2Table4P.BackgroundImage")));
			this->B2Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B2Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B2Table4P->Location = System::Drawing::Point(602, 494);
			this->B2Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B2Table4P->Name = L"B2Table4P";
			this->B2Table4P->Size = System::Drawing::Size(64, 64);
			this->B2Table4P->TabIndex = 146;
			this->B2Table4P->TabStop = false;
			// 
			// B1Table4P
			// 
			this->B1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->B1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"B1Table4P.BackgroundImage")));
			this->B1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->B1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->B1Table4P->Location = System::Drawing::Point(602, 409);
			this->B1Table4P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->B1Table4P->Name = L"B1Table4P";
			this->B1Table4P->Size = System::Drawing::Size(64, 64);
			this->B1Table4P->TabIndex = 145;
			this->B1Table4P->TabStop = false;
			// 
			// A3Table1P
			// 
			this->A3Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A3Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table1P.BackgroundImage")));
			this->A3Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table1P->Location = System::Drawing::Point(1043, 200);
			this->A3Table1P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A3Table1P->Name = L"A3Table1P";
			this->A3Table1P->Size = System::Drawing::Size(27, 30);
			this->A3Table1P->TabIndex = 144;
			this->A3Table1P->TabStop = false;
			// 
			// A2Table1P
			// 
			this->A2Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A2Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table1P.BackgroundImage")));
			this->A2Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table1P->Location = System::Drawing::Point(1043, 171);
			this->A2Table1P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A2Table1P->Name = L"A2Table1P";
			this->A2Table1P->Size = System::Drawing::Size(27, 30);
			this->A2Table1P->TabIndex = 143;
			this->A2Table1P->TabStop = false;
			// 
			// A1Table1P
			// 
			this->A1Table1P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table1P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table1P.BackgroundImage")));
			this->A1Table1P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table1P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table1P->Location = System::Drawing::Point(1043, 141);
			this->A1Table1P->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->A1Table1P->Name = L"A1Table1P";
			this->A1Table1P->Size = System::Drawing::Size(27, 30);
			this->A1Table1P->TabIndex = 142;
			this->A1Table1P->TabStop = false;
			// 
			// BarSajui
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->ConfirmTableBarMapraw);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->B6Table6PRed);
			this->Controls->Add(this->B6Table6PGreen);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"BarSajui";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"BarSajui";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ConfirmTableBarMapraw))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1PGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A4Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->E1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->D1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C3Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->C1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B6Table6P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B5Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B4Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B3Table6P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B2Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->B1Table4P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A3Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A2Table1P))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->A1Table1P))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
