#include "wx_pch.h"
#include "DialogCalendrier.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(DialogCalendrier)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(DialogCalendrier)
#include <wx/font.h>
#include <wx/settings.h>
//*)

//(*IdInit(DialogCalendrier)
const long DialogCalendrier::ID_STATICTEXT1 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT2 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT3 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT4 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT5 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT6 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT7 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT8 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT9 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT10 = wxNewId();
const long DialogCalendrier::ID_STATICTEXT11 = wxNewId();
const long DialogCalendrier::ID_STATICLINE1 = wxNewId();
const long DialogCalendrier::ID_BUTTON1 = wxNewId();
const long DialogCalendrier::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(DialogCalendrier,wxDialog)
	//(*EventTable(DialogCalendrier)
	//*)
END_EVENT_TABLE()

DialogCalendrier::DialogCalendrier(wxWindow* parent, wxWindowID id,const wxPoint& pos,const wxSize& size, wxString date_clic)
{
	//(*Initialize(DialogCalendrier)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxFlexGridSizer* FlexGridSizer1;
	wxStaticBoxSizer* StaticBoxSizer1;

	Create(parent, wxID_ANY, _("Dialogue 1"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(255,255,187));
	wxFont Panel1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Panel1->SetFont(Panel1Font);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("Event Preview"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetBackgroundColour(wxColour(106,106,255));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_BOLD,true,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer2->Add(StaticText1, 0, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	StaticBoxSizer1 = new wxStaticBoxSizer(wxVERTICAL, Panel1, wxEmptyString);
	FlexGridSizer1 = new wxFlexGridSizer(5, 2, 25, 25);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Nom = new wxStaticText(Panel1, ID_STATICTEXT3, _("Les textes texte Allo\n     Allo\n"), wxDefaultPosition, wxSize(127,46), wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	Nom->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(Nom, 1, wxALL|wxEXPAND, 5);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Heure :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	heure = new wxStaticText(Panel1, ID_STATICTEXT5, _("00:00:00"), wxDefaultPosition, wxSize(130,24), wxALIGN_CENTRE, _T("ID_STATICTEXT5"));
	heure->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(heure, 1, wxALL|wxEXPAND, 5);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Date : "), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	date = new wxStaticText(Panel1, ID_STATICTEXT7, _("10/10/1010"), wxDefaultPosition, wxSize(129,24), wxALIGN_CENTRE, _T("ID_STATICTEXT7"));
	date->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(date, 1, wxALL|wxEXPAND, 5);
	StaticText8 = new wxStaticText(Panel1, ID_STATICTEXT8, _("Bref description :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT8"));
	FlexGridSizer1->Add(StaticText8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	apercu = new wxStaticText(Panel1, ID_STATICTEXT9, _("Les textes textes Allo Allo\n"), wxDefaultPosition, wxSize(170,47), wxALIGN_CENTRE, _T("ID_STATICTEXT9"));
	apercu->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(apercu, 1, wxALL|wxEXPAND, 5);
	StaticText10 = new wxStaticText(Panel1, ID_STATICTEXT10, _("Categorie :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT10"));
	FlexGridSizer1->Add(StaticText10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	categorie = new wxStaticText(Panel1, ID_STATICTEXT11, _("Essais de texte"), wxDefaultPosition, wxSize(160,24), wxALIGN_CENTRE, _T("ID_STATICTEXT11"));
	categorie->SetBackgroundColour(wxColour(255,255,255));
	FlexGridSizer1->Add(categorie, 1, wxALL|wxEXPAND, 5);
	StaticBoxSizer1->Add(FlexGridSizer1, 0, wxALL|wxEXPAND, 0);
	BoxSizer3->Add(StaticBoxSizer1, 1, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer3, 0, wxALL|wxEXPAND, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	StaticLine1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BACKGROUND));
	BoxSizer5->Add(StaticLine1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 0);
	BoxSizer2->Add(BoxSizer5, 0, wxALL|wxEXPAND, 0);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	OK_btn = new wxButton(Panel1, ID_BUTTON1, _("OK"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(OK_btn, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&DialogCalendrier::Retour_calendrier);
	//*)
	date1 = date_clic ;
	DiagEvent = MyEvent(file1, file2, file3, file4, file5) ;
	if (DiagEvent.create_files())
        afficherInfo();
}

DialogCalendrier::~DialogCalendrier()
{
	//(*Destroy(DialogCalendrier)
	//*)
}


void DialogCalendrier::Retour_calendrier(wxCommandEvent& event)
{
    Close();
}

void DialogCalendrier::afficherInfo()
{
    long id = DiagEvent.Search_Id_date(date1);
    if(id != 0)
    {
        Nom ->SetLabel(DiagEvent.GetInfo_file_names(id));
        heure ->SetLabel(DiagEvent.GetInfo_file_hours(id));
        date ->SetLabel(DiagEvent.GetInfo_file_dates(id));
        apercu ->SetLabel(DiagEvent.GetInfo_file_apercu(id));
        categorie ->SetLabel(DiagEvent.GetInfo_file_categ(id));
    }
    else
    {
        Nom ->SetLabel(wxT("---"));
        heure ->SetLabel(wxT("---"));
        date ->SetLabel(wxT("---"));
        apercu ->SetLabel(wxT("---"));
        categorie ->SetLabel(wxT("---"));
    }

}
