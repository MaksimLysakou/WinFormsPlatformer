#include "GameForm.h"
#include "Game.h"
#include "Player.h"

using namespace System;
using namespace System::Windows::Forms;

void Main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    WinFormsPlatformer::GameForm form;
    Application::Run(%form);
}