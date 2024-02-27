/***************************************************************
 * Name:      ProjetCalendarMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Groupe 8 (kevinhounsa7@gmail.com)
 * Created:   2024-02-08
 * Copyright: Groupe 8 (uac.bj)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "ProjetCalendarMain.h"
#include <wx/msgdlg.h>

//(*InternalHeaders(ProjetCalendarFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(ProjetCalendarFrame)
const long ProjetCalendarFrame::ID_STATICTEXT1 = wxNewId();
const long ProjetCalendarFrame::ID_STATICTEXT2 = wxNewId();
const long ProjetCalendarFrame::ID_STATICTEXT3 = wxNewId();
const long ProjetCalendarFrame::ID_BUTTON1 = wxNewId();
const long ProjetCalendarFrame::ID_BUTTON2 = wxNewId();
const long ProjetCalendarFrame::ID_PANEL1 = wxNewId();
const long ProjetCalendarFrame::idMenuQuit = wxNewId();
const long ProjetCalendarFrame::idMenuAbout = wxNewId();
const long ProjetCalendarFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(ProjetCalendarFrame,wxFrame)
    //(*EventTable(ProjetCalendarFrame)
    //*)
END_EVENT_TABLE()

ProjetCalendarFrame::ProjetCalendarFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(ProjetCalendarFrame)
    wxBoxSizer* BoxSizer1;
    wxBoxSizer* BoxSizer2;
    wxBoxSizer* BoxSizer3;
    wxBoxSizer* BoxSizer4;
    wxMenu* Menu1;
    wxMenu* Menu2;
    wxMenuBar* MenuBar1;
    wxMenuItem* MenuItem1;
    wxMenuItem* MenuItem2;

    Create(parent, wxID_ANY, _("C-Calendar_Notebook"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
    Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    Panel1->SetBackgroundColour(wxColour(255,255,198));
    wxFont Panel1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
    Panel1->SetFont(Panel1Font);
    BoxSizer1 = new wxBoxSizer(wxVERTICAL);
    StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("START PAGE"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
    StaticText1->SetBackgroundColour(wxColour(34,34,255));
    wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
    StaticText1->SetFont(StaticText1Font);
    BoxSizer1->Add(StaticText1, 0, wxALL|wxEXPAND, 0);
    BoxSizer3 = new wxBoxSizer(wxVERTICAL);
    StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("BIENVENU !!"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxBORDER_DOUBLE, _T("ID_STATICTEXT2"));
    BoxSizer3->Add(StaticText2, 0, wxALL|wxEXPAND, 5);
    BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
    StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("\n\n\n\nApplication C-Calendar_Notebook...\n\n\n\n\n\n                 "), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE|wxBORDER_DOUBLE, _T("ID_STATICTEXT3"));
    BoxSizer4->Add(StaticText3, 1, wxALL|wxEXPAND, 5);
    BoxSizer3->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
    BoxSizer1->Add(BoxSizer3, 1, wxALL|wxEXPAND, 5);
    BoxSizer2 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(Panel1, ID_BUTTON1, _("RETOUR"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer2->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    Button2 = new wxButton(Panel1, ID_BUTTON2, _("CALENDRIER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    BoxSizer2->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    BoxSizer1->Add(BoxSizer2, 0, wxALL|wxALIGN_RIGHT, 5);
    Panel1->SetSizer(BoxSizer1);
    BoxSizer1->Fit(Panel1);
    BoxSizer1->SetSizeHints(Panel1);
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ProjetCalendarFrame::Boutton_Retour);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&ProjetCalendarFrame::BouttonCalendrier);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProjetCalendarFrame::OnQuit);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&ProjetCalendarFrame::OnAbout);
    //*)
    //MonEvenement =  MyEvent(file1, file2, file3, file4, file5) ;
}

ProjetCalendarFrame::~ProjetCalendarFrame()
{
    //(*Destroy(ProjetCalendarFrame)
    //*)
}

void ProjetCalendarFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void ProjetCalendarFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void ProjetCalendarFrame::Boutton_Retour(wxCommandEvent& event)
{
    Close();
}

void ProjetCalendarFrame::BouttonCalendrier(wxCommandEvent& event)
{
    CalendarFrame * calendrier = new CalendarFrame(this);
    calendrier -> Show();
}
