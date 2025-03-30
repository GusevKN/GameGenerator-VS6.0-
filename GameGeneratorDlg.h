// GameGeneratorDlg.h : header file
//

#if !defined(AFX_GAMEGENERATORDLG_H__F7DBD9FD_58C7_4FC7_83E4_3DE40FF4FBA6__INCLUDED_)
#define AFX_GAMEGENERATORDLG_H__F7DBD9FD_58C7_4FC7_83E4_3DE40FF4FBA6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "6of45DlgWin.h"
#include "4of20DlgWin.h"
#include "5of36DlgWin.h"
#include "RapidoDlgWin.h"
/////////////////////////////////////////////////////////////////////////////
// CGameGeneratorDlg dialog

class CGameGeneratorDlg : public CDialog
{
// Construction
public:
	CGameGeneratorDlg(CWnd* pParent = NULL);	// standard constructor
	
// Dialog Data
	//{{AFX_DATA(CGameGeneratorDlg)
	enum { IDD = IDD_GAMEGENERATOR_DIALOG };
	CTabCtrl	m_Tabs;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CGameGeneratorDlg)
	public:
	virtual BOOL DestroyWindow();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	C6of45DlgWin* pPage6of45DlgWin;
	C4of20DlgWin* pPage4of20DlgWin;
	C5of36DlgWin* pPage5of36DlgWin;
	CRapidoDlgWin* pPageRapidoDlgWin;

	// Generated message map functions
	//{{AFX_MSG(CGameGeneratorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSelchangingTab1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GAMEGENERATORDLG_H__F7DBD9FD_58C7_4FC7_83E4_3DE40FF4FBA6__INCLUDED_)
