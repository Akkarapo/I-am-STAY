#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "regist.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
    Pakreserve1::MPBar mpform;
    Pakreserve1::regist registForm;
    registForm.switchToLogin = true;
    while (true) {
        if (form2.switchToRegister) {
            registForm.ShowDialog();
            form2.switchToRegister = false;
        }
        else if (registForm.switchToLogin) {
            form2.ShowDialog();
            registForm.switchToLogin = false;
        }

    }


    

}