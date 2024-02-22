#include "pch.h"

#include "TicketControl.h"

#include "Ticket.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    TicketControl::Ticket form;
    Application::Run(% TicketControl::Ticket)
}