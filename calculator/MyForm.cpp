#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array <String^>^ argc)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	calculator::MyForm form;

	Application::Run(%form);
}
