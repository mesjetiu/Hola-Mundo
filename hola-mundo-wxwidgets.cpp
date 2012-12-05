#include <wx/wx.h>

class MainApp : public wxApp
{
	public:
		virtual bool OnInit();
};

bool MainApp::OnInit()
{
	wxPrintf( wxT("¡Hola, Mundo!") );
	return false;
}

IMPLEMENT_APP(MainApp);
