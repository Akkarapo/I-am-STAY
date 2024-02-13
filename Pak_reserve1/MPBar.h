#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MPBar
	/// </summary>
	public ref class MPBar : public System::Windows::Forms::Form
	{
	public:
		MPBar(void)
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
		~MPBar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ BarLogo;
	protected:

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ BarName;
	private: System::Windows::Forms::Label^ ReservedBy;
	private: System::Windows::Forms::Label^ Table;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ CustomerName;
	private: System::Windows::Forms::Label^ CustomerTabel;
	private: System::Windows::Forms::PictureBox^ TicketBarLogo;
	private: System::Windows::Forms::Label^ TicketCustomerTable;


	private: System::Windows::Forms::Label^ TicketCustomerName;
	private: System::Windows::Forms::TextBox^ TicketCaution;


	private: System::Windows::Forms::Label^ TicketTable;

	private: System::Windows::Forms::Label^ TicketReservedBy;
	private: System::Windows::Forms::PictureBox^ TicketBarcode;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MPBar::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->BarLogo = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->BarName = (gcnew System::Windows::Forms::Label());
			this->ReservedBy = (gcnew System::Windows::Forms::Label());
			this->Table = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->CustomerName = (gcnew System::Windows::Forms::Label());
			this->CustomerTabel = (gcnew System::Windows::Forms::Label());
			this->TicketBarLogo = (gcnew System::Windows::Forms::PictureBox());
			this->TicketCustomerTable = (gcnew System::Windows::Forms::Label());
			this->TicketCustomerName = (gcnew System::Windows::Forms::Label());
			this->TicketCaution = (gcnew System::Windows::Forms::TextBox());
			this->TicketTable = (gcnew System::Windows::Forms::Label());
			this->TicketReservedBy = (gcnew System::Windows::Forms::Label());
			this->TicketBarcode = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarLogo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarcode))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 64);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// BarLogo
			// 
			this->BarLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BarLogo.Image")));
			this->BarLogo->Location = System::Drawing::Point(286, 159);
			this->BarLogo->Name = L"BarLogo";
			this->BarLogo->Size = System::Drawing::Size(128, 128);
			this->BarLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->BarLogo->TabIndex = 1;
			this->BarLogo->TabStop = false;
			this->BarLogo->Click += gcnew System::EventHandler(this, &MPBar::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox3->Location = System::Drawing::Point(788, -41);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(480, 720);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// BarName
			// 
			this->BarName->AutoSize = true;
			this->BarName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarName->Location = System::Drawing::Point(275, 304);
			this->BarName->Name = L"BarName";
			this->BarName->Size = System::Drawing::Size(139, 36);
			this->BarName->TabIndex = 3;
			this->BarName->Text = L"BarName";
			// 
			// ReservedBy
			// 
			this->ReservedBy->AutoSize = true;
			this->ReservedBy->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReservedBy->Location = System::Drawing::Point(120, 371);
			this->ReservedBy->Name = L"ReservedBy";
			this->ReservedBy->Size = System::Drawing::Size(147, 30);
			this->ReservedBy->TabIndex = 4;
			this->ReservedBy->Text = L"Reserved By";
			// 
			// Table
			// 
			this->Table->AutoSize = true;
			this->Table->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Table->Location = System::Drawing::Point(120, 431);
			this->Table->Name = L"Table";
			this->Table->Size = System::Drawing::Size(73, 30);
			this->Table->TabIndex = 5;
			this->Table->Text = L"Table";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(123, 524);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(530, 76);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"Please check in within the next 3 hours, starting from 6 p.m. Otherwise, your res"
				L"ervation will be canceled.";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1205, 11);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(35, 41);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// CustomerName
			// 
			this->CustomerName->AutoSize = true;
			this->CustomerName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerName->Location = System::Drawing::Point(305, 371);
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->Size = System::Drawing::Size(188, 30);
			this->CustomerName->TabIndex = 8;
			this->CustomerName->Text = L"CustomerName";
			// 
			// CustomerTabel
			// 
			this->CustomerTabel->AutoSize = true;
			this->CustomerTabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CustomerTabel->Location = System::Drawing::Point(233, 431);
			this->CustomerTabel->Name = L"CustomerTabel";
			this->CustomerTabel->Size = System::Drawing::Size(181, 30);
			this->CustomerTabel->TabIndex = 9;
			this->CustomerTabel->Text = L"CustomerTabel";
			// 
			// TicketBarLogo
			// 
			this->TicketBarLogo->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketBarLogo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"TicketBarLogo.Image")));
			this->TicketBarLogo->Location = System::Drawing::Point(937, 97);
			this->TicketBarLogo->Name = L"TicketBarLogo";
			this->TicketBarLogo->Size = System::Drawing::Size(200, 200);
			this->TicketBarLogo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->TicketBarLogo->TabIndex = 10;
			this->TicketBarLogo->TabStop = false;
			// 
			// TicketCustomerTable
			// 
			this->TicketCustomerTable->AutoSize = true;
			this->TicketCustomerTable->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketCustomerTable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TicketCustomerTable->Location = System::Drawing::Point(913, 371);
			this->TicketCustomerTable->Name = L"TicketCustomerTable";
			this->TicketCustomerTable->Size = System::Drawing::Size(181, 30);
			this->TicketCustomerTable->TabIndex = 15;
			this->TicketCustomerTable->Text = L"CustomerTable";
			// 
			// TicketCustomerName
			// 
			this->TicketCustomerName->AutoSize = true;
			this->TicketCustomerName->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketCustomerName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->TicketCustomerName->Location = System::Drawing::Point(998, 310);
			this->TicketCustomerName->Name = L"TicketCustomerName";
			this->TicketCustomerName->Size = System::Drawing::Size(188, 30);
			this->TicketCustomerName->TabIndex = 14;
			this->TicketCustomerName->Text = L"CustomerName";
			// 
			// TicketCaution
			// 
			this->TicketCaution->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketCaution->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->TicketCaution->Enabled = false;
			this->TicketCaution->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketCaution->Location = System::Drawing::Point(647, 442);
			this->TicketCaution->Multiline = true;
			this->TicketCaution->Name = L"TicketCaution";
			this->TicketCaution->ReadOnly = true;
			this->TicketCaution->Size = System::Drawing::Size(530, 76);
			this->TicketCaution->TabIndex = 13;
			this->TicketCaution->Text = L"Please check in within the next 3 hours, starting from 6 p.m. Otherwise, your res"
				L"ervation will be canceled.";
			// 
			// TicketTable
			// 
			this->TicketTable->AutoSize = true;
			this->TicketTable->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketTable->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketTable->Location = System::Drawing::Point(811, 371);
			this->TicketTable->Name = L"TicketTable";
			this->TicketTable->Size = System::Drawing::Size(73, 30);
			this->TicketTable->TabIndex = 12;
			this->TicketTable->Text = L"Table";
			// 
			// TicketReservedBy
			// 
			this->TicketReservedBy->AutoSize = true;
			this->TicketReservedBy->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->TicketReservedBy->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TicketReservedBy->Location = System::Drawing::Point(811, 310);
			this->TicketReservedBy->Name = L"TicketReservedBy";
			this->TicketReservedBy->Size = System::Drawing::Size(147, 30);
			this->TicketReservedBy->TabIndex = 11;
			this->TicketReservedBy->Text = L"Reserved By";
			// 
			// TicketBarcode
			// 
			this->TicketBarcode->Location = System::Drawing::Point(834, 569);
			this->TicketBarcode->Name = L"TicketBarcode";
			this->TicketBarcode->Size = System::Drawing::Size(369, 84);
			this->TicketBarcode->TabIndex = 16;
			this->TicketBarcode->TabStop = false;
			// 
			// MPBar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->TicketBarcode);
			this->Controls->Add(this->TicketCustomerTable);
			this->Controls->Add(this->TicketCustomerName);
			this->Controls->Add(this->TicketCaution);
			this->Controls->Add(this->TicketTable);
			this->Controls->Add(this->TicketReservedBy);
			this->Controls->Add(this->TicketBarLogo);
			this->Controls->Add(this->CustomerTabel);
			this->Controls->Add(this->CustomerName);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Table);
			this->Controls->Add(this->ReservedBy);
			this->Controls->Add(this->BarName);
			this->Controls->Add(this->BarLogo);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox3);
			this->Name = L"MPBar";
			this->Text = L"MPBar";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BarLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarLogo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TicketBarcode))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	};
}