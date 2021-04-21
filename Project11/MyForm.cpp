#include "MyForm.h"
#include <array>

using namespace System;
using namespace System::Windows::Forms;


[STAThread]

void main(cli::array < System::String^ >^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Project11::MyForm form;
    Application::Run(% form);
}