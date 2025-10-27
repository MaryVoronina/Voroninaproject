#include "calculator.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace Voroninaproject;
[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run (gcnew calculator());

	return 0;
}