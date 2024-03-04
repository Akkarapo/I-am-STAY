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
#include "BarGong.h"
#include "BarMapraw.h"
#include "BarToey.h"
#include "BarNepjune.h"
#include "BarOakkhara.h"
#include "BarSajui.h"
#include "BarAmericano.h"
#include "BarSaran.h"
#include "BarGarpanya.h"
#include "BarSTEVE.h"
#include "BarHoney.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::Login form2;
    Pakreserve1::sendMail mailForm;
    Pakreserve1::partnerRegist regist2Form;
    Pakreserve1::regist registForm;
    Pakreserve1::ToeyMenu Toeyform;
    form2.ShowDialog();



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
    Pakreserve1::BarGong bar2(user);
    Pakreserve1::BarMapraw bar3(user);
    Pakreserve1::BarToey bar4(user);
    Pakreserve1::BarNepjune bar5(user);
    Pakreserve1::BarOakkhara bar6(user);
    Pakreserve1::BarSajui bar7(user);
    Pakreserve1::BarAmericano bar8(user);
    Pakreserve1::BarSaran bar9(user);
    Pakreserve1::BarGarpanya bar11(user);
    Pakreserve1::BarSTEVE bar12(user);
    Pakreserve1::BarHoney bar13(user);


    while (true) {
        if (mpform.switchToProfile || form.switchToProfile || profileform.switchToProfile || Toeyform.switchToProfile) {
            profileform.ShowDialog();
            mpform.switchToProfile = false;
            form.switchToProfile = false;
            profileform.switchToProfile = false;
            Toeyform.switchToProfile = false;

        }

        else if (form2.switchToToey || bar2.switchToToey || bar3.switchToToey || bar4.switchToToey || bar5.switchToToey || bar6.switchToToey || bar11.switchToToey || profileform.switchToToey || mpform.switchToToey || form.switchToToey || bar7.switchToToey || bar12.switchToToey || bar8.switchToToey || bar13.switchToToey || bar9.switchToToey) {

            Toeyform.ShowDialog();
            form2.switchToToey = false;
            bar2.switchToToey = false;
            bar3.switchToToey = false;
            bar4.switchToToey = false;
            bar5.switchToToey = false;
            bar6.switchToToey = false;
            bar7.switchToToey = false;
            bar8.switchToToey = false;
            bar9.switchToToey = false;
            bar11.switchToToey = false;
            bar12.switchToToey = false;
            bar13.switchToToey = false;
            profileform.switchToToey = false;
            mpform.switchToToey = false;
            form.switchToToey = false;
        }

        else if (registForm.switchToReg2) {
            regist2Form.ShowDialog();
            registForm.switchToReg2 = false;

        }
        else if (form.switchToMP || bar2.switchToMP || bar3.switchToMP || bar9.switchToMP || bar4.switchToMP || bar5.switchToMP || bar7.switchToMP || bar6.switchToMP || bar12.switchToMP|| bar8.switchToMP || bar11.switchToMP || bar13.switchToMP)
        {
            mpform.ShowDialog();
            bar2.switchToMP = false;
            bar3.switchToMP = false;
            bar4.switchToMP = false;
            bar5.switchToMP = false;
            bar6.switchToMP = false;
            bar7.switchToMP = false;
            bar8.switchToMP = false;
            bar9.switchToMP = false;
            bar11.switchToMP = false;
            bar12.switchToMP = false;
            bar13.switchToMP = false;
            form.switchToMP = false;
        }
        else if (Toeyform.switchToPakForm)
        {
            form.ShowDialog();
            Toeyform.switchToPakForm = false;
        }
        else if (Toeyform.switchToBarGong)
        {
            bar2.ShowDialog();
            Toeyform.switchToBarGong = false;
        }
        else if (Toeyform.switchToBarMP)
        {
            bar3.ShowDialog();
            Toeyform.switchToBarMP = false;
        }
        else if (Toeyform.switchToBarToey)
        {
            bar4.ShowDialog();
            Toeyform.switchToBarToey = false;
        }
        else if (Toeyform.switchToBarNepjune)
        {
            bar5.ShowDialog();
            Toeyform.switchToBarNepjune = false;
        }
        else if (Toeyform.switchToBarOakkhara)
        {
            bar6.ShowDialog();
            Toeyform.switchToBarOakkhara = false;
        }
        else if (Toeyform.switchToBarSajui)
        {
            bar7.ShowDialog();
            Toeyform.switchToBarSajui = false;
        }
        else if (Toeyform.switchToBarAmericano)
        {
            bar8.ShowDialog();
            Toeyform.switchToBarAmericano = false;
        }
        else if (Toeyform.switchToBarSaran)
        {
            bar9.ShowDialog();
            Toeyform.switchToBarSaran = false;
        }
        else if (Toeyform.switchToBarGarpanya)
        {
            bar11.ShowDialog();
            Toeyform.switchToBarGarpanya = false;
        }
        else if (Toeyform.switchToBarSTEVE)
        {
            bar12.ShowDialog();
            Toeyform.switchToBarSTEVE = false;
        }
        else if (Toeyform.switchToBarHoney)
        {
            bar13.ShowDialog();
            Toeyform.switchToBarHoney = false;
        }
        else
        {
            break;
        }
        }
    }
