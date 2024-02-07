#include "PakForm.h"
#include "Login.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
   
    form2.ShowDialog();
    User^ user = form2.user;

    if (user != nullptr) {
        Application::Run(% form);
    }
    else {
        MessageBox::Show("WTF","WTF",MessageBoxButtons::OK);
    }


}