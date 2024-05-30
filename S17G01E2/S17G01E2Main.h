/***************************************************************
 * Name:      S17G01E2Main.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2024-05-30
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef S17G01E2MAIN_H
#define S17G01E2MAIN_H

#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "S17G01E2App.h"
#include "wx/textctrl.h"
#include "wx/button.h"


class S17G01E2Frame: public wxFrame
{
    private:
        wxTextCtrl* texto1;
        wxTextCtrl* texto2;
        wxButton* btnAceptar;
        DECLARE_EVENT_TABLE()

    public:
        S17G01E2Frame(wxFrame *frame, const wxString& title);
        ~S17G01E2Frame();

        void Procesar(wxCommandEvent &evt);

};


#endif // S17G01E2MAIN_H
