// Dashboard.cpp : Defines the entry point for the console application.
//

#include <wx\wx.h>

class DashApp : public wxApp
{
	virtual bool OnInit();
};

class DashFrame : public wxFrame
{
	public:
		DashFrame(const wxString& title, const wxPoint& pos, const wxSize& size);

		DECLARE_EVENT_TABLE();
};

IMPLEMENT_APP_CONSOLE(DashApp);

bool DashApp::OnInit()
{
	DashFrame *frame = new DashFrame(_("Spyder 2013 Dashboard"), wxPoint(50, 50), wxSize(800, 600));
	frame->Show(true);
	SetTopWindow(frame);
	return true;
}

BEGIN_EVENT_TABLE(DashFrame, wxFrame)
END_EVENT_TABLE()

DashFrame::DashFrame(const wxString& title, const wxPoint& pos, const wxSize& size)
	: wxFrame(NULL, -1, title, pos, size)
{
	wxButton *btn = new wxButton(this, -1, _("Reconnect"));
	CreateStatusBar();
	SetStatusText(_("Herpderp"));
}