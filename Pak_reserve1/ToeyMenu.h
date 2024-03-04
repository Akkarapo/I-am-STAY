#pragma once
#using <mscorlib.dll>
#include <string>
#include <iostream>
#include <fstream>
namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToeyMenu
	/// </summary>
	public ref class ToeyMenu : public System::Windows::Forms::Form
	{
	public:
		ToeyMenu(void)
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
		~ToeyMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;








	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;















	private: System::Windows::Forms::Panel^ panel3;







	private: System::Windows::Forms::Panel^ panel4;







	private: System::Windows::Forms::Panel^ panel5;






	private: System::Windows::Forms::Panel^ panel6;





	private: System::Windows::Forms::Panel^ panel7;





	private: System::Windows::Forms::Panel^ panel8;





	private: System::Windows::Forms::Panel^ panel9;





	private: System::Windows::Forms::Panel^ panel10;





	private: System::Windows::Forms::Panel^ panel11;





	private: System::Windows::Forms::Panel^ panel12;





	private: System::Windows::Forms::Panel^ panel13;





	private: System::Windows::Forms::Panel^ panel14;





	private: System::Windows::Forms::Panel^ panel15;





private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox11;
private: System::Windows::Forms::PictureBox^ pictureBox12;
private: System::Windows::Forms::PictureBox^ pictureBox13;
private: System::Windows::Forms::PictureBox^ pictureBox14;
private: System::Windows::Forms::PictureBox^ pictureBox15;
private: System::Windows::Forms::PictureBox^ pictureBox16;
private: System::Windows::Forms::PictureBox^ pictureBox17;
private: System::Windows::Forms::PictureBox^ pictureBox18;
private: System::Windows::Forms::Label^ Table1;
private: System::Windows::Forms::Label^ Table2;
private: System::Windows::Forms::Label^ Table3;
private: System::Windows::Forms::Label^ Table4;
private: System::Windows::Forms::Label^ Table5;
private: System::Windows::Forms::Label^ Table6;
private: System::Windows::Forms::Label^ Table7;
private: System::Windows::Forms::Label^ Table8;
private: System::Windows::Forms::Label^ Table9;
private: System::Windows::Forms::Label^ Table10;
private: System::Windows::Forms::Label^ Table11;
private: System::Windows::Forms::Label^ Table12;
private: System::Windows::Forms::Label^ Table13;
private: System::Windows::Forms::Label^ Table14;
private: System::Windows::Forms::Label^ Table15;












































































































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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ToeyMenu::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Table1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Table2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->Table3 = (gcnew System::Windows::Forms::Label());
			this->Table4 = (gcnew System::Windows::Forms::Label());
			this->Table5 = (gcnew System::Windows::Forms::Label());
			this->Table6 = (gcnew System::Windows::Forms::Label());
			this->Table7 = (gcnew System::Windows::Forms::Label());
			this->Table8 = (gcnew System::Windows::Forms::Label());
			this->Table9 = (gcnew System::Windows::Forms::Label());
			this->Table10 = (gcnew System::Windows::Forms::Label());
			this->Table11 = (gcnew System::Windows::Forms::Label());
			this->Table12 = (gcnew System::Windows::Forms::Label());
			this->Table13 = (gcnew System::Windows::Forms::Label());
			this->Table14 = (gcnew System::Windows::Forms::Label());
			this->Table15 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 56);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(18, 18);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(53, 21);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &ToeyMenu::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1216, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 45);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &ToeyMenu::pictureBox3_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->Table1);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(20, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(230, 343);
			this->panel1->TabIndex = 23;
			this->panel1->Click += gcnew System::EventHandler(this, &ToeyMenu::panel1_Click);
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &ToeyMenu::panel1_Paint);
			// 
			// Table1
			// 
			this->Table1->AutoSize = true;
			this->Table1->BackColor = System::Drawing::Color::Transparent;
			this->Table1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table1->Location = System::Drawing::Point(50, 77);
			this->Table1->Name = L"Table1";
			this->Table1->Size = System::Drawing::Size(68, 24);
			this->Table1->TabIndex = 1;
			this->Table1->Text = L"XX/30";
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->pictureBox4->Location = System::Drawing::Point(10, 20);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(209, 141);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->Controls->Add(this->Table2);
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel2->Location = System::Drawing::Point(270, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 343);
			this->panel2->TabIndex = 24;
			this->panel2->Click += gcnew System::EventHandler(this, &ToeyMenu::panel2_Click);
			// 
			// Table2
			// 
			this->Table2->AutoSize = true;
			this->Table2->BackColor = System::Drawing::Color::Transparent;
			this->Table2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table2->Location = System::Drawing::Point(50, 77);
			this->Table2->Name = L"Table2";
			this->Table2->Size = System::Drawing::Size(68, 24);
			this->Table2->TabIndex = 2;
			this->Table2->Text = L"XX/30";
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox6->Location = System::Drawing::Point(10, 20);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(209, 141);
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->Table3);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel3->Location = System::Drawing::Point(520, 80);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(230, 343);
			this->panel3->TabIndex = 25;
			this->panel3->Click += gcnew System::EventHandler(this, &ToeyMenu::panel3_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox7->Location = System::Drawing::Point(10, 20);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(209, 141);
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->Controls->Add(this->Table4);
			this->panel4->Controls->Add(this->pictureBox8);
			this->panel4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel4->Location = System::Drawing::Point(770, 80);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(230, 343);
			this->panel4->TabIndex = 26;
			this->panel4->Click += gcnew System::EventHandler(this, &ToeyMenu::panel4_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox8->Location = System::Drawing::Point(10, 20);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(209, 141);
			this->pictureBox8->TabIndex = 1;
			this->pictureBox8->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
			this->panel5->Controls->Add(this->Table5);
			this->panel5->Controls->Add(this->pictureBox9);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(1020, 80);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(230, 343);
			this->panel5->TabIndex = 25;
			this->panel5->Click += gcnew System::EventHandler(this, &ToeyMenu::panel5_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox9->Location = System::Drawing::Point(10, 20);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(209, 141);
			this->pictureBox9->TabIndex = 1;
			this->pictureBox9->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
			this->panel6->Controls->Add(this->Table6);
			this->panel6->Controls->Add(this->pictureBox5);
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel6->Location = System::Drawing::Point(20, 445);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(230, 343);
			this->panel6->TabIndex = 24;
			this->panel6->Click += gcnew System::EventHandler(this, &ToeyMenu::panel6_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox5->Location = System::Drawing::Point(10, 20);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(209, 141);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel7.BackgroundImage")));
			this->panel7->Controls->Add(this->Table7);
			this->panel7->Controls->Add(this->pictureBox10);
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(270, 445);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(230, 343);
			this->panel7->TabIndex = 25;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox10->Location = System::Drawing::Point(10, 20);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(209, 141);
			this->pictureBox10->TabIndex = 1;
			this->pictureBox10->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel8.BackgroundImage")));
			this->panel8->Controls->Add(this->Table8);
			this->panel8->Controls->Add(this->pictureBox11);
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Location = System::Drawing::Point(520, 445);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(230, 343);
			this->panel8->TabIndex = 25;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox11->Location = System::Drawing::Point(10, 20);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(209, 141);
			this->pictureBox11->TabIndex = 1;
			this->pictureBox11->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel9.BackgroundImage")));
			this->panel9->Controls->Add(this->Table9);
			this->panel9->Controls->Add(this->pictureBox12);
			this->panel9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel9->Location = System::Drawing::Point(770, 445);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(230, 343);
			this->panel9->TabIndex = 25;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox12->Location = System::Drawing::Point(10, 20);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(209, 141);
			this->pictureBox12->TabIndex = 1;
			this->pictureBox12->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel10.BackgroundImage")));
			this->panel10->Controls->Add(this->Table10);
			this->panel10->Controls->Add(this->pictureBox13);
			this->panel10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel10->Location = System::Drawing::Point(1020, 445);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(230, 343);
			this->panel10->TabIndex = 25;
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox13->Location = System::Drawing::Point(10, 20);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(209, 141);
			this->pictureBox13->TabIndex = 1;
			this->pictureBox13->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel11.BackgroundImage")));
			this->panel11->Controls->Add(this->Table11);
			this->panel11->Controls->Add(this->pictureBox14);
			this->panel11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel11->Location = System::Drawing::Point(20, 810);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(230, 343);
			this->panel11->TabIndex = 29;
			this->panel11->Click += gcnew System::EventHandler(this, &ToeyMenu::panel11_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox14->Location = System::Drawing::Point(10, 20);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(209, 141);
			this->pictureBox14->TabIndex = 1;
			this->pictureBox14->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel12.BackgroundImage")));
			this->panel12->Controls->Add(this->Table12);
			this->panel12->Controls->Add(this->pictureBox15);
			this->panel12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel12->Location = System::Drawing::Point(270, 810);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(230, 343);
			this->panel12->TabIndex = 30;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox15->Location = System::Drawing::Point(10, 20);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(209, 141);
			this->pictureBox15->TabIndex = 1;
			this->pictureBox15->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel13.BackgroundImage")));
			this->panel13->Controls->Add(this->Table13);
			this->panel13->Controls->Add(this->pictureBox16);
			this->panel13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel13->Location = System::Drawing::Point(520, 810);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(230, 343);
			this->panel13->TabIndex = 30;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox16->Location = System::Drawing::Point(10, 20);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(209, 141);
			this->pictureBox16->TabIndex = 1;
			this->pictureBox16->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel14.BackgroundImage")));
			this->panel14->Controls->Add(this->Table14);
			this->panel14->Controls->Add(this->pictureBox17);
			this->panel14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel14->Location = System::Drawing::Point(770, 810);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(230, 343);
			this->panel14->TabIndex = 30;
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox17->Location = System::Drawing::Point(10, 20);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(209, 141);
			this->pictureBox17->TabIndex = 1;
			this->pictureBox17->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel15.BackgroundImage")));
			this->panel15->Controls->Add(this->Table15);
			this->panel15->Controls->Add(this->pictureBox18);
			this->panel15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel15->Location = System::Drawing::Point(1020, 810);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(230, 343);
			this->panel15->TabIndex = 30;
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox18->Location = System::Drawing::Point(10, 20);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(209, 141);
			this->pictureBox18->TabIndex = 1;
			this->pictureBox18->TabStop = false;
			// 
			// Table3
			// 
			this->Table3->AutoSize = true;
			this->Table3->BackColor = System::Drawing::Color::Transparent;
			this->Table3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table3->Location = System::Drawing::Point(50, 77);
			this->Table3->Name = L"Table3";
			this->Table3->Size = System::Drawing::Size(68, 24);
			this->Table3->TabIndex = 3;
			this->Table3->Text = L"XX/30";
			// 
			// Table4
			// 
			this->Table4->AutoSize = true;
			this->Table4->BackColor = System::Drawing::Color::Transparent;
			this->Table4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table4->Location = System::Drawing::Point(50, 77);
			this->Table4->Name = L"Table4";
			this->Table4->Size = System::Drawing::Size(68, 24);
			this->Table4->TabIndex = 4;
			this->Table4->Text = L"XX/30";
			// 
			// Table5
			// 
			this->Table5->AutoSize = true;
			this->Table5->BackColor = System::Drawing::Color::Transparent;
			this->Table5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table5->Location = System::Drawing::Point(50, 77);
			this->Table5->Name = L"Table5";
			this->Table5->Size = System::Drawing::Size(68, 24);
			this->Table5->TabIndex = 5;
			this->Table5->Text = L"XX/30";
			// 
			// Table6
			// 
			this->Table6->AutoSize = true;
			this->Table6->BackColor = System::Drawing::Color::Transparent;
			this->Table6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table6->Location = System::Drawing::Point(50, 77);
			this->Table6->Name = L"Table6";
			this->Table6->Size = System::Drawing::Size(68, 24);
			this->Table6->TabIndex = 6;
			this->Table6->Text = L"XX/30";
			// 
			// Table7
			// 
			this->Table7->AutoSize = true;
			this->Table7->BackColor = System::Drawing::Color::Transparent;
			this->Table7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table7->Location = System::Drawing::Point(50, 77);
			this->Table7->Name = L"Table7";
			this->Table7->Size = System::Drawing::Size(68, 24);
			this->Table7->TabIndex = 7;
			this->Table7->Text = L"XX/30";
			// 
			// Table8
			// 
			this->Table8->AutoSize = true;
			this->Table8->BackColor = System::Drawing::Color::Transparent;
			this->Table8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table8->Location = System::Drawing::Point(50, 77);
			this->Table8->Name = L"Table8";
			this->Table8->Size = System::Drawing::Size(68, 24);
			this->Table8->TabIndex = 8;
			this->Table8->Text = L"XX/30";
			// 
			// Table9
			// 
			this->Table9->AutoSize = true;
			this->Table9->BackColor = System::Drawing::Color::Transparent;
			this->Table9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table9->Location = System::Drawing::Point(50, 77);
			this->Table9->Name = L"Table9";
			this->Table9->Size = System::Drawing::Size(68, 24);
			this->Table9->TabIndex = 9;
			this->Table9->Text = L"XX/30";
			// 
			// Table10
			// 
			this->Table10->AutoSize = true;
			this->Table10->BackColor = System::Drawing::Color::Transparent;
			this->Table10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table10->Location = System::Drawing::Point(50, 77);
			this->Table10->Name = L"Table10";
			this->Table10->Size = System::Drawing::Size(68, 24);
			this->Table10->TabIndex = 10;
			this->Table10->Text = L"XX/30";
			// 
			// Table11
			// 
			this->Table11->AutoSize = true;
			this->Table11->BackColor = System::Drawing::Color::Transparent;
			this->Table11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table11->Location = System::Drawing::Point(50, 77);
			this->Table11->Name = L"Table11";
			this->Table11->Size = System::Drawing::Size(68, 24);
			this->Table11->TabIndex = 11;
			this->Table11->Text = L"XX/30";
			// 
			// Table12
			// 
			this->Table12->AutoSize = true;
			this->Table12->BackColor = System::Drawing::Color::Transparent;
			this->Table12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table12->Location = System::Drawing::Point(50, 77);
			this->Table12->Name = L"Table12";
			this->Table12->Size = System::Drawing::Size(68, 24);
			this->Table12->TabIndex = 12;
			this->Table12->Text = L"XX/30";
			// 
			// Table13
			// 
			this->Table13->AutoSize = true;
			this->Table13->BackColor = System::Drawing::Color::Transparent;
			this->Table13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table13->Location = System::Drawing::Point(50, 77);
			this->Table13->Name = L"Table13";
			this->Table13->Size = System::Drawing::Size(68, 24);
			this->Table13->TabIndex = 13;
			this->Table13->Text = L"XX/30";
			// 
			// Table14
			// 
			this->Table14->AutoSize = true;
			this->Table14->BackColor = System::Drawing::Color::Transparent;
			this->Table14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table14->Location = System::Drawing::Point(50, 77);
			this->Table14->Name = L"Table14";
			this->Table14->Size = System::Drawing::Size(68, 24);
			this->Table14->TabIndex = 14;
			this->Table14->Text = L"XX/30";
			// 
			// Table15
			// 
			this->Table15->AutoSize = true;
			this->Table15->BackColor = System::Drawing::Color::Transparent;
			this->Table15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table15->Location = System::Drawing::Point(50, 77);
			this->Table15->Name = L"Table15";
			this->Table15->Size = System::Drawing::Size(68, 24);
			this->Table15->TabIndex = 15;
			this->Table15->Text = L"XX/30";
			// 
			// ToeyMenu
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ToeyMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &ToeyMenu::ToeyMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			this->ResumeLayout(false);

		}
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
public: bool switchToProfile = false;
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToProfile = true;
	this->Close();
}

public: bool switchToPakForm = false;
private: System::Void panel1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToPakForm = true;
	this->Close();
}
public: bool switchToBarGong = false;
private: System::Void panel2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarGong = true;
	this->Close();
}
public: bool switchToBarMP = false;
private: System::Void panel3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarMP = true;
	this->Close();
}
public: bool switchToBarToey = false;
private: System::Void panel4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarToey = true;
	this->Close();
}
public: bool switchToBarNepjune = false;
private: System::Void panel5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarNepjune = true;
	this->Close();
}
public: bool switchToBarOakkhara = false;
private: System::Void panel6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarOakkhara = true;
	this->Close();
}
public: bool switchToBarGarpanya = false;
private: System::Void panel11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToBarGarpanya = true;
	this->Close();
}
public: bool switchToToey = false;
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void ToeyMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;
	String^ temp = Application::StartupPath + "\\Data\\" + "Table.txt";
	string path, line;
	int count = 0;
	MarshalString(temp, path);
	ifstream fileIn(path);
	for (int i = 0; i < 15; i++) {
		getline(fileIn, line);
		count = 0;
		for (int i = 0; i < line.size(); i++)
		{
			if (line[i]=='1') count++;
		}
		switch (i)
		{
		case 0: Table1->Text = count.ToString() + "/" + line.size(); break;
		case 1:	Table2->Text = count.ToString() + "/" + line.size(); break;
		case 2:	Table3->Text = count.ToString() + "/" + line.size(); break;
		case 3:	Table4->Text = count.ToString() + "/" + line.size(); break;
		case 4:	Table5->Text = count.ToString() + "/" + line.size(); break;
		case 5:	Table6->Text = count.ToString() + "/" + line.size(); break;
		case 6:	Table7->Text = count.ToString() + "/" + line.size(); break;
		case 7:	Table8->Text = count.ToString() + "/" + line.size(); break;
		case 8:	Table9->Text = count.ToString() + "/" + line.size(); break;
		case 9:	Table10->Text = count.ToString() + "/" + line.size(); break;
		case 10: Table11->Text = count.ToString() + "/" + line.size(); break;
		case 11: Table12->Text = count.ToString() + "/" + line.size(); break;
		case 12: Table13->Text = count.ToString() + "/" + line.size(); break;
		case 13: Table14->Text = count.ToString() + "/" + line.size(); break;
		case 14: Table15->Text = count.ToString() + "/" + line.size(); break;
		default:
			break;
		}
			
	}
}


private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

};
}