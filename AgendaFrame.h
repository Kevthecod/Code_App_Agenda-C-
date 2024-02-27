#ifndef AGENDAFRAME_H
#define AGENDAFRAME_H

#ifndef WX_PRECOMP
	//(*HeadersPCH(AgendaFrame)
	#include <wx/button.h>
	#include <wx/frame.h>
	#include <wx/listbox.h>
	#include <wx/panel.h>
	#include <wx/sizer.h>
	#include <wx/stattext.h>
	#include <wx/timer.h>
	//*)
#endif
//(*Headers(AgendaFrame)
//*)
//#include"ProjetCalendarMain.h"
#include"CalendarFrame.h"
#include"AgendaDialog.h"
#include"Noyau.h"

class AgendaFrame: public wxFrame
{
	public:

		AgendaFrame(wxWindow* parent, MyEvent* , wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~AgendaFrame();

        DateTime MyWatch ;
        MyEvent* AgEvent;

        void afficherPreview(wxString) ;
        void Refresh_Event_ListBox() ;
		//(*Declarations(AgendaFrame)
		wxButton* Add_btn;
		wxButton* Close_btn;
		wxButton* Edit_btn;
		wxButton* Rappel_btn;
		wxButton* Remove_btn;
		wxButton* calendrier_btn;
		wxListBox* Event_ListBox;
		wxPanel* Panel1;
		wxStaticText* Event_apercu;
		wxStaticText* Event_categ;
		wxStaticText* Event_date;
		wxStaticText* Event_heure;
		wxStaticText* Event_nom;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxStaticText* StaticText5;
		wxStaticText* StaticText7;
		wxStaticText* StaticText9;
		wxStaticText* date;
		wxStaticText* en_tete;
		wxStaticText* heure;
		wxTimer Timer1;
		//*)
		//void GetPointEvent(MyEvent* objet) {AgEvent = objet;}

	protected:

		//(*Identifiers(AgendaFrame)
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT2;
		static const long ID_STATICTEXT3;
		static const long ID_LISTBOX1;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT6;
		static const long ID_STATICTEXT5;
		static const long ID_STATICTEXT4;
		static const long ID_STATICTEXT7;
		static const long ID_STATICTEXT8;
		static const long ID_STATICTEXT9;
		static const long ID_STATICTEXT10;
		static const long ID_STATICTEXT11;
		static const long ID_STATICTEXT12;
		static const long ID_STATICTEXT13;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON3;
		static const long ID_BUTTON6;
		static const long ID_PANEL1;
		static const long ID_TIMER1;
		//*)

	private:

		//(*Handlers(AgendaFrame)
		void UpDate_Hour_Date(wxTimerEvent& event);
		void Return_calendrier_frame(wxCommandEvent& event);
		void Close_frame(wxCommandEvent& event);
		void Add_Event(wxCommandEvent& event);
		void Get_Dclick_Listox(wxCommandEvent& event);
		void Edit_Event(wxCommandEvent& event);
		void Remove_Event(wxCommandEvent& event);
		//*)
		wxString selectedText = wxT(" ") ;
		void Remplir_Listbox() ;
		bool call_diag ;

		DECLARE_EVENT_TABLE()
};

#endif
