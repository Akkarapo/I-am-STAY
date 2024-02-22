#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace TicketControl {

	/// <summary>
	/// Summary for Ticket
	/// </summary>
	public ref class Ticket : public System::Windows::Forms::UserControl
	{
	public:
		Ticket(void)
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
		~Ticket()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ Date;
	public: System::Windows::Forms::Label^ BarNameTic;

	public: System::Windows::Forms::Label^ Name;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ticket::typeid));
			this->Date = (gcnew System::Windows::Forms::Label());
			this->BarNameTic = (gcnew System::Windows::Forms::Label());
			this->Name = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Date
			// 
			this->Date->AutoSize = true;
			this->Date->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Date->ForeColor = System::Drawing::Color::LightGray;
			this->Date->Location = System::Drawing::Point(223, 279);
			this->Date->Name = L"Date";
			this->Date->Size = System::Drawing::Size(103, 22);
			this->Date->TabIndex = 0;
			this->Date->Text = L"20 Feb 2024";
			this->Date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Date->Click += gcnew System::EventHandler(this, &Ticket::Date_Click);
			// 
			// BarNameTic
			// 
			this->BarNameTic->AutoSize = true;
			this->BarNameTic->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BarNameTic->ForeColor = System::Drawing::Color::LightGray;
			this->BarNameTic->Location = System::Drawing::Point(310, 200);
			this->BarNameTic->Name = L"BarNameTic";
			this->BarNameTic->Size = System::Drawing::Size(145, 34);
			this->BarNameTic->TabIndex = 1;
			this->BarNameTic->Text = L"OverTime";
			this->BarNameTic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Name
			// 
			this->Name->AutoSize = true;
			this->Name->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name->ForeColor = System::Drawing::Color::LightGray;
			this->Name->Location = System::Drawing::Point(428, 279);
			this->Name->Name = L"Name";
			this->Name->Size = System::Drawing::Size(86, 22);
			this->Name->TabIndex = 2;
			this->Name->Text = L"CoCoNuT";
			this->Name->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Ticket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->Controls->Add(this->Name);
			this->Controls->Add(this->BarNameTic);
			this->Controls->Add(this->Date);
			this->DoubleBuffered = true;
			this->Name = L"Ticket";
			this->Size = System::Drawing::Size(877, 380);
			this->Load += gcnew System::EventHandler(this, &Ticket::Ticket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: property String^ NameText {
		String^ get() {
			return Name->Text;
		}
		void set(String^ text) {
			Name->Text = text;
		}
	}

private: System::Void Date_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void Ticket_Load(System::Object^ sender, System::EventArgs^ e) {
	this->Date->Text = DateTime::Now.ToLongDateString();
}
};
}
