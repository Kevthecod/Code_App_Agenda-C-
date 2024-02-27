#ifndef CALENDARFRAME_H
#define CALENDARFRAME_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(CalendarFrame)
	#include <wx/button.h>
	#include <wx/frame.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/timer.h>
	//*)
#endif
//(*Headers(CalendarFrame)
#include <wx/calctrl.h>
//*)

#include"ProjetCalendarMain.h"
#include"AgendaFrame.h"
#include"DialogCalendrier.h"
#include"Noyau.h"

class CalendarFrame: public wxFrame
{
	public:

		CalendarFrame(wxWindow* parent, wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~CalendarFrame();

        DateTime MyDateTime ;
        MyEvent MonEvenement1 ;

		//(*Declarations(CalendarFrame)
		wxButton* Agenda_btn;
		wxButton* Button1;
		wxCalendarCtrl* CalendarCtrl1;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText2;
		wxStaticText* StaticText4;
		wxStaticText* date;
		wxStaticText* heure;
		wxTimer Timer1;
		//*)
		//void get_event_pointeur(MyEvent* objet) {MonEvenement1 = objet ;}

	protected:

		//(*Identifiers(CalendarFrame)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_CALENDARCTRL1;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT5;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_PANEL1;
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(CalendarFrame)
		void BoutonRetour(wxCommandEvent& event);
		void Update_Date_Time(wxTimerEvent& event);
		void afficher_date_event(wxCalendarEvent& event);
		void Get_Agendaframe(wxCommandEvent& event);
		//*)
		wxString date_recue ;
		wxString file1 = wxT("File_Nom.txt") ;
        wxString file2 = wxT("File_Heure.txt");
        wxString file3 = wxT("Flie_Date.txt") ;
        wxString file4 = wxT("Flie_Apercu.txt") ;
        wxString file5 = wxT("Flie_Categorie.txt") ;

		DECLARE_EVENT_TABLE()
};

#endif
