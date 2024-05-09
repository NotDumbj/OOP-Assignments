#include "MainM.h"



using namespace System;
using namespace System::Windows::Forms;







int main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OOPAssignment::MainM form;
    Application::Run(% form);

    return 0;
}