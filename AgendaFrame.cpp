#include "wx_pch.h"
#include "AgendaFrame.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(AgendaFrame)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(AgendaFrame)
#include <wx/font.h>
//*)

//(*IdInit(AgendaFrame)
const long AgendaFrame::ID_STATICTEXT1 = wxNewId();
const long AgendaFrame::ID_STATICTEXT2 = wxNewId();
const long AgendaFrame::ID_STATICTEXT3 = wxNewId();
const long AgendaFrame::ID_LISTBOX1 = wxNewId();
const long AgendaFrame::ID_BUTTON1 = wxNewId();
const long AgendaFrame::ID_BUTTON2 = wxNewId();
const long AgendaFrame::ID_STATICTEXT6 = wxNewId();
const long AgendaFrame::ID_STATICTEXT5 = wxNewId();
const long AgendaFrame::ID_STATICTEXT4 = wxNewId();
const long AgendaFrame::ID_STATICTEXT7 = wxNewId();
const long AgendaFrame::ID_STATICTEXT8 = wxNewId();
const long AgendaFrame::ID_STATICTEXT9 = wxNewId();
const long AgendaFrame::ID_STATICTEXT10 = wxNewId();
const long AgendaFrame::ID_STATICTEXT11 = wxNewId();
const long AgendaFrame::ID_STATICTEXT12 = wxNewId();
const long AgendaFrame::ID_STATICTEXT13 = wxNewId();
const long AgendaFrame::ID_BUTTON4 = wxNewId();
const long AgendaFrame::ID_BUTTON5 = wxNewId();
const long AgendaFrame::ID_BUTTON3 = wxNewId();
const long AgendaFrame::ID_BUTTON6 = wxNewId();
const long AgendaFrame::ID_PANEL1 = wxNewId();
const long AgendaFrame::ID_TIMER1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AgendaFrame,wxFrame)
	//(*EventTable(AgendaFrame)
	//*)
END_EVENT_TABLE()

