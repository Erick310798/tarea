/***************************************************************
 * Name:      S17G01E2App.cpp
 * Purpose:   Code for Application Class
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

#include "S17G01E2App.h"
#include "S17G01E2Main.h"

IMPLEMENT_APP(S17G01E2App);

bool S17G01E2App::OnInit()
{
    S17G01E2Frame* frame = new S17G01E2Frame(0L, _("MI PRIMER EJEMPLO"));
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();

    return true;
}
