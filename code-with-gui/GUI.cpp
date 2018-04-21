#include "unitParent.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

#include "GUI.h"

[STAThreadAttribute]
int Main(cli::array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	GUICS205::GUI form;
	Application::Run(%form);

	return 0;
}

