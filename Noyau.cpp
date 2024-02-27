#include"Noyau.h"

///                                                Methodes de DateTime===================================================================================
DateTime::DateTime()
{
    date = wxT("");
    heure = wxT("");
}

void DateTime::Update_Date_Time()
{
    wxDateTime currentTime = wxDateTime::Now();
    heure = currentTime.FormatTime();
    date = currentTime.Format("%d/%m/%y");
}

///                                               Methodes de MyFile =====================================================================================

MyFile::MyFile(wxString nom)
{
    filename = nom ;
}

bool MyFile::creat_file()
{
    if(wxFileExists(filename))
        return true ;
    else
    {
        if (monFichier.Create(filename))
            return true ;
        else
        {
            wxMessageBox(_("Unable to create file !!")) ;
            return false ;
        }
    }
}

bool MyFile::Set_info_file(wxString composant, long id)
{
    if (wxFileExists(filename))
    {
        wxTextFile file(filename) ;
        if (file.Open())
        {
            wxString temp = wxString::Format("\n%ld", id) ;
            file.AddLine(temp+" "+composant) ;
            file.Write();
            file.Close();
            return true ;
        }
        else
            return false ;
    }
    else
        return false ;
}

wxString MyFile::Get_info_file(long id)
{
    wxString r_line ;
    if(wxFileExists(filename))
    {
        wxTextFile file(filename);
        if (file.Open())
        {
            for (wxString line = file.GetFirstLine(); !file.Eof(); line = file.GetNextLine())
            {
                long temp = Get_id_from_line(line) ;
                if (temp == id)
                {
                    r_line =info_without_id(line) ;
                    file.Close();
                    break ;
                }
            }
        }
    }
    return r_line ;
}

bool MyFile::Change_info_file(wxString new_info, long id)
{
    if (wxFileExists(filename))
    {
        wxTextFile file(filename);
        if (file.Open())
        {
            for (size_t i = 0; i < file.GetLineCount(); i++)
            {
                wxString line = file.GetLine(i);
                long temp = Get_id_from_line(line);
                if (temp == id)
                {
                    wxString new_line = wxString::Format("%ld %s", id, new_info);
                    //file.RemoveLine(i);
                    //file.InsertLine(new_line, i);
                    file[i] = new_line ;
                    file.Write();
                    file.Close();
                    return true;
                }
            }
        }
    }
    return false;
}

bool MyFile::RemoveLine(long id)
{
    if (wxFileExists(filename))
    {
        wxTextFile file(filename);
        if (file.Open())
        {
            for (size_t i = 0; i < file.GetLineCount(); i++)
            {
                wxString line = file.GetLine(i);
                long tempId = Get_id_from_line(line);
                if (tempId == id)
                {
                    file.RemoveLine(i);
                    file.Write();
                    file.Close();
                    return true;
                }
            }
        }
    }
    return false;
}


wxString info_without_id(wxString templine)
{
    wxStringTokenizer myToken(templine, " ") ;
    myToken.GetNextToken() ;
    wxString infonew ;
    while (myToken.HasMoreTokens())
    {
        wxString tok = myToken.GetNextToken() ;
        infonew += tok +" ";
    }
    infonew.Trim();
    return infonew ;
}

long Get_id_from_line(wxString templine)
{
    long id ;
    wxStringTokenizer myToken(templine, " ") ;
    if (myToken.HasMoreTokens())
    {
        wxString s_id = myToken.GetNextToken() ;
        if (s_id.ToLong(&id))
        {
            return id ;
        }
    }
    return 0 ;
}


///                                       Methodes de MyEvent ========================================================================================

MyEvent::MyEvent(wxString fname, wxString fhour, wxString fdate, wxString fapercu, wxString fcateg)
{
    pathNom = fname ;
    pathHeure = fhour ;
    pathDate = fdate ;
    pathApercu = fapercu ;
    pathCateg = fcateg ;

    if (wxFileExists(pathNom))
    {
        wxTextFile file(pathNom);
        if (file.Open())
        {
            wxString lastline = file.GetLastLine() ;
            id = Get_id_from_line(lastline);
        }
    }
    else
        id = 0;
}

bool MyEvent::create_files()
{
    int fileexact = 0;
    file_names = new MyFile(pathNom) ;
    if (file_names->creat_file())
        fileexact++ ;
   //====================================
    file_hours = new MyFile(pathHeure) ;
    if (file_hours->creat_file())
        fileexact++ ;
   //====================================
    file_dates = new MyFile(pathDate) ;
    if (file_dates->creat_file())
        fileexact++ ;
   //====================================
    file_apercu = new MyFile(pathApercu) ;
    if (file_apercu->creat_file())
        fileexact++ ;
    //===================================
    file_categ = new MyFile(pathCateg) ;
    if (file_categ->creat_file())
        fileexact++ ;

    if (fileexact==5)
        return true ;
    else
        return false ;
}

bool MyEvent::SetInfo_file_names(wxString nom)
{
    if (file_names ->Set_info_file(nom, id))
        return true ;
    else
        return false ;
}

bool MyEvent::SetInfo_file_hours(wxString heure)
{
    if (file_hours ->Set_info_file(heure, id))
        return true ;
    else
        return false ;
}

bool MyEvent::SetInfo_file_dates(wxString date)
{
    if (file_dates ->Set_info_file(date, id))
        return true ;
    else
        return false ;
}

bool MyEvent::SetInfo_file_apercu(wxString descip)
{
    if (file_apercu ->Set_info_file(descip, id))
        return true ;
    else
        return false ;
}

