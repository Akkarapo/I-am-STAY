#pragma once

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
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;

	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox10;








	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::PictureBox^ pictureBox15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::PictureBox^ pictureBox16;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox17;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::PictureBox^ pictureBox18;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::PictureBox^ pictureBox19;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox20;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::PictureBox^ pictureBox35;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::PictureBox^ pictureBox36;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::PictureBox^ pictureBox37;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox23;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::PictureBox^ pictureBox24;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::PictureBox^ pictureBox25;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::PictureBox^ pictureBox26;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::PictureBox^ pictureBox27;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::PictureBox^ pictureBox28;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::PictureBox^ pictureBox29;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::PictureBox^ pictureBox30;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::PictureBox^ pictureBox34;
private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::PictureBox^ pictureBox38;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::PictureBox^ pictureBox39;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label36;
private: System::Windows::Forms::PictureBox^ pictureBox40;
private: System::Windows::Forms::Panel^ panel13;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::PictureBox^ pictureBox41;
private: System::Windows::Forms::Label^ label37;
private: System::Windows::Forms::PictureBox^ pictureBox42;
private: System::Windows::Forms::Label^ label38;
private: System::Windows::Forms::Label^ label39;
private: System::Windows::Forms::PictureBox^ pictureBox43;
private: System::Windows::Forms::Panel^ panel14;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::PictureBox^ pictureBox44;
private: System::Windows::Forms::Label^ label40;
private: System::Windows::Forms::PictureBox^ pictureBox45;
private: System::Windows::Forms::Label^ label41;
private: System::Windows::Forms::Label^ label42;
private: System::Windows::Forms::PictureBox^ pictureBox46;
private: System::Windows::Forms::Panel^ panel15;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::PictureBox^ pictureBox47;
private: System::Windows::Forms::Label^ label43;
private: System::Windows::Forms::PictureBox^ pictureBox48;
private: System::Windows::Forms::Label^ label44;
private: System::Windows::Forms::Label^ label45;
private: System::Windows::Forms::PictureBox^ pictureBox49;

























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
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			this->panel9->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			this->panel11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			this->panel12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			this->panel13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			this->panel14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			this->panel15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
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
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1228, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(45, 45);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(846, 10);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(376, 37);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(230, 343);
			this->pictureBox5->TabIndex = 16;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &ToeyMenu::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(14, 76);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(32, 32);
			this->pictureBox6->TabIndex = 17;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(14, 138);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(32, 32);
			this->pictureBox7->TabIndex = 18;
			this->pictureBox7->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(14, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 39);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Toey";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(56, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 25);
			this->label2->TabIndex = 20;
			this->label2->Text = L"45/70";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(56, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(152, 48);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel1->Location = System::Drawing::Point(22, 80);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 350);
			this->panel1->TabIndex = 23;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox8);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->pictureBox10);
			this->panel2->Location = System::Drawing::Point(272, 80);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 350);
			this->panel2->TabIndex = 24;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(14, 76);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(32, 32);
			this->pictureBox8->TabIndex = 17;
			this->pictureBox8->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(56, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(152, 48);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(14, 138);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(32, 32);
			this->pictureBox9->TabIndex = 18;
			this->pictureBox9->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(56, 81);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 25);
			this->label5->TabIndex = 20;
			this->label5->Text = L"45/70";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(14, 20);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 39);
			this->label6->TabIndex = 19;
			this->label6->Text = L"STAY";
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(3, 3);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(230, 343);
			this->pictureBox10->TabIndex = 16;
			this->pictureBox10->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->button3);
			this->panel3->Controls->Add(this->pictureBox11);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->pictureBox12);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->pictureBox13);
			this->panel3->Location = System::Drawing::Point(522, 80);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(237, 350);
			this->panel3->TabIndex = 25;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(49, 282);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(134, 37);
			this->button3->TabIndex = 22;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(14, 76);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(32, 32);
			this->pictureBox11->TabIndex = 17;
			this->pictureBox11->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(56, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 48);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(14, 138);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(32, 32);
			this->pictureBox12->TabIndex = 18;
			this->pictureBox12->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(56, 81);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(66, 25);
			this->label8->TabIndex = 20;
			this->label8->Text = L"45/70";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(14, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 39);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Toey";
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Location = System::Drawing::Point(3, 3);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(230, 343);
			this->pictureBox13->TabIndex = 16;
			this->pictureBox13->TabStop = false;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->pictureBox14);
			this->panel4->Controls->Add(this->label10);
			this->panel4->Controls->Add(this->pictureBox15);
			this->panel4->Controls->Add(this->label11);
			this->panel4->Controls->Add(this->label12);
			this->panel4->Controls->Add(this->pictureBox16);
			this->panel4->Location = System::Drawing::Point(772, 80);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(237, 350);
			this->panel4->TabIndex = 26;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(49, 282);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(134, 37);
			this->button4->TabIndex = 22;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(14, 76);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(32, 32);
			this->pictureBox14->TabIndex = 17;
			this->pictureBox14->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(56, 131);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 48);
			this->label10->TabIndex = 21;
			this->label10->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(14, 138);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(32, 32);
			this->pictureBox15->TabIndex = 18;
			this->pictureBox15->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(56, 81);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(66, 25);
			this->label11->TabIndex = 20;
			this->label11->Text = L"45/70";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(14, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(94, 39);
			this->label12->TabIndex = 19;
			this->label12->Text = L"Toey";
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox16->Location = System::Drawing::Point(3, 3);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(230, 343);
			this->pictureBox16->TabIndex = 16;
			this->pictureBox16->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->button5);
			this->panel5->Controls->Add(this->pictureBox17);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->pictureBox18);
			this->panel5->Controls->Add(this->label14);
			this->panel5->Controls->Add(this->label15);
			this->panel5->Controls->Add(this->pictureBox19);
			this->panel5->Location = System::Drawing::Point(1022, 80);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(237, 350);
			this->panel5->TabIndex = 25;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(49, 282);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(134, 37);
			this->button5->TabIndex = 22;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(14, 76);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(32, 32);
			this->pictureBox17->TabIndex = 17;
			this->pictureBox17->TabStop = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(56, 131);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(152, 48);
			this->label13->TabIndex = 21;
			this->label13->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(14, 138);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(32, 32);
			this->pictureBox18->TabIndex = 18;
			this->pictureBox18->TabStop = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(56, 81);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 25);
			this->label14->TabIndex = 20;
			this->label14->Text = L"45/70";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(14, 20);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 39);
			this->label15->TabIndex = 19;
			this->label15->Text = L"Toey";
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox19->Location = System::Drawing::Point(3, 3);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(230, 343);
			this->pictureBox19->TabIndex = 16;
			this->pictureBox19->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button6);
			this->panel6->Controls->Add(this->pictureBox20);
			this->panel6->Controls->Add(this->label16);
			this->panel6->Controls->Add(this->pictureBox21);
			this->panel6->Controls->Add(this->label17);
			this->panel6->Controls->Add(this->label18);
			this->panel6->Controls->Add(this->pictureBox22);
			this->panel6->Location = System::Drawing::Point(22, 445);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(237, 350);
			this->panel6->TabIndex = 26;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(49, 282);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(134, 37);
			this->button6->TabIndex = 22;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(14, 76);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(32, 32);
			this->pictureBox20->TabIndex = 17;
			this->pictureBox20->TabStop = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(56, 131);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(152, 48);
			this->label16->TabIndex = 21;
			this->label16->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox21
			// 
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(14, 138);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(32, 32);
			this->pictureBox21->TabIndex = 18;
			this->pictureBox21->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(56, 81);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(66, 25);
			this->label17->TabIndex = 20;
			this->label17->Text = L"45/70";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(14, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(94, 39);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Toey";
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Location = System::Drawing::Point(3, 3);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(230, 343);
			this->pictureBox22->TabIndex = 16;
			this->pictureBox22->TabStop = false;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->button7);
			this->panel7->Controls->Add(this->pictureBox23);
			this->panel7->Controls->Add(this->label19);
			this->panel7->Controls->Add(this->pictureBox24);
			this->panel7->Controls->Add(this->label20);
			this->panel7->Controls->Add(this->label21);
			this->panel7->Controls->Add(this->pictureBox25);
			this->panel7->Location = System::Drawing::Point(272, 445);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(237, 350);
			this->panel7->TabIndex = 27;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(49, 282);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(134, 37);
			this->button7->TabIndex = 22;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// pictureBox23
			// 
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(14, 76);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(32, 32);
			this->pictureBox23->TabIndex = 17;
			this->pictureBox23->TabStop = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(56, 131);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(152, 48);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox24
			// 
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(14, 138);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(32, 32);
			this->pictureBox24->TabIndex = 18;
			this->pictureBox24->TabStop = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(56, 81);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(66, 25);
			this->label20->TabIndex = 20;
			this->label20->Text = L"45/70";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(14, 20);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(94, 39);
			this->label21->TabIndex = 19;
			this->label21->Text = L"Toey";
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox25->Location = System::Drawing::Point(3, 3);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(230, 343);
			this->pictureBox25->TabIndex = 16;
			this->pictureBox25->TabStop = false;
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->button8);
			this->panel8->Controls->Add(this->pictureBox26);
			this->panel8->Controls->Add(this->label22);
			this->panel8->Controls->Add(this->pictureBox27);
			this->panel8->Controls->Add(this->label23);
			this->panel8->Controls->Add(this->label24);
			this->panel8->Controls->Add(this->pictureBox28);
			this->panel8->Location = System::Drawing::Point(522, 445);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(237, 350);
			this->panel8->TabIndex = 27;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(49, 282);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(134, 37);
			this->button8->TabIndex = 22;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// pictureBox26
			// 
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(14, 76);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(32, 32);
			this->pictureBox26->TabIndex = 17;
			this->pictureBox26->TabStop = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(56, 131);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(152, 48);
			this->label22->TabIndex = 21;
			this->label22->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox27
			// 
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(14, 138);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(32, 32);
			this->pictureBox27->TabIndex = 18;
			this->pictureBox27->TabStop = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(56, 81);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(66, 25);
			this->label23->TabIndex = 20;
			this->label23->Text = L"45/70";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(14, 20);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(94, 39);
			this->label24->TabIndex = 19;
			this->label24->Text = L"Toey";
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox28->Location = System::Drawing::Point(3, 3);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(230, 343);
			this->pictureBox28->TabIndex = 16;
			this->pictureBox28->TabStop = false;
			// 
			// panel9
			// 
			this->panel9->Controls->Add(this->button9);
			this->panel9->Controls->Add(this->pictureBox29);
			this->panel9->Controls->Add(this->label25);
			this->panel9->Controls->Add(this->pictureBox30);
			this->panel9->Controls->Add(this->label26);
			this->panel9->Controls->Add(this->label27);
			this->panel9->Controls->Add(this->pictureBox31);
			this->panel9->Location = System::Drawing::Point(772, 445);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(237, 350);
			this->panel9->TabIndex = 27;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(49, 282);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(134, 37);
			this->button9->TabIndex = 22;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// pictureBox29
			// 
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(14, 76);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(32, 32);
			this->pictureBox29->TabIndex = 17;
			this->pictureBox29->TabStop = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(56, 131);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(152, 48);
			this->label25->TabIndex = 21;
			this->label25->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox30
			// 
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(14, 138);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(32, 32);
			this->pictureBox30->TabIndex = 18;
			this->pictureBox30->TabStop = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(56, 81);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(66, 25);
			this->label26->TabIndex = 20;
			this->label26->Text = L"45/70";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(14, 20);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(94, 39);
			this->label27->TabIndex = 19;
			this->label27->Text = L"Toey";
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Location = System::Drawing::Point(3, 3);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(230, 343);
			this->pictureBox31->TabIndex = 16;
			this->pictureBox31->TabStop = false;
			// 
			// panel10
			// 
			this->panel10->Controls->Add(this->button10);
			this->panel10->Controls->Add(this->pictureBox32);
			this->panel10->Controls->Add(this->label28);
			this->panel10->Controls->Add(this->pictureBox33);
			this->panel10->Controls->Add(this->label29);
			this->panel10->Controls->Add(this->label30);
			this->panel10->Controls->Add(this->pictureBox34);
			this->panel10->Location = System::Drawing::Point(1022, 445);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(237, 350);
			this->panel10->TabIndex = 27;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(49, 282);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(134, 37);
			this->button10->TabIndex = 22;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// pictureBox32
			// 
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(14, 76);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(32, 32);
			this->pictureBox32->TabIndex = 17;
			this->pictureBox32->TabStop = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(56, 131);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(152, 48);
			this->label28->TabIndex = 21;
			this->label28->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox33
			// 
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(14, 138);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(32, 32);
			this->pictureBox33->TabIndex = 18;
			this->pictureBox33->TabStop = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(56, 81);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(66, 25);
			this->label29->TabIndex = 20;
			this->label29->Text = L"45/70";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(14, 20);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(94, 39);
			this->label30->TabIndex = 19;
			this->label30->Text = L"Toey";
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox34->Location = System::Drawing::Point(3, 3);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(230, 343);
			this->pictureBox34->TabIndex = 16;
			this->pictureBox34->TabStop = false;
			// 
			// panel11
			// 
			this->panel11->Controls->Add(this->button11);
			this->panel11->Controls->Add(this->pictureBox35);
			this->panel11->Controls->Add(this->label31);
			this->panel11->Controls->Add(this->pictureBox36);
			this->panel11->Controls->Add(this->label32);
			this->panel11->Controls->Add(this->label33);
			this->panel11->Controls->Add(this->pictureBox37);
			this->panel11->Location = System::Drawing::Point(22, 810);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(237, 350);
			this->panel11->TabIndex = 27;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(49, 282);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(134, 37);
			this->button11->TabIndex = 22;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// pictureBox35
			// 
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(14, 76);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(32, 32);
			this->pictureBox35->TabIndex = 17;
			this->pictureBox35->TabStop = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(56, 131);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(152, 48);
			this->label31->TabIndex = 21;
			this->label31->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox36
			// 
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(14, 138);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(32, 32);
			this->pictureBox36->TabIndex = 18;
			this->pictureBox36->TabStop = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(56, 81);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(66, 25);
			this->label32->TabIndex = 20;
			this->label32->Text = L"45/70";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(14, 20);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(94, 39);
			this->label33->TabIndex = 19;
			this->label33->Text = L"Toey";
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox37->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox37->Location = System::Drawing::Point(3, 3);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(230, 343);
			this->pictureBox37->TabIndex = 16;
			this->pictureBox37->TabStop = false;
			// 
			// panel12
			// 
			this->panel12->Controls->Add(this->button12);
			this->panel12->Controls->Add(this->pictureBox38);
			this->panel12->Controls->Add(this->label34);
			this->panel12->Controls->Add(this->pictureBox39);
			this->panel12->Controls->Add(this->label35);
			this->panel12->Controls->Add(this->label36);
			this->panel12->Controls->Add(this->pictureBox40);
			this->panel12->Location = System::Drawing::Point(272, 810);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(237, 350);
			this->panel12->TabIndex = 28;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(49, 282);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(134, 37);
			this->button12->TabIndex = 22;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// pictureBox38
			// 
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(14, 76);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(32, 32);
			this->pictureBox38->TabIndex = 17;
			this->pictureBox38->TabStop = false;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(56, 131);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(152, 48);
			this->label34->TabIndex = 21;
			this->label34->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox39
			// 
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(14, 138);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(32, 32);
			this->pictureBox39->TabIndex = 18;
			this->pictureBox39->TabStop = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(56, 81);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(66, 25);
			this->label35->TabIndex = 20;
			this->label35->Text = L"45/70";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(14, 20);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(94, 39);
			this->label36->TabIndex = 19;
			this->label36->Text = L"Toey";
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox40->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox40->Location = System::Drawing::Point(3, 3);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(230, 343);
			this->pictureBox40->TabIndex = 16;
			this->pictureBox40->TabStop = false;
			// 
			// panel13
			// 
			this->panel13->Controls->Add(this->button13);
			this->panel13->Controls->Add(this->pictureBox41);
			this->panel13->Controls->Add(this->label37);
			this->panel13->Controls->Add(this->pictureBox42);
			this->panel13->Controls->Add(this->label38);
			this->panel13->Controls->Add(this->label39);
			this->panel13->Controls->Add(this->pictureBox43);
			this->panel13->Location = System::Drawing::Point(522, 810);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(237, 350);
			this->panel13->TabIndex = 28;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(49, 282);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(134, 37);
			this->button13->TabIndex = 22;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// pictureBox41
			// 
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(14, 76);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(32, 32);
			this->pictureBox41->TabIndex = 17;
			this->pictureBox41->TabStop = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(56, 131);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(152, 48);
			this->label37->TabIndex = 21;
			this->label37->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox42
			// 
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(14, 138);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(32, 32);
			this->pictureBox42->TabIndex = 18;
			this->pictureBox42->TabStop = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(56, 81);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(66, 25);
			this->label38->TabIndex = 20;
			this->label38->Text = L"45/70";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(14, 20);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(94, 39);
			this->label39->TabIndex = 19;
			this->label39->Text = L"Toey";
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox43->Location = System::Drawing::Point(3, 3);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(230, 343);
			this->pictureBox43->TabIndex = 16;
			this->pictureBox43->TabStop = false;
			// 
			// panel14
			// 
			this->panel14->Controls->Add(this->button14);
			this->panel14->Controls->Add(this->pictureBox44);
			this->panel14->Controls->Add(this->label40);
			this->panel14->Controls->Add(this->pictureBox45);
			this->panel14->Controls->Add(this->label41);
			this->panel14->Controls->Add(this->label42);
			this->panel14->Controls->Add(this->pictureBox46);
			this->panel14->Location = System::Drawing::Point(772, 810);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(237, 350);
			this->panel14->TabIndex = 28;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(49, 282);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(134, 37);
			this->button14->TabIndex = 22;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// pictureBox44
			// 
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(14, 76);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(32, 32);
			this->pictureBox44->TabIndex = 17;
			this->pictureBox44->TabStop = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(56, 131);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(152, 48);
			this->label40->TabIndex = 21;
			this->label40->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox45
			// 
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(14, 138);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(32, 32);
			this->pictureBox45->TabIndex = 18;
			this->pictureBox45->TabStop = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(56, 81);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(66, 25);
			this->label41->TabIndex = 20;
			this->label41->Text = L"45/70";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(14, 20);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(94, 39);
			this->label42->TabIndex = 19;
			this->label42->Text = L"Toey";
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox46->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox46->Location = System::Drawing::Point(3, 3);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(230, 343);
			this->pictureBox46->TabIndex = 16;
			this->pictureBox46->TabStop = false;
			// 
			// panel15
			// 
			this->panel15->Controls->Add(this->button15);
			this->panel15->Controls->Add(this->pictureBox47);
			this->panel15->Controls->Add(this->label43);
			this->panel15->Controls->Add(this->pictureBox48);
			this->panel15->Controls->Add(this->label44);
			this->panel15->Controls->Add(this->label45);
			this->panel15->Controls->Add(this->pictureBox49);
			this->panel15->Location = System::Drawing::Point(1022, 810);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(237, 350);
			this->panel15->TabIndex = 28;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(49, 282);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(134, 37);
			this->button15->TabIndex = 22;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// pictureBox47
			// 
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(14, 76);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(32, 32);
			this->pictureBox47->TabIndex = 17;
			this->pictureBox47->TabStop = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(56, 131);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(152, 48);
			this->label43->TabIndex = 21;
			this->label43->Text = L"Open 06.00 P.M.\nClose 03.00 A.M.";
			// 
			// pictureBox48
			// 
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(14, 138);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(32, 32);
			this->pictureBox48->TabIndex = 18;
			this->pictureBox48->TabStop = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(56, 81);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(66, 25);
			this->label44->TabIndex = 20;
			this->label44->Text = L"45/70";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(14, 20);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(94, 39);
			this->label45->TabIndex = 19;
			this->label45->Text = L"Toey";
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox49->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox49->Location = System::Drawing::Point(3, 3);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(230, 343);
			this->pictureBox49->TabIndex = 16;
			this->pictureBox49->TabStop = false;
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
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ToeyMenu";
			this->Load += gcnew System::EventHandler(this, &ToeyMenu::ToeyMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
private:System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	label6->Text = "NiceSu";
}
private:System::Void ToeyMenu_Load(System::Object^ sender, System::EventArgs^ e) {
	label1->Parent = pictureBox5;
	label2->Parent = pictureBox5;
	label3->Parent = pictureBox5;
	pictureBox6->Parent = pictureBox5;
	pictureBox7->Parent = pictureBox5;
	label4->Parent = pictureBox10;
	label5->Parent = pictureBox10;
	label6->Parent = pictureBox10;
	pictureBox8->Parent = pictureBox10;
	pictureBox9->Parent = pictureBox10;

}
private: System::Void button3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_MouseHover(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox13_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void panel1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}