#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "regist.h"
#include "nj.h"
#include "Pakky.h"
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
    Pakreserve1::nj njForm;
    Pakreserve1::Pakky PkForm;
    PkForm.switchToCalender = true;
    //njForm.ShowDialog();
    while (true) {
        if (PkForm.switchToCalender) {
            njForm.ShowDialog();
            PkForm.switchToCalender = false;
        }
        else if (njForm.switchToPkForm) {
            PkForm.ShowDialog();
            njForm.switchToPkForm = false;
        }

        else {
            break;
        }

    }

    

}