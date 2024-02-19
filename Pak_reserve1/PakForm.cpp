#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "regist.h"
#include "sendMail.h"
#include "MoveToMp.h"

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
    Pakreserve1::sendMail mailForm;
    Pakreserve1::MoveToMp movetoMpForm;
    //Application::Run(% form);
    //mailForm.ShowDialog();
    registForm.switchToLogin = true;
    
    while (true) {
        if (form2.switchToRegister) {
            registForm.ShowDialog();
            form2.switchToRegister = false;
        }
        else if (registForm.switchToLogin || mailForm.switchToLogin) {
            form2.ShowDialog();
            registForm.switchToLogin = false;
            mailForm.switchToLogin = false;
        }
        else if (form2.switchToPakForm) {
            form.ShowDialog();
            form2.switchToPakForm = false;
        }
        else if (form2.switchToForgetPwd) {
            mailForm.ShowDialog();
            form2.switchToForgetPwd = false;
        }
        else if (form.switchToMP) {
            movetoMpForm.ShowDialog();
            form.switchToMP = false;
        }
        else {
            break;
        }

    }


    

}