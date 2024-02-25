#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
#include "MyUserControl.h"
#include "../TicketControl/Ticket.h"
#include "regist.h"
#include "sendMail.h"
#include "MoveToMp.h"
#include "partnerRegist.h"
#include "User.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
    Pakreserve1::sendMail mailForm;
    Pakreserve1::MoveToMp movetoMpForm;
    Pakreserve1::partnerRegist regist2Form;
    Pakreserve1::regist registForm;
    Pakreserve1::Profile profileform;

    form2.ShowDialog();
    //User^ user = form2.user;
    form2.ShowDialog();
    User^ user = form2.user;
    //profileform.switchToBook = true;

    Pakreserve1::MPBar mpform(user);

    while (true) {
        if (mpform.switchToProfile||form.switchToProfile||profileform.switchToProfile) {
            profileform.ShowDialog();
            mpform.switchToProfile = false;
            form.switchToProfile = false;
            profileform.switchToProfile = false;
        }
        else if (form2.switchToRegister) {
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
            mpform.ShowDialog();
            form.switchToMP = false;
        }
        else if (registForm.switchToReg2) {
            registForm.switchToReg2 = false;
            regist2Form.ShowDialog();
        }
        else if (movetoMpForm.switchToPakForm) {
            form.ShowDialog();
            movetoMpForm.switchToPakForm = false;
        }
        else {
            break;
        }

    }

}