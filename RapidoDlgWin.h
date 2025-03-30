#if !defined(AFX_RAPIDODLGWIN_H__319E8E7A_8227_4631_BE18_995E3A5E2707__INCLUDED_)
#define AFX_RAPIDODLGWIN_H__319E8E7A_8227_4631_BE18_995E3A5E2707__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// RapidoDlgWin.h : header file
//
#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>

/////////////////////////////////////////////////////////////////////////////
// CRapidoDlgWin dialog

class CRapidoDlgWin : public CDialog
{
// Construction
public:
	CRapidoDlgWin(CWnd* pParent = NULL);   // standard constructor
	
// Dialog Data
	//{{AFX_DATA(CRapidoDlgWin)
	enum { IDD = IDD_RAPIDO };
	BOOL	m_checkRapido1;
	BOOL	m_checkRapido10;
	BOOL	m_checkRapido11;
	BOOL	m_checkRapido12;
	BOOL	m_checkRapido13;
	BOOL	m_checkRapido14;
	BOOL	m_checkRapido15;
	BOOL	m_checkRapido16;
	BOOL	m_checkRapido17;
	BOOL	m_checkRapido18;
	BOOL	m_checkRapido19;
	BOOL	m_checkRapido2;
	BOOL	m_checkRapido20;
	BOOL	m_checkRapido21;
	BOOL	m_checkRapido22;
	BOOL	m_checkRapido23;
	BOOL	m_checkRapido24;
	BOOL	m_checkRapido3;
	BOOL	m_checkRapido4;
	BOOL	m_checkRapido5;
	BOOL	m_checkRapido6;
	BOOL	m_checkRapido7;
	BOOL	m_checkRapido8;
	BOOL	m_checkRapido9;
	CString	m_editCommentRapido;
	CString	m_editDateAndTimeRapido;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRapidoDlgWin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
	private:
	int* fnShowArray8of20(int array[]);
	int* fnShowArray1of4(int array[]);
	int* fnIteratorArray8of20();
	int* fnIteratorArray1of4();
	void fnOfstreamTxtFile();
	char* fnGetDateCharType();
protected:

	// Generated message map functions
	//{{AFX_MSG(CRapidoDlgWin)
	afx_msg void OnCheck1();
	afx_msg void OnCheck2();
	afx_msg void OnCheck3();
	afx_msg void OnCheck4();
	afx_msg void OnCheck5();
	afx_msg void OnCheck6();
	afx_msg void OnCheck7();
	afx_msg void OnCheck8();
	afx_msg void OnCheck9();
	afx_msg void OnCheck10();
	afx_msg void OnCheck11();
	afx_msg void OnCheck12();
	afx_msg void OnCheck13();
	afx_msg void OnCheck14();
	afx_msg void OnCheck15();
	afx_msg void OnCheck16();
	afx_msg void OnCheck17();
	afx_msg void OnCheck18();
	afx_msg void OnCheck19();
	afx_msg void OnCheck20();
	afx_msg void OnCheck21();
	afx_msg void OnCheck22();
	afx_msg void OnCheck23();
	afx_msg void OnCheck24();
	afx_msg void OnWinGenerationButton();
	afx_msg void OnRecordWinningsButton();
	afx_msg void OnChangeEditComment();
	afx_msg void OnChangeEditDateAndTime();
	afx_msg void OnUpdateDateTimeButtonRapido();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RAPIDODLGWIN_H__319E8E7A_8227_4631_BE18_995E3A5E2707__INCLUDED_)
