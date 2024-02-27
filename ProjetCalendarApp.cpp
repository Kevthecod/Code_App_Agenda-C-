/***************************************************************
 * Name:      ProjetCalendarApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Groupe 8 (kevinhounsa7@gmail.com)
 * Created:   2024-02-08
 * Copyright: Groupe 8 (uac.bj)
 * License:
 **************************************************************/

#include "wx_pch.h"
#include "ProjetCalendarApp.h"

//(*AppHeaders
#include "ProjetCalendarMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(ProjetCalendarApp);

bool ProjetCalendarApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	ProjetCalendarFrame* Frame = new ProjetCalendarFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
