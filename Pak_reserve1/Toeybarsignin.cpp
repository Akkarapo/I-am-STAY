#include "Barreg.h"
#include "ToeyMenu.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::Barreg form;
    Pakreserve1::ToeyMenu form2;
    Application::Run(% form);
}