#include "MyForm.h" 

using namespace Projekt2; 

[STAThreadAttribute]
int main() {

	Projekt2::Application::EnableVisualStyles();
	Projekt2::Application::SetCompatibleTextRenderingDefault(false);
	Projekt2::Application::Run(gcnew Projekt2::MyForm());

	return 0;
}