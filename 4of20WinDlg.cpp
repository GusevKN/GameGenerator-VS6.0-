// 4of20WinDlg.cpp : implementation file
//

#include "stdafx.h"
#include "GameGenerator.h"
#include "4of20WinDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// C4of20WinDlg dialog


C4of20WinDlg::C4of20WinDlg(CWnd* pParent /*=NULL*/)
	: CDialog(C4of20WinDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(C4of20WinDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void C4of20WinDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C4of20WinDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C4of20WinDlg, CDialog)
	//{{AFX_MSG_MAP(C4of20WinDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C4of20WinDlg message handlers