AgendaFrame::AgendaFrame(wxWindow* parent, MyEvent* Objet, wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(AgendaFrame)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxBoxSizer* BoxSizer6;
	wxBoxSizer* BoxSizer7;
	wxBoxSizer* BoxSizer8;
	wxFlexGridSizer* FlexGridSizer1;
	wxStaticBoxSizer* StaticBoxSizer1;
	wxStaticBoxSizer* StaticBoxSizer2;

	Create(parent, wxID_ANY, _("Page Agenda"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(255,255,183));
	wxFont Panel1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Panel1->SetFont(Panel1Font);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	en_tete = new wxStaticText(Panel1, ID_STATICTEXT1, _("PAGE AGENDA"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	en_tete->SetBackgroundColour(wxColour(121,121,255));
	wxFont en_teteFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	en_tete->SetFont(en_teteFont);
	BoxSizer2->Add(en_tete, 0, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Evenements"));
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	heure = new wxStaticText(Panel1, ID_STATICTEXT2, _("00:00:00"), wxDefaultPosition, wxSize(78,26), wxALIGN_CENTRE|wxBORDER_STATIC, _T("ID_STATICTEXT2"));
	wxFont heureFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	heure->SetFont(heureFont);
	BoxSizer5->Add(heure, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	date = new wxStaticText(Panel1, ID_STATICTEXT3, _("10/01/1001"), wxDefaultPosition, wxSize(97,24), wxALIGN_CENTRE|wxBORDER_STATIC, _T("ID_STATICTEXT3"));
	wxFont dateFont(16,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	date->SetFont(dateFont);
	BoxSizer5->Add(date, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer5, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Event_ListBox = new wxListBox(Panel1, ID_LISTBOX1, wxDefaultPosition, wxSize(403,279), 0, 0, wxBORDER_STATIC, wxDefaultValidator, _T("ID_LISTBOX1"));
	Event_ListBox->Append(_("========================================"));
	Event_ListBox->Append(_("                    +++++Vos Evenements++++"));
	Event_ListBox->Append(_("========================================"));
	wxFont Event_ListBoxFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Event_ListBox->SetFont(Event_ListBoxFont);
	StaticBoxSizer1->Add(Event_ListBox, 1, wxALL|wxEXPAND, 5);
	BoxSizer6 = new wxBoxSizer(wxHORIZONTAL);
	Add_btn = new wxButton(Panel1, ID_BUTTON1, _("AJOUTER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	wxFont Add_btnFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Add_btn->SetFont(Add_btnFont);
	BoxSizer6->Add(Add_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Edit_btn = new wxButton(Panel1, ID_BUTTON2, _("EDITER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	wxFont Edit_btnFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Edit_btn->SetFont(Edit_btnFont);
	BoxSizer6->Add(Edit_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticBoxSizer1->Add(BoxSizer6, 0, wxALL|wxALIGN_RIGHT, 5);
	BoxSizer3->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 5);
	BoxSizer4 = new wxBoxSizer(wxVERTICAL);
	StaticBoxSizer2 = new wxStaticBoxSizer(wxVERTICAL, Panel1, _("Preview"));
	FlexGridSizer1 = new wxFlexGridSizer(5, 2, 20, 55);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Nom :"), wxDefaultPosition, wxSize(102,24), wxALIGN_CENTRE, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText3, 0, wxALL|wxEXPAND, 5);
	Event_nom = new wxStaticText(Panel1, ID_STATICTEXT5, _("Essais Texte ecriture\n   Allo Allo"), wxDefaultPosition, wxSize(189,53), wxALIGN_CENTRE, _T("ID_STATICTEXT5"));
	Event_nom->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Event_nom, 0, wxALL|wxEXPAND, 5);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Heure :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText1, 0, wxALL|wxEXPAND, 5);
	Event_heure = new wxStaticText(Panel1, ID_STATICTEXT7, _("Label"), wxDefaultPosition, wxSize(189,24), wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
	Event_heure->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Event_heure, 0, wxALL|wxEXPAND, 5);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Date :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT8"));
	FlexGridSizer1->Add(StaticText5, 0, wxALL|wxEXPAND, 5);
	Event_date = new wxStaticText(Panel1, ID_STATICTEXT9, _("Label"), wxDefaultPosition, wxSize(189,24), wxALIGN_CENTRE, _T("ID_STATICTEXT9"));
	Event_date->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Event_date, 0, wxALL|wxEXPAND, 5);
	StaticText7 = new wxStaticText(Panel1, ID_STATICTEXT10, _("Bref Apercu :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT10"));
	FlexGridSizer1->Add(StaticText7, 0, wxALL|wxEXPAND, 5);
	Event_apercu = new wxStaticText(Panel1, ID_STATICTEXT11, _("Essais Texte ecriture\n    Allo  Allo"), wxDefaultPosition, wxSize(189,53), wxALIGN_CENTRE, _T("ID_STATICTEXT11"));
	Event_apercu->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Event_apercu, 0, wxALL|wxEXPAND, 5);
	StaticText9 = new wxStaticText(Panel1, ID_STATICTEXT12, _("Categorie"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT12"));
	FlexGridSizer1->Add(StaticText9, 0, wxALL|wxEXPAND, 5);
	Event_categ = new wxStaticText(Panel1, ID_STATICTEXT13, _("Label"), wxDefaultPosition, wxSize(189,24), wxALIGN_CENTRE, _T("ID_STATICTEXT13"));
	Event_categ->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Event_categ, 0, wxALL|wxEXPAND, 5);
	StaticBoxSizer2->Add(FlexGridSizer1, 1, wxALL|wxEXPAND, 5);
	BoxSizer8 = new wxBoxSizer(wxHORIZONTAL);
	Rappel_btn = new wxButton(Panel1, ID_BUTTON4, _("RAPPELER"), wxDefaultPosition, wxSize(112,25), 0, wxDefaultValidator, _T("ID_BUTTON4"));
	wxFont Rappel_btnFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Rappel_btn->SetFont(Rappel_btnFont);
	BoxSizer8->Add(Rappel_btn, 0, wxALL|wxEXPAND, 5);
	Remove_btn = new wxButton(Panel1, ID_BUTTON5, _("SUPPRIMER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
	wxFont Remove_btnFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Remove_btn->SetFont(Remove_btnFont);
	BoxSizer8->Add(Remove_btn, 0, wxALL|wxEXPAND, 5);
	StaticBoxSizer2->Add(BoxSizer8, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(StaticBoxSizer2, 1, wxALL|wxEXPAND, 5);
	BoxSizer7 = new wxBoxSizer(wxHORIZONTAL);
	calendrier_btn = new wxButton(Panel1, ID_BUTTON3, _("RETOUR"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
	wxFont calendrier_btnFont(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	calendrier_btn->SetFont(calendrier_btnFont);
	BoxSizer7->Add(calendrier_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Close_btn = new wxButton(Panel1, ID_BUTTON6, _("QUITTER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON6"));
	BoxSizer7->Add(Close_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer4->Add(BoxSizer7, 0, wxALL|wxALIGN_RIGHT, 5);
	BoxSizer3->Add(BoxSizer4, 1, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxEXPAND, 0);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(1000, false);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_LISTBOX1,wxEVT_COMMAND_LISTBOX_DOUBLECLICKED,(wxObjectEventFunction)&AgendaFrame::Get_Dclick_Listox);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaFrame::Add_Event);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaFrame::Edit_Event);
	Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaFrame::Remove_Event);
	Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaFrame::Return_calendrier_frame);
	Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaFrame::Close_frame);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&AgendaFrame::UpDate_Hour_Date);
	//*)
	Event_nom ->SetLabel(wxT("---"));
    Event_heure ->SetLabel(wxT("---"));
    Event_date ->SetLabel(wxT("---"));
    Event_apercu ->SetLabel(wxT("---"));
    Event_categ ->SetLabel(wxT("---"));
	AgEvent = Objet ;
	Refresh_Event_ListBox();
}

AgendaFrame::~AgendaFrame()
{
	//(*Destroy(AgendaFrame)
	//*)
}


void AgendaFrame::UpDate_Hour_Date(wxTimerEvent& event)
{
    MyWatch.Update_Date_Time();
    heure -> SetLabel(MyWatch.Get_time());
    date -> SetLabel(MyWatch.Get_Date());
}

void AgendaFrame::Return_calendrier_frame(wxCommandEvent& event)
{
    this -> Hide();
    CalendarFrame * frameretour = new CalendarFrame(this);
    frameretour -> Show();
}

void AgendaFrame::Close_frame(wxCommandEvent& event)
{
    Close();
}

void AgendaFrame::Add_Event(wxCommandEvent& event)
{
    AgendaDialog Event_diag(this, wxID_ANY, wxDefaultPosition, wxDefaultSize);
    Event_diag.ShowModal();

    Refresh_Event_ListBox();
}




void AgendaFrame::Remplir_Listbox()
{
    Event_ListBox->Append(_("========================================"));
    Event_ListBox->Append(_("                    +++++Vos Evenements++++"));
    Event_ListBox->Append(_("========================================"));
    long nbr_tot_event = AgEvent->returnId() ;
    if (nbr_tot_event != 0)
    {
        for (long j = 0; j < nbr_tot_event; j++)
        {
            wxString temp = AgEvent->GetLine_file_names(j) ;
            if (!temp.IsEmpty())
            {
                Event_ListBox->Append(_(" "+ temp));
            }
            else
                continue ;
        }

    }
}


void AgendaFrame::Get_Dclick_Listox(wxCommandEvent& event)
{
    wxListBox* Event_ListBox = dynamic_cast<wxListBox*>(event.GetEventObject());
        if (Event_ListBox)
        {
            int selectedIndex = Event_ListBox->GetSelection();

            if ((selectedIndex != wxNOT_FOUND) && (selectedIndex > 2))
            {
                selectedText = Event_ListBox->GetString(selectedIndex);
                selectedText.Trim(false);
                call_diag = true ;
                afficherPreview(selectedText) ;
            }
            else
            {
                Event_nom ->SetLabel(wxT("---"));
                Event_heure ->SetLabel(wxT("---"));
                Event_date ->SetLabel(wxT("---"));
                Event_apercu ->SetLabel(wxT("---"));
                Event_categ ->SetLabel(wxT("---"));
            }
        }
}

void AgendaFrame::afficherPreview(wxString nomSelect)
{
    if (!nomSelect.IsEmpty())
    {
        long idn = AgEvent->Search_Id_nom(nomSelect) ;
        if (idn != 0)
        {
            Event_nom ->SetLabel(AgEvent->GetInfo_file_names(idn));
            Event_heure ->SetLabel(AgEvent->GetInfo_file_hours(idn));
            Event_date ->SetLabel(AgEvent->GetInfo_file_dates(idn));
            Event_apercu ->SetLabel(AgEvent->GetInfo_file_apercu(idn));
            Event_categ ->SetLabel(AgEvent->GetInfo_file_categ(idn));
        }
        else
        {
            Event_nom ->SetLabel(wxT("---"));
            Event_heure ->SetLabel(wxT("---"));
            Event_date ->SetLabel(wxT("---"));
            Event_apercu ->SetLabel(wxT("---"));
            Event_categ ->SetLabel(wxT("---"));
        }
    }
}


void AgendaFrame::Edit_Event(wxCommandEvent& event)
{
    AgendaDialog Event_diag(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, call_diag,selectedText);
    Event_diag.ShowModal();

    Refresh_Event_ListBox();
}

void AgendaFrame::Remove_Event(wxCommandEvent& event)
{
    long idn = AgEvent->Search_Id_nom(selectedText) ;
    if (AgEvent->RemoveEvent(idn))
    {
        wxMessageBox(_("Evenement supprime avec succes !!")) ;
        Refresh_Event_ListBox() ;
    }
}

void AgendaFrame::Refresh_Event_ListBox()
{
    Event_ListBox->Clear();
    Remplir_Listbox();
}
