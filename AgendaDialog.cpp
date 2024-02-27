#include "wx_pch.h"
#include "AgendaDialog.h"

#ifndef WX_PRECOMP
	//(*InternalHeadersPCH(AgendaDialog)
	#include <wx/intl.h>
	#include <wx/string.h>
	//*)
#endif
//(*InternalHeaders(AgendaDialog)
#include <wx/font.h>
//*)

//(*IdInit(AgendaDialog)
const long AgendaDialog::ID_STATICTEXT1 = wxNewId();
const long AgendaDialog::ID_STATICTEXT2 = wxNewId();
const long AgendaDialog::ID_TEXTCTRL1 = wxNewId();
const long AgendaDialog::ID_STATICTEXT3 = wxNewId();
const long AgendaDialog::ID_TIMEPICKERCTRL1 = wxNewId();
const long AgendaDialog::ID_STATICTEXT4 = wxNewId();
const long AgendaDialog::ID_DATEPICKERCTRL1 = wxNewId();
const long AgendaDialog::ID_STATICTEXT5 = wxNewId();
const long AgendaDialog::ID_TEXTCTRL2 = wxNewId();
const long AgendaDialog::ID_STATICTEXT6 = wxNewId();
const long AgendaDialog::ID_TEXTCTRL3 = wxNewId();
const long AgendaDialog::ID_STATICLINE1 = wxNewId();
const long AgendaDialog::ID_BUTTON1 = wxNewId();
const long AgendaDialog::ID_BUTTON2 = wxNewId();
const long AgendaDialog::ID_PANEL1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(AgendaDialog,wxDialog)
	//(*EventTable(AgendaDialog)
	//*)
END_EVENT_TABLE()

