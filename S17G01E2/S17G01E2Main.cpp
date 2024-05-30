/***************************************************************
 * Name:      S17G01E2Main.cpp
 * Purpose:   Code for Application Frame
 * Author:     ()
 * Created:   2024-05-30
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "S17G01E2Main.h"
#include "Rusa.h"
#include "wx/sizer.h"



BEGIN_EVENT_TABLE(S17G01E2Frame, wxFrame)
    EVT_BUTTON(1012, S17G01E2Frame::Procesar)
END_EVENT_TABLE()

S17G01E2Frame::S17G01E2Frame(wxFrame *frame, const wxString& title)
    : wxFrame(frame, -1, title){
    //inicializacion de los atributos

    this->texto1 = new wxTextCtrl(this, 1010, "", wxPoint (10, 10), wxDefaultSize);
    this->texto2 = new wxTextCtrl(this, 1011, "", wxPoint (200, 10), wxDefaultSize);
    this->btnAceptar = new wxButton(this, 1012, "aceptar", wxPoint(20, 100), wxDefaultSize);

     //disposicion de contenido
    wxBoxSizer* boxV = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* boxH = new wxBoxSizer(wxHORIZONTAL);

    boxH->Add(this->texto1, wxALL | wxEXPAND, 10);
    boxH->AddSpacer(10);
    boxH->Add(this->texto2, wxALL | wxEXPAND, 10);

    boxV->Add(boxH, 0, wxALL | wxEXPAND, 10);
    boxV->Add(this->btnAceptar, 0, wxALL | wxEXPAND, 10);
    this->SetSizer(boxV);
    }



S17G01E2Frame::~S17G01E2Frame()
{
}
void S17G01E2Frame::Procesar(wxCommandEvent &evt)
{

    int num1 = wxAtoi(this->texto1->GetValue());
    int num2 = wxAtoi(this->texto2->GetValue());

    Rusa r(num1, num2);
    int resultado= r.getResultado();

    wxMessageBox("el resultado es: " + wxString::Format(wxT("%i"),resultado));

    this->texto1->SetValue("");
    this->texto2->SetValue("");
}


