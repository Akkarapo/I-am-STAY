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

	/// <summary>
	/// Summary for BarNepjune
	/// </summary>
	public ref class BarNepjune : public System::Windows::Forms::Form
	{
	public:
		array<bool>^ dataTable;
		BarNepjune(void)
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
			this->SuspendLayout();
			// 
			// A1Table4P
			// 
			this->A1Table4P->BackColor = System::Drawing::Color::Transparent;
			this->A1Table4P->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A1Table4P.BackgroundImage")));
			this->A1Table4P->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A1Table4P->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A1Table4P->Location = System::Drawing::Point(515, 353);
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
			this->A2Table4P->Location = System::Drawing::Point(515, 467);
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
			this->A6Table4P->Location = System::Drawing::Point(854, 580);
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
			this->A7Table4P->Location = System::Drawing::Point(1017, 467);
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
			this->A1Table4PGreen->Name = L"A1Table4PGreen";
			this->A1Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A1Table4PGreen->TabIndex = 22;
			this->A1Table4PGreen->TabStop = false;
			// 
			// A2Table4PGreen
			// 
			this->A2Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A2Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A2Table4PGreen.BackgroundImage")));
			this->A2Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A2Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A2Table4PGreen->Location = System::Drawing::Point(515, 467);
			this->A2Table4PGreen->Name = L"A2Table4PGreen";
			this->A2Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A2Table4PGreen->TabIndex = 23;
			this->A2Table4PGreen->TabStop = false;
			// 
			// A3Table4PGreen
			// 
			this->A3Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A3Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A3Table4PGreen.BackgroundImage")));
			this->A3Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A3Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A3Table4PGreen->Location = System::Drawing::Point(515, 580);
			this->A3Table4PGreen->Name = L"A3Table4PGreen";
			this->A3Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A3Table4PGreen->TabIndex = 24;
			this->A3Table4PGreen->TabStop = false;
			// 
			// A4Table4PGreen
			// 
			this->A4Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A4Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A4Table4PGreen.BackgroundImage")));
			this->A4Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A4Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A4Table4PGreen->Location = System::Drawing::Point(628, 580);
			this->A4Table4PGreen->Name = L"A4Table4PGreen";
			this->A4Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A4Table4PGreen->TabIndex = 25;
			this->A4Table4PGreen->TabStop = false;
			// 
			// A5Table4PGreen
			// 
			this->A5Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A5Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A5Table4PGreen.BackgroundImage")));
			this->A5Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A5Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A5Table4PGreen->Location = System::Drawing::Point(741, 580);
			this->A5Table4PGreen->Name = L"A5Table4PGreen";
			this->A5Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A5Table4PGreen->TabIndex = 26;
			this->A5Table4PGreen->TabStop = false;
			// 
			// A6Table4PGreen
			// 
			this->A6Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A6Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A6Table4PGreen.BackgroundImage")));
			this->A6Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A6Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A6Table4PGreen->Location = System::Drawing::Point(854, 580);
			this->A6Table4PGreen->Name = L"A6Table4PGreen";
			this->A6Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A6Table4PGreen->TabIndex = 27;
			this->A6Table4PGreen->TabStop = false;
			// 
			// A7Table4PGreen
			// 
			this->A7Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A7Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A7Table4PGreen.BackgroundImage")));
			this->A7Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A7Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A7Table4PGreen->Location = System::Drawing::Point(1017, 467);
			this->A7Table4PGreen->Name = L"A7Table4PGreen";
			this->A7Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A7Table4PGreen->TabIndex = 28;
			this->A7Table4PGreen->TabStop = false;
			// 
			// A8Table4PGreen
			// 
			this->A8Table4PGreen->BackColor = System::Drawing::Color::Transparent;
			this->A8Table4PGreen->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"A8Table4PGreen.BackgroundImage")));
			this->A8Table4PGreen->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->A8Table4PGreen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->A8Table4PGreen->Location = System::Drawing::Point(1017, 353);
			this->A8Table4PGreen->Name = L"A8Table4PGreen";
			this->A8Table4PGreen->Size = System::Drawing::Size(64, 64);
			this->A8Table4PGreen->TabIndex = 29;
			this->A8Table4PGreen->TabStop = false;
			// 
			// BarNepjune
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1280, 720);
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
			this->Name = L"BarNepjune";
			this->Text = L"BarNepjune";
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
public: bool switchToMP = false;

private: System::Void ConfirmTableBarMapraw_Click(System::Object^ sender, System::EventArgs^ e) {
	using namespace std;

	System::String^ a = "";
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
		a += (dataTable[i] ? "1" : "0");
	}

	string newData;
	MarshalString(a, newData);
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

	this->Close();
}
};
}
