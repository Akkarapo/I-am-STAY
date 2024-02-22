#include "PakForm.h"
#include "Login.h"
#include "MPBar.h"
#include "Profile.h"
#include "MyUserControl.h"
#include "../TicketControl/Ticket.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Pakreserve1::PakForm form;
    Pakreserve1::Login form2;
    Pakreserve1::MPBar mpform;
    Pakreserve1::Profile profileform;
    Pakreserve1::MyUserControl Ticket;
    //TicketControl::Ticket Ticket2;
    
    
    //Application::Run(% Ticket);
    profileform.switchToBook = true;

    while (true) {
        if (profileform.switchToBook) {
            mpform.ShowDialog();
            profileform.switchToBook = false;
        }
        else if (mpform.switchToProfile) {
            profileform.ShowDialog();
            mpform.switchToProfile = false;
        }
        else {
            break;
        }

    }

}