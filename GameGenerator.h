// GameGenerator.h : main header file for the GAMEGENERATOR application
//

#if !defined(AFX_GAMEGENERATOR_H__A063ABB7_80E7_4A45_A1D3_FA27E034A015__INCLUDED_)
#define AFX_GAMEGENERATOR_H__A063ABB7_80E7_4A45_A1D3_FA27E034A015__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CGameGeneratorApp:
// See GameGenerator.cpp for the implementation of this class
//

class CGameGeneratorApp : public CWinApp
{
public:
	CGameGeneratorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGameGeneratorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CGameGeneratorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAMEGENERATOR_H__A063ABB7_80E7_4A45_A1D3_FA27E034A015__INCLUDED_)
