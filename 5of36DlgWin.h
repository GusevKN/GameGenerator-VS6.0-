#if !defined(AFX_5OF36DLGWIN_H__98FA20D1_5739_4CAB_90DF_0717D546213D__INCLUDED_)
#define AFX_5OF36DLGWIN_H__98FA20D1_5739_4CAB_90DF_0717D546213D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// 5of36DlgWin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// C5of36DlgWin dialog

class C5of36DlgWin : public CDialog
{
// Construction
public:
	C5of36DlgWin(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(C5of36DlgWin)
	enum { IDD = IDD_5_OF_36 };
	BOOL	m_check_5of36_1;
	BOOL	m_check_5of36_10;
	BOOL	m_check_5of36_11;
	BOOL	m_check_5of36_12;
	BOOL	m_check_5of36_13;
	BOOL	m_check_5of36_14;
	BOOL	m_check_5of36_15;
	BOOL	m_check_5of36_16;
	BOOL	m_check_5of36_17;
	BOOL	m_check_5of36_18;
	BOOL	m_check_5of36_19;
	BOOL	m_check_5of36_2;
	BOOL	m_check_5of36_20;
	BOOL	m_check_5of36_21;
	BOOL	m_check_5of36_22;
	BOOL	m_check_5of36_23;
	BOOL	m_check_5of36_24;
	BOOL	m_check_5of36_25;
	BOOL	m_check_5of36_26;
	BOOL	m_check_5of36_27;
	BOOL	m_check_5of36_28;
	BOOL	m_check_5of36_29;
	BOOL	m_check_5of36_3;
	BOOL	m_check_5of36_30;
	BOOL	m_check_5of36_31;
	BOOL	m_check_5of36_32;
	BOOL	m_check_5of36_33;
	BOOL	m_check_5of36_34;
	BOOL	m_check_5of36_35;
	BOOL	m_check_5of36_36;
	BOOL	m_check_5of36_37;
	BOOL	m_check_5of36_38;
	BOOL	m_check_5of36_39;
	BOOL	m_check_5of36_4;
	BOOL	m_check_5of36_40;
	BOOL	m_check_5of36_5;
	BOOL	m_check_5of36_6;
	BOOL	m_check_5of36_7;
	BOOL	m_check_5of36_8;
	BOOL	m_check_5of36_9;
	CString	m_editDateAndTime5of36;
	CString	m_editComment5of36;
	//}}AFX_DATA
	private:
	int* fnShowArray5of36(int array[]);
	int* fnShowArray1of4(int array1of4[]);
	int* fnIteratorArray5of36();
	int* fnIteratorArray1of4();
	void fnOfstreamTxtFile();
	char* fnGetDateCharType();


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(C5of36DlgWin)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(C5of36DlgWin)
	afx_msg void OnWinGenerationButton();
	afx_msg void OnRecordWinningsButton();
	afx_msg void OnUpdateDateTimeButton5of36();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_5OF36DLGWIN_H__98FA20D1_5739_4CAB_90DF_0717D546213D__INCLUDED_)
