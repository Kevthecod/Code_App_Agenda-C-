#ifndef DIALOGCALENDRIER_H
#define DIALOGCALENDRIER_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(DialogCalendrier)
	#include <wx/button.h>
	#include <wx/dialog.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	//*)
#endif
//(*Headers(DialogCalendrier)
#include <wx/statline.h>
//*)

#include"Noyau.h"
#include"CalendarFrame.h"

class DialogCalendrier: public wxDialog
{
	public:

		DialogCalendrier(wxWindow* parent, wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize, wxString date_clic = "15/02/24");
		virtual ~DialogCalendrier();

		MyEvent DiagEvent ;
		void afficherInfo();
		//void GetParametre(wxString date_clic) { date1 = date_clic;}

		//(*Declarations(DialogCalendrier)
		wxButton* OK_btn;
		wxPanel* Panel1;
		wxStaticLine* StaticLine1;
		wxStaticText* Nom;
		wxStaticText* StaticText10;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText4;
		wxStaticText* StaticText6;
		wxStaticText* StaticText8;
		wxStaticText* apercu;
		wxStaticText* categorie;
		wxStaticText* date;
		wxStaticText* heure;
		//*)

	protected:

		//(*Identifiers(DialogCalendrier)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICLINE1;
		static const long ID_BUTTON1;
		static const long ID_PANEL1;
		//*)
		wxString date1;
		wxString file1 = wxT("File_Nom.txt") ;
        wxString file2 = wxT("File_Heure.txt");
        wxString file3 = wxT("Flie_Date.txt") ;
        wxString file4 = wxT("Flie_Apercu.txt") ;
        wxString file5 = wxT("Flie_Categorie.txt") ;

	private:

		//(*Handlers(DialogCalendrier)
		void Retour_calendrier(wxCommandEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
};

#endif
