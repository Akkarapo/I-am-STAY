#include "PakForm.h"
#include "Login.h"
#include "ToeyMenu.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
    Pakreserve1::ToeyMenu form3;
    Application::Run(% form3);
    
}