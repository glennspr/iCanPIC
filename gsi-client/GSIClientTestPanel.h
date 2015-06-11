/*****************************************************************************
*	GSI a socket interface for Micro-controllers and Controller Area Network *
*   Copyright (C) 2014 Glenn Self                                            *
*                                                                            *
*   This program is free software: you can redistribute it and/or modify     *
*   it under the terms of the GNU General Public License as published by     *
*   the Free Software Foundation, either version 3 of the License, or        *
*   (at your option) any later version.                                      *
*                                                                            *
*    This program is distributed in the hope that it will be useful,         *
*    but WITHOUT ANY WARRANTY; without even the implied warranty of          *
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the           *
*    GNU General Public License for more details.                            *
*                                                                            *
*    You should have received a copy of the GNU General Public License       *
*    along with this program.  If not, see <http://www.gnu.org/licenses/>.   *
*****************************************************************************/
/////////////////////////////////////////////////////////////////////////////
// Name:        GSIClientTestPanel.h
// Purpose:     
// Author:      
// Modified by: 
// Created:     27/02/2007 17:01:15
/////////////////////////////////////////////////////////////////////////////

// Generated by DialogBlocks (Personal Edition), 27/02/2007 17:01:15

#ifndef _GSICLIENTTESTPANEL_H_
#define _GSICLIENTTESTPANEL_H_

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
#pragma interface "GSIClientTestPanel.h"
#endif

/*!
 * Includes
 */

////@begin includes
#include "wx/splitter.h"
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
class GSITestClientPanel;
class wxSplitterWindow;
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_PANEL 10004
#define GSI_ID_CLIENT_TEST_SPLITTERWINDOW 10002
#define GSI_ID_CLIENT_TEST_NB_PANEL0 10016
#define GSI_ID_CLIENT_TEST_NB_STATIC_LCD 10012
#define GSI_ID_CLIENT_TEST_NB_COMBOBOX_LCD 10030
#define GSI_ID_CLIENT_TEST_NB_COMBO_BOX_ALL 10031
#define GSI_ID_CLIENT_TEST_KD_BUTTON1 10032
#define GSI_ID_CLIENT_TEST_KD_BUTTON2 10033
#define GSI_ID_CLIENT_TEST_KD_BUTTON3 10034
#define GSI_ID_CLIENT_TEST_KD_BUTTON4 10035
#define GSI_ID_CLIENT_TEST_KD_BUTTON5 10036
#define GSI_ID_CLIENT_TEST_KD_BUTTON6 10037
#define GSI_ID_CLIENT_TEST_KD_BUTTON7 10038
#define GSI_ID_CLIENT_TEST_KD_BUTTON8 10039
#define GSI_ID_CLIENT_TEST_KD_BUTTON9 10040
#define GSI_ID_CLIENT_TEST_KD_BUTTON10 10041
#define GSI_ID_CLIENT_TEST_KD_BUTTON11 10042
#define GSI_ID_CLIENT_TEST_KD_BUTTON12 10043
#define GSI_ID_CLIENT_TEST_NB_TEXTCTRL_LCD 10044
#define GSI_ID_CLIENT_TEST_NB_TEXTCTRL_CLIENT 10013
#define SYMBOL_GSITESTCLIENTPANEL_STYLE wxSUNKEN_BORDER|wxTAB_TRAVERSAL
#define SYMBOL_GSITESTCLIENTPANEL_IDNAME ID_PANEL
#define SYMBOL_GSITESTCLIENTPANEL_SIZE wxDefaultSize
#define SYMBOL_GSITESTCLIENTPANEL_POSITION wxDefaultPosition
////@end control identifiers

/*!
 * Compatibility
 */

#ifndef wxCLOSE_BOX
#define wxCLOSE_BOX 0x1000
#endif

/*!
 * GSITestClientPanel class declaration
 */

class GSITestClientPanel: public wxPanel
{    
    DECLARE_DYNAMIC_CLASS( GSITestClientPanel )
    DECLARE_EVENT_TABLE()

public:
    /// Constructors
    GSITestClientPanel();
    GSITestClientPanel( wxWindow* parent, wxWindowID id = SYMBOL_GSITESTCLIENTPANEL_IDNAME, const wxPoint& pos = SYMBOL_GSITESTCLIENTPANEL_POSITION, const wxSize& size = SYMBOL_GSITESTCLIENTPANEL_SIZE, long style = SYMBOL_GSITESTCLIENTPANEL_STYLE );

    /// Creation
    bool Create( wxWindow* parent, wxWindowID id = SYMBOL_GSITESTCLIENTPANEL_IDNAME, const wxPoint& pos = SYMBOL_GSITESTCLIENTPANEL_POSITION, const wxSize& size = SYMBOL_GSITESTCLIENTPANEL_SIZE, long style = SYMBOL_GSITESTCLIENTPANEL_STYLE );

    /// Destructor
    ~GSITestClientPanel();

    /// Initialises member variables
    void Init();

    /// Creates the controls and sizers
    void CreateControls();

////@begin GSITestClientPanel event handler declarations

    /// wxEVT_COMMAND_COMBOBOX_SELECTED event handler for GSI_ID_CLIENT_TEST_NB_COMBOBOX_LCD
    void OnGsiIdClientTestNbComboboxLcdSelected( wxCommandEvent& event );

    /// wxEVT_COMMAND_TEXT_ENTER event handler for GSI_ID_CLIENT_TEST_NB_COMBOBOX_LCD
    void OnGsiIdClientTestNbComboboxLcdEnter( wxCommandEvent& event );

    /// wxEVT_COMMAND_COMBOBOX_SELECTED event handler for GSI_ID_CLIENT_TEST_NB_COMBO_BOX_ALL
    void OnGsiIdClientTestNbComboBoxAllSelected( wxCommandEvent& event );

    /// wxEVT_COMMAND_TEXT_ENTER event handler for GSI_ID_CLIENT_TEST_NB_COMBO_BOX_ALL
    void OnGsiIdClientTestNbComboBoxAllEnter( wxCommandEvent& event );

    /// wxEVT_COMMAND_BUTTON_CLICKED event handler for GSI_ID_CLIENT_TEST_KD_BUTTON1
    void OnGsiIdClientTestKdButton1Click( wxCommandEvent& event );

////@end GSITestClientPanel event handler declarations

////@begin GSITestClientPanel member function declarations

    /// Retrieves bitmap resources
    wxBitmap GetBitmapResource( const wxString& name );

    /// Retrieves icon resources
    wxIcon GetIconResource( const wxString& name );
////@end GSITestClientPanel member function declarations

    /// Should we show tooltips?
    static bool ShowToolTips();
    const wxTextCtrl *GetTextCtrl() const {return m_TextCtrlStatus;}
    const wxSplitterWindow *GetSplitterWindow() const {return m_SplitterWindow;}
private:
////@begin GSITestClientPanel member variables
    wxSplitterWindow* m_SplitterWindow;
    wxPanel* m_Panel;
    wxTextCtrl* m_TextCtrlStatus;
////@end GSITestClientPanel member variables    
};

#endif
    // _GSICLIENTTESTPANEL_H_
