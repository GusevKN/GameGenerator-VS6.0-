#if !defined(AFX_4OF20WINDLG_H__A48F8330_FAF7_46C2_B1D6_F36D1089A949__INCLUDED_)
#define AFX_4OF20WINDLG_H__A48F8330_FAF7_46C2_B1D6_F36D1089A949__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// 4of20WinDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// C4of20WinDlg dialog

class C4of20WinDlg : public CDialog
{
// Construction
public:
	C4of20WinDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(C4of20WinDlg)
	enum { IDD = IDD_4_OF_20 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C4of20WinDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(C4of20WinDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_4OF20WINDLG_H__A48F8330_FAF7_46C2_B1D6_F36D1089A949__INCLUDED_)
