#include "pch.h"
#include "Ticket.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TicketControl::Ticket form;
    Application::Run(% form);
}