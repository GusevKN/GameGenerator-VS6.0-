#if !defined(AFX_6OF45DLGWIN_H__96445C17_68D5_479F_8099_C028CD335155__INCLUDED_)
#define AFX_6OF45DLGWIN_H__96445C17_68D5_479F_8099_C028CD335155__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// 6of45DlgWin.h : header file
//

#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>
/////////////////////////////////////////////////////////////////////////////
// C6of45DlgWin dialog

class C6of45DlgWin : public CDialog
{
// Construction
public:
	C6of45DlgWin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(C6of45DlgWin)
	enum { IDD = IDD_6_OF_45 };
	BOOL	m_check_6of45_1;
	BOOL	m_check_6of45_10;
	BOOL	m_check_6of45_11;
	BOOL	m_check_6of45_12;
	BOOL	m_check_6of45_13;
	BOOL	m_check_6of45_14;
	BOOL	m_check_6of45_15;
	BOOL	m_check_6of45_16;
	BOOL	m_check_6of45_17;
	BOOL	m_check_6of45_18;
	BOOL	m_check_6of45_19;
	BOOL	m_check_6of45_2;
	BOOL	m_check_6of45_20;
	BOOL	m_check_6of45_21;
	BOOL	m_check_6of45_22;
	BOOL	m_check_6of45_23;
	BOOL	m_check_6of45_24;
	BOOL	m_check_6of45_25;
	BOOL	m_check_6of45_26;
	BOOL	m_check_6of45_27;
	BOOL	m_check_6of45_28;
	BOOL	m_check_6of45_29;
	BOOL	m_check_6of45_3;
	BOOL	m_check_6of45_30;
	BOOL	m_check_6of45_31;
	BOOL	m_check_6of45_32;
	BOOL	m_check_6of45_33;
	BOOL	m_check_6of45_34;
	BOOL	m_check_6of45_35;
	BOOL	m_check_6of45_36;
	BOOL	m_check_6of45_37;
	BOOL	m_check_6of45_38;
	BOOL	m_check_6of45_39;
	BOOL	m_check_6of45_4;
	BOOL	m_check_6of45_40;
	BOOL	m_check_6of45_41;
	BOOL	m_check_6of45_42;
	BOOL	m_check_6of45_43;
	BOOL	m_check_6of45_44;
	BOOL	m_check_6of45_45;
	BOOL	m_check_6of45_5;
	BOOL	m_check_6of45_6;
	BOOL	m_check_6of45_7;
	BOOL	m_check_6of45_8;
	BOOL	m_check_6of45_9;
	CString	m_editComment6of45;
	CString	m_editDateAndTime6of45;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C6of45DlgWin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

	private:
	int* fnShowArray6of45(int array[]);
	int* fnIteratorArray6of45();
	void fnOfstreamTxtFile();
	char* fnGetDateCharType();

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(C6of45DlgWin)
	afx_msg void OnWinGenerationButton();
	afx_msg void OnUpdateDateTimeButton6of45();
	afx_msg void OnRecordWinningsButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_6OF45DLGWIN_H__96445C17_68D5_479F_8099_C028CD335155__INCLUDED_)
