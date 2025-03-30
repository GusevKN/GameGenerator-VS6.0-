#if !defined(AFX_4OF20DLGWIN_H__2EFA7867_AF31_4F15_8027_AA2DF7439D26__INCLUDED_)
#define AFX_4OF20DLGWIN_H__2EFA7867_AF31_4F15_8027_AA2DF7439D26__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// 4of20DlgWin.h : header file
//
#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>
/////////////////////////////////////////////////////////////////////////////
// C4of20DlgWin dialog

class C4of20DlgWin : public CDialog
{
// Construction
public:
	C4of20DlgWin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(C4of20DlgWin)
	enum { IDD = IDD_4_OF_20 };
	CButton	m_buttonWinGeneration;
	BOOL	m_check_4of20_10;
	BOOL	m_check_4of20_1;
	BOOL	m_check_4of20_11;
	BOOL	m_check_4of20_12;
	BOOL	m_check_4of20_13;
	BOOL	m_check_4of20_14;
	BOOL	m_check_4of20_15;
	BOOL	m_check_4of20_16;
	BOOL	m_check_4of20_17;
	BOOL	m_check_4of20_18;
	BOOL	m_check_4of20_19;
	BOOL	m_check_4of20_2;
	BOOL	m_check_4of20_20;
	BOOL	m_check_4of20_21;
	BOOL	m_check_4of20_22;
	BOOL	m_check_4of20_23;
	BOOL	m_check_4of20_24;
	BOOL	m_check_4of20_25;
	BOOL	m_check_4of20_26;
	BOOL	m_check_4of20_27;
	BOOL	m_check_4of20_28;
	BOOL	m_check_4of20_29;
	BOOL	m_check_4of20_3;
	BOOL	m_check_4of20_30;
	BOOL	m_check_4of20_31;
	BOOL	m_check_4of20_32;
	BOOL	m_check_4of20_33;
	BOOL	m_check_4of20_34;
	BOOL	m_check_4of20_35;
	BOOL	m_check_4of20_36;
	BOOL	m_check_4of20_37;
	BOOL	m_check_4of20_38;
	BOOL	m_check_4of20_39;
	BOOL	m_check_4of20_4;
	BOOL	m_check_4of20_40;
	BOOL	m_check_4of20_5;
	BOOL	m_check_4of20_6;
	BOOL	m_check_4of20_7;
	BOOL	m_check_4of20_8;
	BOOL	m_check_4of20_9;
	CString	m_editComment4of20;
	CString	m_editDateAndTime4of20;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C4of20DlgWin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL
	private:
	int* fnShowArray4of20Left(int array[]);
	int* fnShowArray4of20Right(int array[]);
	int* fnIteratorArray4of20Left();
	int* fnIteratorArray4of20Right();
	void fnOfstreamTxtFile();
	char* fnGetDateCharType();

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(C4of20DlgWin)
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
	afx_msg void OnCheck25();
	afx_msg void OnCheck26();
	afx_msg void OnCheck27();
	afx_msg void OnCheck28();
	afx_msg void OnCheck29();
	afx_msg void OnCheck30();
	afx_msg void OnCheck31();
	afx_msg void OnCheck32();
	afx_msg void OnCheck33();
	afx_msg void OnCheck34();
	afx_msg void OnCheck35();
	afx_msg void OnCheck36();
	afx_msg void OnCheck37();
	afx_msg void OnCheck38();
	afx_msg void OnCheck39();
	afx_msg void OnCheck40();
	afx_msg void OnChangeEditComment();
	afx_msg void OnChangeEditDateAndTime();
	afx_msg void OnUpdateDateTimeButton4of20();
	afx_msg void OnWinGenerationButton();
	afx_msg void OnRecordWinningsButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4OF20DLGWIN_H__2EFA7867_AF31_4F15_8027_AA2DF7439D26__INCLUDED_)
