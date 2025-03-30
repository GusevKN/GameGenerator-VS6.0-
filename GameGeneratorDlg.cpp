// GameGeneratorDlg.cpp : implementation file
//

#include "stdafx.h"
#include "GameGenerator.h"
#include "GameGeneratorDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGameGeneratorDlg dialog

CGameGeneratorDlg::CGameGeneratorDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CGameGeneratorDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CGameGeneratorDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	pPage6of45DlgWin = new C6of45DlgWin;
	pPage4of20DlgWin = new C4of20DlgWin;
	pPage5of36DlgWin = new C5of36DlgWin;
	pPageRapidoDlgWin = new CRapidoDlgWin;
}

void CGameGeneratorDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CGameGeneratorDlg)
	DDX_Control(pDX, IDC_TAB1, m_Tabs);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CGameGeneratorDlg, CDialog)
	//{{AFX_MSG_MAP(CGameGeneratorDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, OnSelchangeTab1)
	ON_NOTIFY(TCN_SELCHANGING, IDC_TAB1, OnSelchangingTab1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CGameGeneratorDlg message handlers

BOOL CGameGeneratorDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	TC_ITEM tci;
	tci.mask = TCIF_TEXT;
	tci.iImage = -1;
	tci.pszText = "  Rapido  ";
	m_Tabs.InsertItem(0, &tci);
	tci.pszText = "  4 of 20  ";
	m_Tabs.InsertItem(1, &tci);
	tci.pszText = "  5 of 36  ";
	m_Tabs.InsertItem(2, &tci);
	tci.pszText = "  6 of 45  ";
	m_Tabs.InsertItem(3, &tci);

	
	tci.mask = TCIF_PARAM;
	tci.lParam = (LPARAM)pPageRapidoDlgWin;//////////////////////////////////////////////////////
	m_Tabs.SetItem(0, &tci);
	pPageRapidoDlgWin->Create(CRapidoDlgWin::IDD, &m_Tabs);
	pPageRapidoDlgWin->SetWindowPos(NULL, 20, 5, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	pPageRapidoDlgWin->ShowWindow(SW_SHOW);

	tci.mask = TCIF_PARAM;
	tci.lParam = (LPARAM)pPage4of20DlgWin;
	m_Tabs.SetItem(1, &tci);
	pPage4of20DlgWin->Create(C4of20DlgWin::IDD, &m_Tabs);
	pPage4of20DlgWin->SetWindowPos(NULL, 20, 5, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	pPage4of20DlgWin->ShowWindow(SW_HIDE);

	tci.mask = TCIF_PARAM;
	tci.lParam = (LPARAM)pPage5of36DlgWin;//////////////////////////////////////////////////////
	m_Tabs.SetItem(2, &tci);
	pPage5of36DlgWin->Create(C5of36DlgWin::IDD, &m_Tabs);
	pPage5of36DlgWin->SetWindowPos(NULL, 20, 5, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	pPage5of36DlgWin->ShowWindow(SW_HIDE);

	tci.mask = TCIF_PARAM;
	tci.lParam = (LPARAM)pPage6of45DlgWin;//////////////////////////////////////////////////////
	m_Tabs.SetItem(3, &tci);
	pPage6of45DlgWin->Create(C6of45DlgWin::IDD, &m_Tabs);
	pPage6of45DlgWin->SetWindowPos(NULL, 20, 5, 0, 0, SWP_NOSIZE | SWP_NOZORDER);
	pPage6of45DlgWin->ShowWindow(SW_HIDE);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CGameGeneratorDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CGameGeneratorDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CGameGeneratorDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CGameGeneratorDlg::OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int iTab = m_Tabs.GetCurSel();
	TC_ITEM tci;
	tci.mask = TCIF_PARAM;
	m_Tabs.GetItem(iTab, &tci);
	CWnd* pWnd = (CWnd *)tci.lParam;
	pWnd->ShowWindow(SW_SHOW);
	*pResult = 0;
}

BOOL CGameGeneratorDlg::DestroyWindow() 
{
	// TODO: Add your specialized code here and/or call the base class
	delete pPage6of45DlgWin;
	delete pPage4of20DlgWin;
	delete pPage5of36DlgWin;
	delete pPageRapidoDlgWin;
	return CDialog::DestroyWindow();
}

void CGameGeneratorDlg::OnSelchangingTab1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int iTab = m_Tabs.GetCurSel();
	TC_ITEM tci;
	tci.mask = TCIF_PARAM;
	m_Tabs.GetItem(iTab, &tci);
	CWnd* pWnd = (CWnd *)tci.lParam;
	pWnd->ShowWindow(SW_HIDE);
	*pResult = 0;
}

