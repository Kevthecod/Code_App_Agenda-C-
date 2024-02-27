/***************************************************************
 * Name:      ProjetCalendarMain.h
 * Purpose:   Defines Application Frame
 * Author:    Groupe 8 (kevinhounsa7@gmail.com)
 * Created:   2024-02-08
 * Copyright: Groupe 8 (uac.bj)
 * License:
 **************************************************************/

#ifndef PROJETCALENDARMAIN_H
#define PROJETCALENDARMAIN_H

//(*Headers(ProjetCalendarFrame)
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/menu.h>
#include <wx/panel.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statusbr.h>
//*)

#include"CalendarFrame.h"
#include"Noyau.h"

class ProjetCalendarFrame: public wxFrame
{
    public:

        ProjetCalendarFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~ProjetCalendarFrame();

        //MyEvent MonEvenement ;

    private:

        //(*Handlers(ProjetCalendarFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void Boutton_Retour(wxCommandEvent& event);
        void BouttonCalendrier(wxCommandEvent& event);
        //*)

        //(*Identifiers(ProjetCalendarFrame)
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_STATICTEXT3;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_PANEL1;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(ProjetCalendarFrame)
        wxButton* Button1;
        wxButton* Button2;
        wxPanel* Panel1;
        wxStaticText* StaticText1;
        wxStaticText* StaticText2;
        wxStaticText* StaticText3;
        wxStatusBar* StatusBar1;
        //*)

       /* wxString file1 = wxT("File_Nom.txt") ;
        wxString file2 = wxT("File_Heure.txt");
        wxString file3 = wxT("Flie_Date.txt") ;
        wxString file4 = wxT("Flie_Apercu.txt") ;
        wxString file5 = wxT("Flie_Categorie.txt") ;*/

        DECLARE_EVENT_TABLE()
};

#endif // PROJETCALENDARMAIN_H
