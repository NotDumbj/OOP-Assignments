#include <iostream>
#include <sstream>

#include "MyForm.h"
#include "timetable.h"
#include "course.h"
#include "section.h"
#include "student.h"
#include "room.h"
#include "teacher.h"

using namespace System;
using namespace System::Windows::Forms;




int main(array<String^>^ args) {

    std::cout << "\n\n\n"; //just randomly sitting there
    
    
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    OOPAssignment::MyForm form;
    Application::Run(% form);

    return 0;
}