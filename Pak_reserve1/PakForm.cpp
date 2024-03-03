#include "PakForm.h"
#include "Barreg.h"
#include "ToeyMenu.h"
#include "Login.h"
#include "Profile.h"
#include "MyUserControl.h"
#include "../TicketControl/Ticket.h"
#include "regist.h"
#include "sendMail.h"
#include "MoveToMp.h"
#include "partnerRegist.h"
#include "User.h"
#include "MPBarnd.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

   
   void main(array<String ^> ^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::Login form2;
    Pakreserve1::sendMail mailForm;
    // Pakreserve1::MoveToMp movetoMpForm;
    Pakreserve1::partnerRegist regist2Form;
    Pakreserve1::regist registForm;
    Pakreserve1::ToeyMenu Toeyform;

    //Toeyform.ShowDialog();
    form2.ShowDialog();
    //User^ user = form2.user;
    //User^ user = form2.user;
    //profileform.switchToBook = true;

   
    //mpform.ShowDialog();
        while (form2.user == nullptr) {
            if (form2.switchToRegister) {
                registForm.ShowDialog();
                form2.switchToRegister = false;
            }
            else if (registForm.switchToLogin || mailForm.switchToLogin) {
                form2.ShowDialog();
                registForm.switchToLogin = false;
                mailForm.switchToLogin = false;
            }
            else if (form2.switchToForgetPwd) {
                mailForm.ShowDialog();
                form2.switchToForgetPwd = false;
            }
            else {
                return;
            }
        }  
        User^ user = form2.user;
        Pakreserve1::PakForm form(user);
        Pakreserve1::MPBarnd mpform(user);
        Pakreserve1::Profile profileform(user);
        while (true) {
        if (mpform.switchToProfile||form.switchToProfile||profileform.switchToProfile) {
            profileform.ShowDialog();
            mpform.switchToProfile = false;
            form.switchToProfile = false;
            profileform.switchToProfile = false;
        }

        else if (form2.switchToToey) {
            Toeyform.ShowDialog();
            form2.switchToToey = false;
        }
        
        else if (registForm.switchToReg2) {
            registForm.switchToReg2 = false;
            regist2Form.ShowDialog();
        }
        else if (form.switchToMP)
        {
            form.switchToMP = false;
            mpform.ShowDialog();
        }
        else if (Toeyform.switchToPakForm) 
        {
            Toeyform.switchToPakForm = false;
            form.ShowDialog();
        }
        else
        {
            break;
        }
    }
}