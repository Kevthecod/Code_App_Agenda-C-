#ifndef AGENDADIALOG_H
#define AGENDADIALOG_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(AgendaDialog)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/textctrl.h>
	//*)
#endif
//(*Headers(AgendaDialog)
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/statline.h>
#include <wx/timectrl.h>
//*)

#include"Noyau.h"
#include"AgendaFrame.h"

class AgendaDialog: public wxDialog
{
	public:

		AgendaDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize, bool addOrEdit = false, wxString nomEvent = "Aller au musee");
		virtual ~AgendaDialog();

        MyEvent AgDiagEvent ;

		//(*Declarations(AgendaDialog)
		wxButton* Annule_btn;
		wxButton* OK_btn;
		wxDatePickerCtrl* Event_date;
		wxPanel* Panel1;
		wxStaticLine* StaticLine1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText3;
		wxStaticText* StaticText4;
		wxStaticText* StaticText5;
		wxStaticText* StaticText6;
		wxTextCtrl* Event_Apercu;
		wxTextCtrl* Event_categ;
		wxTextCtrl* Event_name;
		wxTimePickerCtrl* Event_heure;
		//*)


	protected:

		//(*Identifiers(AgendaDialog)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_TEXTCTRL1;
		static const long ID_STATICTEXT3;
		static const long ID_TIMEPICKERCTRL1;
		static const long ID_STATICTEXT4;
		static const long ID_DATEPICKERCTRL1;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL2;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICLINE1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		//*)

	private:

		//(*Handlers(AgendaDialog)
		void Close_dialog(wxCommandEvent& event);
		void Add_Edit_Event(wxCommandEvent& event);
		//*)
        wxString Get_dates() ;
        wxString Get_hours() ;
        wxString nom_recue ;
        bool type_call ;
		wxString file1 = wxT("File_Nom.txt") ;
        wxString file2 = wxT("File_Heure.txt");
        wxString file3 = wxT("Flie_Date.txt") ;
        wxString file4 = wxT("Flie_Apercu.txt") ;
        wxString file5 = wxT("Flie_Categorie.txt") ;
		DECLARE_EVENT_TABLE()
};

#endif
