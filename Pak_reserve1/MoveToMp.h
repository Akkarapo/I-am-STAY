#pragma once

namespace Pakreserve1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MoveToMp
	/// </summary>
	public ref class MoveToMp : public System::Windows::Forms::Form
	{
	public:
		MoveToMp(void)
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
		~MoveToMp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ MoveToPakForm;
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
			this->MoveToPakForm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// MoveToPakForm
			// 
			this->MoveToPakForm->Location = System::Drawing::Point(457, 242);
			this->MoveToPakForm->Name = L"MoveToPakForm";
			this->MoveToPakForm->Size = System::Drawing::Size(555, 208);
			this->MoveToPakForm->TabIndex = 0;
			this->MoveToPakForm->Text = L"button1";
			this->MoveToPakForm->UseVisualStyleBackColor = true;
			this->MoveToPakForm->Click += gcnew System::EventHandler(this, &MoveToMp::MoveToPakForm_Click);
			// 
			// MoveToMp
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->ClientSize = System::Drawing::Size(1262, 673);
			this->Controls->Add(this->MoveToPakForm);
			this->Name = L"MoveToMp";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MoveToMp";
			this->Load += gcnew System::EventHandler(this, &MoveToMp::MoveToMp_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MoveToMp_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	public: bool switchToPakForm = false;
	private: System::Void MoveToPakForm_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToPakForm = true;
		this->Close();
	}
	};
}
