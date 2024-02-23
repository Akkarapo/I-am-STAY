#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pakreserve1 {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ Name;
	public: System::Windows::Forms::Label^ BarName;
	protected:

	public: System::Windows::Forms::Label^ Date;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyUserControl::typeid));
			this->Name = (gcnew System::Windows::Forms::Label());
			this->BarName = (gcnew System::Windows::Forms::Label());
			this->Date = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::Color::LightGray;
			this->Name->Location = System::Drawing::Point(451, 311);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(86, 22);
			this->Name->TabIndex = 5;
			this->Name->Text = L"CoCoNuT";
			this->Name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BarName
			// 
			this->BarName->AutoSize = true;
			this->BarName->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarName->ForeColor = System::Drawing::Color::LightGray;
			this->BarName->Location = System::Drawing::Point(335, 230);
			this->BarName->Name = L"BarName";
			this->BarName->Size = System::Drawing::Size(145, 34);
			this->BarName->TabIndex = 4;
			this->BarName->Text = L"OverTime";
			this->BarName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::Color::LightGray;
			this->Date->Location = System::Drawing::Point(228, 311);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(103, 22);
			this->Date->TabIndex = 3;
			this->Date->Text = L"20 Feb 2024";
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->Controls->Add(this->Name);
			this->Controls->Add(this->BarName);
			this->Controls->Add(this->Date);
			//this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(877, 380);
			this->Load += gcnew System::EventHandler(this, &MyUserControl::MyUserControl_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyUserControl_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Date->Text = DateTime::Now.ToLongDateString();
	}
};
}
