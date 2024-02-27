#include "wx_pch.h"
#include "CalendarFrame.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(CalendarFrame)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(CalendarFrame)
#include <wx/font.h>
//*)

//(*IdInit(CalendarFrame)
const long CalendarFrame::ID_STATICTEXT1 = wxNewId();
const long CalendarFrame::ID_STATICTEXT2 = wxNewId();
const long CalendarFrame::ID_STATICTEXT3 = wxNewId();
const long CalendarFrame::ID_CALENDARCTRL1 = wxNewId();
const long CalendarFrame::ID_STATICTEXT4 = wxNewId();
const long CalendarFrame::ID_STATICTEXT5 = wxNewId();
const long CalendarFrame::ID_BUTTON1 = wxNewId();
const long CalendarFrame::ID_BUTTON2 = wxNewId();
const long CalendarFrame::ID_PANEL1 = wxNewId();
const long CalendarFrame::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(CalendarFrame,wxFrame)
	//(*EventTable(CalendarFrame)
	//*)
END_EVENT_TABLE()

CalendarFrame::CalendarFrame(wxWindow* parent, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(CalendarFrame)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;

	Create(parent, wxID_ANY, _("Page Calendrier"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(255,255,198));
	wxFont Panel1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Panel1->SetFont(Panel1Font);
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("PAGE CALENDRIER"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetBackgroundColour(wxColour(100,100,255));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer1->Add(StaticText1, 0, wxALL|wxEXPAND, 0);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	FlexGridSizer1 = new wxFlexGridSizer(0, 2, 1, wxDLG_UNIT(Panel1,wxSize(45,0)).GetWidth());
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("HEURE :"), wxDefaultPosition, wxSize(81,28), wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxALIGN_LEFT|wxALIGN_TOP, 5);
	heure = new wxStaticText(Panel1, ID_STATICTEXT3, _("00:00:00"), wxDefaultPosition, wxSize(109,28), wxALIGN_CENTRE|wxBORDER_STATIC, _T("ID_STATICTEXT3"));
	wxFont heureFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	heure->SetFont(heureFont);
	FlexGridSizer1->Add(heure, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(FlexGridSizer1, 1, wxALL|wxEXPAND, 3);
	BoxSizer2->Add(BoxSizer4, 0, wxTOP|wxBOTTOM|wxLEFT|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	CalendarCtrl1 = new wxCalendarCtrl(Panel1, ID_CALENDARCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, 0, _T("ID_CALENDARCTRL1"));
	BoxSizer5->Add(CalendarCtrl1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	FlexGridSizer2 = new wxFlexGridSizer(0, 2, 0, 85);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("DATE :"), wxDefaultPosition, wxSize(79,24), wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	FlexGridSizer2->Add(StaticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	date = new wxStaticText(Panel1, ID_STATICTEXT5, _("01/01/1001"), wxDefaultPosition, wxSize(114,24), wxALIGN_CENTRE|wxBORDER_STATIC, _T("ID_STATICTEXT5"));
	FlexGridSizer2->Add(date, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer6->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer6, 0, wxALL|wxEXPAND, 5);
	BoxSizer1->Add(BoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(Panel1, ID_BUTTON1, _("RETOUR"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer3->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Agenda_btn = new wxButton(Panel1, ID_BUTTON2, _("AGENDA"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer3->Add(Agenda_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1->Add(BoxSizer3, 0, wxALL|wxALIGN_RIGHT, 5);
	Panel1->SetSizer(BoxSizer1);
	BoxSizer1->Fit(Panel1);
	BoxSizer1->SetSizeHints(Panel1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(1000, false);

	Connect(ID_CALENDARCTRL1,wxEVT_CALENDAR_DAY_CHANGED,(wxObjectEventFunction)&CalendarFrame::afficher_date_event);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalendarFrame::BoutonRetour);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&CalendarFrame::Get_Agendaframe);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&CalendarFrame::Update_Date_Time);
	//*)
	//MonEvenement1 = Objet ;
	MonEvenement1 = MyEvent(file1, file2, file3, file4, file5) ;
	if (MonEvenement1.create_files())
    {
        //wxMessageBox(_("Cool!!")) ;
    }
}

CalendarFrame::~CalendarFrame()
{
	//(*Destroy(CalendarFrame)
	//*)
}

void CalendarFrame::BoutonRetour(wxCommandEvent& event)
{
    this -> Hide();
    ProjetCalendarFrame * frameretour = new ProjetCalendarFrame(this);
    frameretour -> Show();
}

void CalendarFrame::Update_Date_Time(wxTimerEvent& event)
{
    MyDateTime.Update_Date_Time();
    heure -> SetLabel(MyDateTime.Get_time());
    date -> SetLabel(MyDateTime.Get_Date());
}

void CalendarFrame::afficher_date_event(wxCalendarEvent& event)
{
    wxDateTime dateSelect = event.GetDate() ;
    date_recue = dateSelect.Format("%d/%m/%y") ;
    DialogCalendrier diag_date_event(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, date_recue);
    diag_date_event.ShowModal();
}

void CalendarFrame::Get_Agendaframe(wxCommandEvent& event)
{
    this -> Hide();
    AgendaFrame * agenda = new AgendaFrame(this, &MonEvenement1);
    agenda -> Show();
}