AgendaDialog::AgendaDialog(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size, bool addOrEdit, wxString nomEvent)
{
	//(*Initialize(AgendaDialog)
	wxBoxSizer* BoxSizer1;
	wxBoxSizer* BoxSizer2;
	wxBoxSizer* BoxSizer3;
	wxBoxSizer* BoxSizer4;
	wxBoxSizer* BoxSizer5;
	wxFlexGridSizer* FlexGridSizer1;

	Create(parent, wxID_ANY, _("Dialogue 2"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("wxID_ANY"));
	BoxSizer1 = new wxBoxSizer(wxVERTICAL);
	Panel1 = new wxPanel(this, ID_PANEL1, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL, _T("ID_PANEL1"));
	Panel1->SetBackgroundColour(wxColour(255,255,174));
	wxFont Panel1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	Panel1->SetFont(Panel1Font);
	BoxSizer2 = new wxBoxSizer(wxVERTICAL);
	StaticText1 = new wxStaticText(Panel1, ID_STATICTEXT1, _("DIALOGUE_AGENDA"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT1"));
	StaticText1->SetBackgroundColour(wxColour(130,130,255));
	wxFont StaticText1Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Arial Nova Cond"),wxFONTENCODING_DEFAULT);
	StaticText1->SetFont(StaticText1Font);
	BoxSizer2->Add(StaticText1, 0, wxALL|wxEXPAND, 0);
	BoxSizer3 = new wxBoxSizer(wxHORIZONTAL);
	FlexGridSizer1 = new wxFlexGridSizer(5, 2, 15, 35);
	StaticText2 = new wxStaticText(Panel1, ID_STATICTEXT2, _("Nom :"), wxDefaultPosition, wxSize(48,24), wxALIGN_CENTRE, _T("ID_STATICTEXT2"));
	FlexGridSizer1->Add(StaticText2, 1, wxALL|wxEXPAND, 5);
	Event_name = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
	Event_name->SetMaxLength(1000);
	FlexGridSizer1->Add(Event_name, 0, wxALL|wxEXPAND, 5);
	StaticText3 = new wxStaticText(Panel1, ID_STATICTEXT3, _("Heure :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT3"));
	FlexGridSizer1->Add(StaticText3, 0, wxALL|wxEXPAND, 5);
	Event_heure = new wxTimePickerCtrl(Panel1, ID_TIMEPICKERCTRL1, wxDateTime::Now(), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TIMEPICKERCTRL1"));
	FlexGridSizer1->Add(Event_heure, 0, wxALL|wxEXPAND, 5);
	StaticText4 = new wxStaticText(Panel1, ID_STATICTEXT4, _("Date :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT4"));
	FlexGridSizer1->Add(StaticText4, 0, wxALL|wxEXPAND, 5);
	Event_date = new wxDatePickerCtrl(Panel1, ID_DATEPICKERCTRL1, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT|wxDP_SHOWCENTURY, wxDefaultValidator, _T("ID_DATEPICKERCTRL1"));
	FlexGridSizer1->Add(Event_date, 0, wxALL|wxEXPAND, 5);
	StaticText5 = new wxStaticText(Panel1, ID_STATICTEXT5, _("Bref Apercu :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT5"));
	FlexGridSizer1->Add(StaticText5, 0, wxALL|wxEXPAND, 5);
	Event_Apercu = new wxTextCtrl(Panel1, ID_TEXTCTRL2, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
	Event_Apercu->SetMaxLength(1000);
	FlexGridSizer1->Add(Event_Apercu, 0, wxALL|wxEXPAND, 5);
	StaticText6 = new wxStaticText(Panel1, ID_STATICTEXT6, _("Categorie :"), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTRE, _T("ID_STATICTEXT6"));
	FlexGridSizer1->Add(StaticText6, 0, wxALL|wxEXPAND, 5);
	Event_categ = new wxTextCtrl(Panel1, ID_TEXTCTRL3, _("Text"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
	FlexGridSizer1->Add(Event_categ, 0, wxALL|wxEXPAND, 5);
	BoxSizer3->Add(FlexGridSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer2->Add(BoxSizer3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer5 = new wxBoxSizer(wxHORIZONTAL);
	StaticLine1 = new wxStaticLine(Panel1, ID_STATICLINE1, wxDefaultPosition, wxSize(10,-1), wxLI_HORIZONTAL, _T("ID_STATICLINE1"));
	StaticLine1->SetBackgroundColour(wxColour(0,0,0));
	BoxSizer5->Add(StaticLine1, 1, wxALL|wxEXPAND, 0);
	BoxSizer2->Add(BoxSizer5, 0, wxALL|wxEXPAND, 0);
	BoxSizer4 = new wxBoxSizer(wxHORIZONTAL);
	Annule_btn = new wxButton(Panel1, ID_BUTTON1, _("ANNULER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer4->Add(Annule_btn, 0, wxALL|wxEXPAND, 5);
	OK_btn = new wxButton(Panel1, ID_BUTTON2, _("VALIDER"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer4->Add(OK_btn, 0, wxALL|wxEXPAND, 5);
	BoxSizer2->Add(BoxSizer4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Panel1->SetSizer(BoxSizer2);
	BoxSizer2->Fit(Panel1);
	BoxSizer2->SetSizeHints(Panel1);
	BoxSizer1->Add(Panel1, 1, wxALL|wxEXPAND, 0);
	SetSizer(BoxSizer1);
	BoxSizer1->Fit(this);
	BoxSizer1->SetSizeHints(this);

	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaDialog::Close_dialog);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&AgendaDialog::Add_Edit_Event);
	//*)
	AgDiagEvent = MyEvent(file1, file2, file3, file4, file5) ;
	if (AgDiagEvent.create_files())
    {
       // wxMessageBox(_("Cool"));
    }
    nom_recue = nomEvent ;
    type_call = addOrEdit ;
	Event_name->Clear() ;
	Event_Apercu->Clear() ;
	Event_categ->Clear() ;
}

AgendaDialog::~AgendaDialog()
{
	//(*Destroy(AgendaDialog)
	//*)
}


void AgendaDialog::Close_dialog(wxCommandEvent& event)
{
    Close();
}

void AgendaDialog::Add_Edit_Event(wxCommandEvent& event)
{
    if (!type_call)
    {
        AgDiagEvent.Increment_Id() ;
        if (AgDiagEvent.SetInfo_file_names(Event_name->GetValue()))
        {
            if (AgDiagEvent.SetInfo_file_hours(Get_hours()))
            {
                if(AgDiagEvent.SetInfo_file_dates(Get_dates()))
                {
                    if(AgDiagEvent.SetInfo_file_apercu(Event_Apercu->GetValue()))
                    {
                        if(AgDiagEvent.SetInfo_file_categ(Event_categ->GetValue()))
                        {
                            wxMessageBox(_("Evenement bien enregistre !!")) ;
                            Close() ;
                        }
                    }
                }
            }
        }
    }
    else
    {
        long idn = AgDiagEvent.Search_Id_nom(nom_recue) ;
        if (idn != 0)
        {
            if (AgDiagEvent.EditInfo_file_names(Event_name->GetValue(), idn))
            {
                if (AgDiagEvent.EditInfo_file_hours(Get_hours(),idn))
                {
                    if (AgDiagEvent.EditInfo_file_dates(Get_dates(),idn))
                    {
                        if (AgDiagEvent.EditInfo_file_apercu(Event_Apercu->GetValue(), idn))
                        {
                            if (AgDiagEvent.EditInfo_file_categ(Event_categ->GetValue(), idn))
                            {
                                wxMessageBox(_("Evenement modifie avec succes !!"));
                                Close();
                            }
                        }
                    }
                }
            }
        }
    }
}

wxString AgendaDialog::Get_hours()
{
    wxDateTime hours = Event_heure->GetValue();
    wxString heurepick = hours.FormatTime() ;
    return heurepick ;
}


wxString AgendaDialog::Get_dates()
{
    wxDateTime dates = Event_date->GetValue() ;
    wxString datepick = dates.Format("%d/%m/%y");
    return datepick ;
}
