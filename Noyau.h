#ifndef NOYAU_H_INCLUDED
#define NOYAU_H_INCLUDED

#include <wx/datetime.h>
#include <wx/string.h>
#include<wx/file.h>
#include<wx/filename.h>
#include<wx/textfile.h>
#include<wx/tokenzr.h>

class DateTime
{
    public:
        DateTime();
        void Update_Date_Time();
        wxString Get_time() { return heure; }
        wxString Get_Date() { return date; }

    private:
       wxString date;
       wxString heure;
};


class MyFile
{
    private:
        wxFile monFichier ;
        wxString filename ;

    public:
        MyFile(wxString);
        wxString Get_info_file(long) ;
        bool Set_info_file(wxString, long);
        bool creat_file();
        bool Change_info_file(wxString, long);
        bool RemoveLine(long) ;
};

long Get_id_from_line(wxString);
wxString info_without_id(wxString) ;
bool compare_contains(wxString, wxString) ;


class MyEvent
{
    private:
        MyFile* file_names ;
        MyFile* file_hours ;
        MyFile* file_dates ;
        MyFile* file_apercu ;
        MyFile* file_categ ;
        wxString pathNom, pathHeure, pathDate, pathApercu, pathCateg ;
        long id;

    public:
        MyEvent() {}
        MyEvent(wxString, wxString, wxString, wxString, wxString);
        bool create_files() ;

        bool SetInfo_file_names(wxString);
        bool SetInfo_file_hours(wxString);
        bool SetInfo_file_dates(wxString);
        bool SetInfo_file_apercu(wxString);
        bool SetInfo_file_categ(wxString);

        bool EditInfo_file_names(wxString, long);
        bool EditInfo_file_hours(wxString, long);
        bool EditInfo_file_dates(wxString, long);
        bool EditInfo_file_apercu(wxString, long);
        bool EditInfo_file_categ(wxString, long);

        wxString GetInfo_file_names(long);
        wxString GetLine_file_names(long);
        wxString GetInfo_file_hours(long);
        wxString GetInfo_file_dates(long);
        wxString GetInfo_file_apercu(long);
        wxString GetInfo_file_categ(long);
        bool RemoveEvent(long) ;

        long Search_Id_date(wxString);
        long Search_Id_nom(wxString);
        void Increment_Id();
        long returnId() ;
};

class MyAlarme
{
    private:
        DateTime horloge ;
        wxString prog_heure, prog_date ;
    public:
        MyAlarme() ;
        MyAlarme(wxString, wxString);
        void Sonner() ;
        void Stop() ;
};
#endif // NOYAU_H_INCLUDED
