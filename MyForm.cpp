#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int __clrcall WinMain(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MyForm monFormulaire;
	Application::Run(% monFormulaire);
}
