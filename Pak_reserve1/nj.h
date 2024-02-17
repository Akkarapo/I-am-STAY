#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for NepjuneCalender
	/// </summary>
	public ref class nj : public System::Windows::Forms::Form
	{
	public:
		nj(void)
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
		~nj()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(391, 121);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 80);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &nj::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 56);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &nj::pictureBox1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(511, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(80, 80);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &nj::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(631, 121);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 80);
			this->button3->TabIndex = 3;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &nj::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(751, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 80);
			this->button4->TabIndex = 4;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &nj::button4_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::LightGray;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox2->Location = System::Drawing::Point(59, 96);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(230, 343);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bell MT", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(71, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 184);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Bar \r\nNo.1";
			this->label1->Click += gcnew System::EventHandler(this, &nj::label1_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(872, 121);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 80);
			this->button5->TabIndex = 7;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &nj::button5_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(1111, 121);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(80, 80);
			this->button7->TabIndex = 9;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &nj::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(991, 121);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 80);
			this->button6->TabIndex = 8;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &nj::button6_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(1210, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 38);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(995, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(184, 22);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &nj::textBox1_TextChanged);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(391, 231);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(80, 80);
			this->button8->TabIndex = 18;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &nj::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(511, 231);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(80, 80);
			this->button9->TabIndex = 17;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &nj::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(631, 231);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(80, 80);
			this->button10->TabIndex = 16;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &nj::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(751, 231);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(80, 80);
			this->button11->TabIndex = 15;
			this->button11->Text = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &nj::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(872, 231);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(80, 80);
			this->button12->TabIndex = 12;
			this->button12->Text = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &nj::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(991, 231);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(80, 80);
			this->button13->TabIndex = 14;
			this->button13->Text = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &nj::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(1111, 231);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(80, 80);
			this->button14->TabIndex = 13;
			this->button14->Text = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &nj::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(391, 341);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(80, 80);
			this->button15->TabIndex = 25;
			this->button15->Text = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &nj::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(511, 341);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(80, 80);
			this->button16->TabIndex = 24;
			this->button16->Text = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &nj::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(631, 341);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(80, 80);
			this->button17->TabIndex = 23;
			this->button17->Text = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &nj::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(751, 341);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(80, 80);
			this->button18->TabIndex = 22;
			this->button18->Text = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &nj::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(872, 341);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(80, 80);
			this->button19->TabIndex = 19;
			this->button19->Text = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &nj::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(991, 341);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(80, 80);
			this->button20->TabIndex = 21;
			this->button20->Text = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &nj::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(1111, 341);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(80, 80);
			this->button21->TabIndex = 20;
			this->button21->Text = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &nj::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(391, 451);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(80, 80);
			this->button22->TabIndex = 32;
			this->button22->Text = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &nj::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(511, 451);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(80, 80);
			this->button23->TabIndex = 31;
			this->button23->Text = L"button23";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &nj::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(631, 451);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(80, 80);
			this->button24->TabIndex = 30;
			this->button24->Text = L"button24";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &nj::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(751, 451);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(80, 80);
			this->button25->TabIndex = 29;
			this->button25->Text = L"button25";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &nj::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(872, 451);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(80, 80);
			this->button26->TabIndex = 26;
			this->button26->Text = L"button26";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &nj::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(991, 451);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(80, 80);
			this->button27->TabIndex = 28;
			this->button27->Text = L"button27";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &nj::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(1111, 451);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(80, 80);
			this->button28->TabIndex = 27;
			this->button28->Text = L"button28";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &nj::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(391, 561);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(80, 80);
			this->button29->TabIndex = 39;
			this->button29->Text = L"button29";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &nj::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(511, 561);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(80, 80);
			this->button30->TabIndex = 38;
			this->button30->Text = L"button30";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &nj::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(631, 561);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(80, 80);
			this->button31->TabIndex = 37;
			this->button31->Text = L"button31";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &nj::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(751, 561);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(80, 80);
			this->button32->TabIndex = 36;
			this->button32->Text = L"button32";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &nj::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(872, 561);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(80, 80);
			this->button33->TabIndex = 33;
			this->button33->Text = L"button33";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &nj::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(991, 562);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(80, 80);
			this->button34->TabIndex = 35;
			this->button34->Text = L"button34";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &nj::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(1111, 561);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(80, 80);
			this->button35->TabIndex = 34;
			this->button35->Text = L"button35";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &nj::button35_Click);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(69, 451);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 40;
			// 
			// nj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1262, 681);
			this->Controls->Add(this->monthCalendar1);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"nj";
			this->Text = L"NepjuneCalender";
			this->Load += gcnew System::EventHandler(this, &nj::nj_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NepjuneCalender_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToPkForm = false;
		private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}	
		private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
		private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
			this->switchToPkForm = true;
			this->Close();
		}
	private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToPkForm = true;
		this->Close();
	}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void nj_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}