bool MyEvent::SetInfo_file_categ(wxString domaine)
{
    if (file_categ ->Set_info_file(domaine, id))
        return true ;
    else
        return false ;
}

long MyEvent::Search_Id_date(wxString date)
{
    long temp = 0 ;
    if (wxFileExists(pathDate))
    {
        wxTextFile file(pathDate) ;
        if (file.Open())
        {
            for (wxString line = file.GetFirstLine(); !file.Eof(); line = file.GetNextLine())
            {
                if (compare_contains(line, date))
                {
                    temp = Get_id_from_line(line);
                    break ;
                }
            }
        }
    }
    return temp ;
}

bool compare_contains(wxString templine, wxString motrech)
{
    wxStringTokenizer myToken(templine, " ");
    myToken.GetNextToken() ;
    wxString tok = myToken.GetNextToken() ;

    return tok.IsSameAs(motrech) ;
}


long MyEvent::Search_Id_nom(wxString nom)
{
    long temp ;
    if (wxFileExists(pathNom))
    {
        wxTextFile file(pathNom) ;
        if (file.Open())
        {
            for (wxString line = file.GetFirstLine(); !file.Eof(); line = file.GetNextLine())
            {
                wxString line1 = info_without_id(line);
                if (line1.IsSameAs(nom))
                {
                    temp = Get_id_from_line(line);
                    break ;
                }
            }
        }
    }
    return temp ;
}


wxString MyEvent::GetInfo_file_names(long id)
{
    wxString temptxt ;
    if (wxFileExists(pathNom))
        temptxt = file_names ->Get_info_file(id);
    return temptxt ;
}

wxString MyEvent::GetInfo_file_hours(long id)
{
    wxString temptxt ;
    if (wxFileExists(pathHeure))
        temptxt = file_hours ->Get_info_file(id);
    return temptxt ;
}

wxString MyEvent::GetInfo_file_dates(long id)
{
    wxString temptxt ;
    if (wxFileExists(pathDate))
        temptxt = file_dates ->Get_info_file(id);
    return temptxt ;
}

wxString MyEvent::GetInfo_file_apercu(long id)
{
    wxString temptxt ;
    if (wxFileExists(pathApercu))
        temptxt = file_apercu ->Get_info_file(id);
    return temptxt ;
}

wxString MyEvent::GetInfo_file_categ(long id)
{
    wxString temptxt ;
    if (wxFileExists(pathCateg))
        temptxt = file_categ ->Get_info_file(id);
    return temptxt ;
}

void MyEvent::Increment_Id()
{
    if (wxFileExists(pathNom))
    {
        wxTextFile file(pathNom);
        if (file.Open())
        {
            wxString lastline = file.GetLastLine() ;
            id = Get_id_from_line(lastline);
            id = id + 1;
        }
    }
}

bool MyEvent::EditInfo_file_names(wxString holdText, long id)
{
    if (holdText.IsEmpty())
        return true ;
    else
    {
        if(file_names->Change_info_file(holdText, id))
            return true ;
        else
            return false ;
    }
}

bool MyEvent::EditInfo_file_hours(wxString holdText, long id)
{
    if (holdText.IsEmpty())
        return true ;
    else
    {
        if (file_hours->Change_info_file(holdText, id))
            return true ;
        else
            return false ;
    }
}

bool MyEvent::EditInfo_file_dates(wxString holdText, long id)
{
    if (holdText.IsEmpty())
        return true ;
    else
    {
        if (file_dates->Change_info_file(holdText, id))
            return true;
        else
            return false;
    }
}

bool MyEvent::EditInfo_file_apercu(wxString holdText, long id)
{
    if (holdText.IsEmpty())
        return true ;
    else
    {
        if (file_apercu->Change_info_file(holdText, id))
            return true ;
        else
            return false ;
    }
}

bool MyEvent::EditInfo_file_categ(wxString holdText, long id)
{
    if (holdText.IsEmpty())
        return true ;
    else
    {
        if (file_categ->Change_info_file(holdText, id))
            return true ;
        else
            return false ;
    }
}

bool MyEvent::RemoveEvent(long id)
{
    if (file_names->RemoveLine(id))
    {
        if (file_hours->RemoveLine(id))
        {
            if (file_dates->RemoveLine(id))
            {
                if (file_apercu->RemoveLine(id))
                {
                    if (file_categ->RemoveLine(id))
                        return true ;
                }
            }
        }
    }
    return false ;
}

long MyEvent::returnId()
{
    if (wxFileExists(pathNom))
    {
        wxTextFile file(pathNom);
        if (file.Open())
        {
            long nbr_line  = static_cast<long>(file.GetLineCount()) ;
            return nbr_line ;
        }
    }
    return 0 ;
}

wxString MyEvent::GetLine_file_names(long position)
{
    size_t pos = static_cast<size_t>(position) ;
    if (wxFileExists(pathNom))
    {
        wxTextFile file1(pathNom);
        if (file1.Open())
        {
            wxString line = file1.GetLine(pos) ;
            return info_without_id(line) ;
        }
    }
    return wxT(" ");
}

MyAlarme::MyAlarme()
{
}

MyAlarme::MyAlarme(wxString hour, wxString date)
{
    prog_heure = hour;
    prog_date = date ;
}
/*
    il me faut un fichier txt pour contenir l'id des evenements qui ont ete mis en rappel...
    Ensuite en me fixant sur la date courante, je parcours en temps réel tout les heures des evènements de ce jours en les comparant chaque fois avec l'heure courante
    Si l'egalite survient, je sonne l'alarme.

*/
