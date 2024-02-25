#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Pakreserve1 {

	/// <summary>
	/// Summary for MyTicket
	/// </summary>
	public ref class MyTicket : public System::Windows::Forms::UserControl
	{
	public:
		MyTicket(void)
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
		~MyTicket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::UserControl^ userControl1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			this->userControl1 = (gcnew System::Windows::Forms::UserControl());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// userControl1
			// 
			this->userControl1->Location = System::Drawing::Point(338, 140);
			this->userControl1->Name = L"userControl1";
			this->userControl1->Size = System::Drawing::Size(8, 49);
			this->userControl1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(202, 123);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyTicket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->userControl1);
			this->Name = L"MyTicket";
			this->Size = System::Drawing::Size(682, 229);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
