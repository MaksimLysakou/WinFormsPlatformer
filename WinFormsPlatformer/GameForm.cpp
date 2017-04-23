#include "GameForm.h"
#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace std;

void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    WinFormsPlatformer::GameForm form;
    Application::Run(%form);
}