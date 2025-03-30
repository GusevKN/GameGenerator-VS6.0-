// RapidoDlgWin.cpp : implementation file
//

#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>
#include "GameGeneratorDlg.h"
#include "stdafx.h"
#include "GameGenerator.h"
#include "RapidoDlgWin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRapidoDlgWin dialog


CRapidoDlgWin::CRapidoDlgWin(CWnd* pParent /*=NULL*/)
	: CDialog(CRapidoDlgWin::IDD, pParent)
{
	//{{AFX_DATA_INIT(CRapidoDlgWin)
	m_checkRapido1 = FALSE;
	m_checkRapido10 = FALSE;
	m_checkRapido11 = FALSE;
	m_checkRapido12 = FALSE;
	m_checkRapido13 = FALSE;
	m_checkRapido14 = FALSE;
	m_checkRapido15 = FALSE;
	m_checkRapido16 = FALSE;
	m_checkRapido17 = FALSE;
	m_checkRapido18 = FALSE;
	m_checkRapido19 = FALSE;
	m_checkRapido2 = FALSE;
	m_checkRapido20 = FALSE;
	m_checkRapido21 = FALSE;
	m_checkRapido22 = FALSE;
	m_checkRapido23 = FALSE;
	m_checkRapido24 = FALSE;
	m_checkRapido3 = FALSE;
	m_checkRapido4 = FALSE;
	m_checkRapido5 = FALSE;
	m_checkRapido6 = FALSE;
	m_checkRapido7 = FALSE;
	m_checkRapido8 = FALSE;
	m_checkRapido9 = FALSE;
	m_editCommentRapido = _T("");
	m_editDateAndTimeRapido = _T("");
	//}}AFX_DATA_INIT
}


void CRapidoDlgWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRapidoDlgWin)
	DDX_Check(pDX, IDC_CHECK1, m_checkRapido1);
	DDX_Check(pDX, IDC_CHECK10, m_checkRapido10);
	DDX_Check(pDX, IDC_CHECK11, m_checkRapido11);
	DDX_Check(pDX, IDC_CHECK12, m_checkRapido12);
	DDX_Check(pDX, IDC_CHECK13, m_checkRapido13);
	DDX_Check(pDX, IDC_CHECK14, m_checkRapido14);
	DDX_Check(pDX, IDC_CHECK15, m_checkRapido15);
	DDX_Check(pDX, IDC_CHECK16, m_checkRapido16);
	DDX_Check(pDX, IDC_CHECK17, m_checkRapido17);
	DDX_Check(pDX, IDC_CHECK18, m_checkRapido18);
	DDX_Check(pDX, IDC_CHECK19, m_checkRapido19);
	DDX_Check(pDX, IDC_CHECK2, m_checkRapido2);
	DDX_Check(pDX, IDC_CHECK20, m_checkRapido20);
	DDX_Check(pDX, IDC_CHECK21, m_checkRapido21);
	DDX_Check(pDX, IDC_CHECK22, m_checkRapido22);
	DDX_Check(pDX, IDC_CHECK23, m_checkRapido23);
	DDX_Check(pDX, IDC_CHECK24, m_checkRapido24);
	DDX_Check(pDX, IDC_CHECK3, m_checkRapido3);
	DDX_Check(pDX, IDC_CHECK4, m_checkRapido4);
	DDX_Check(pDX, IDC_CHECK5, m_checkRapido5);
	DDX_Check(pDX, IDC_CHECK6, m_checkRapido6);
	DDX_Check(pDX, IDC_CHECK7, m_checkRapido7);
	DDX_Check(pDX, IDC_CHECK8, m_checkRapido8);
	DDX_Check(pDX, IDC_CHECK9, m_checkRapido9);
	DDX_Text(pDX, IDC_EDIT1, m_editCommentRapido);
	DDV_MaxChars(pDX, m_editCommentRapido, 150);
	DDX_Text(pDX, IDC_EDIT2, m_editDateAndTimeRapido);
	DDV_MaxChars(pDX, m_editDateAndTimeRapido, 30);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRapidoDlgWin, CDialog)
	//{{AFX_MSG_MAP(CRapidoDlgWin)
	ON_BN_CLICKED(IDC_CHECK1, OnCheck1)
	ON_BN_CLICKED(IDC_CHECK2, OnCheck2)
	ON_BN_CLICKED(IDC_CHECK3, OnCheck3)
	ON_BN_CLICKED(IDC_CHECK4, OnCheck4)
	ON_BN_CLICKED(IDC_CHECK5, OnCheck5)
	ON_BN_CLICKED(IDC_CHECK6, OnCheck6)
	ON_BN_CLICKED(IDC_CHECK7, OnCheck7)
	ON_BN_CLICKED(IDC_CHECK8, OnCheck8)
	ON_BN_CLICKED(IDC_CHECK9, OnCheck9)
	ON_BN_CLICKED(IDC_CHECK10, OnCheck10)
	ON_BN_CLICKED(IDC_CHECK11, OnCheck11)
	ON_BN_CLICKED(IDC_CHECK12, OnCheck12)
	ON_BN_CLICKED(IDC_CHECK13, OnCheck13)
	ON_BN_CLICKED(IDC_CHECK14, OnCheck14)
	ON_BN_CLICKED(IDC_CHECK15, OnCheck15)
	ON_BN_CLICKED(IDC_CHECK16, OnCheck16)
	ON_BN_CLICKED(IDC_CHECK17, OnCheck17)
	ON_BN_CLICKED(IDC_CHECK18, OnCheck18)
	ON_BN_CLICKED(IDC_CHECK19, OnCheck19)
	ON_BN_CLICKED(IDC_CHECK20, OnCheck20)
	ON_BN_CLICKED(IDC_CHECK21, OnCheck21)
	ON_BN_CLICKED(IDC_CHECK22, OnCheck22)
	ON_BN_CLICKED(IDC_CHECK23, OnCheck23)
	ON_BN_CLICKED(IDC_CHECK24, OnCheck24)
	ON_BN_CLICKED(IDC_BUTTON1, OnWinGenerationButton)
	ON_BN_CLICKED(IDC_BUTTON2, OnRecordWinningsButton)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEditComment)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEditDateAndTime)
	ON_BN_CLICKED(IDC_BUTTON3, OnUpdateDateTimeButtonRapido)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRapidoDlgWin message handlers

void CRapidoDlgWin::OnCheck1() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck2() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck3() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck4() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck5() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck6() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck7() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck8() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck9() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck10() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck11() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck12() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck13() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck14() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck15() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck16() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck17() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck18() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck19() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck20() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck21() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck22() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck23() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnCheck24() 
{
	// TODO: Add your control notification handler code here
		UpdateData(true);
}

void CRapidoDlgWin::OnWinGenerationButton() 
{

	// TODO: Add your control notification handler code here
		// TODO: Add your control notification handler code here
m_editDateAndTimeRapido = CRapidoDlgWin::fnGetDateCharType();
	m_checkRapido1 = false;
	m_checkRapido2 = false;
	m_checkRapido3 = false;
	m_checkRapido4 = false;
	m_checkRapido5 = false;
	m_checkRapido6 = false;
	m_checkRapido7 = false;
	m_checkRapido8 = false;
	m_checkRapido9 = false;
	m_checkRapido10 = false;
	m_checkRapido11 = false;
	m_checkRapido12 = false;
	m_checkRapido13 = false;
	m_checkRapido14 = false;
	m_checkRapido15 = false;
	m_checkRapido16 = false;
	m_checkRapido17 = false;
	m_checkRapido18 = false;
	m_checkRapido19 = false;
	m_checkRapido20 = false;
	m_checkRapido21 = false;
	m_checkRapido22 = false;
	m_checkRapido23 = false;
	m_checkRapido24 = false;
	CRapidoDlgWin::fnIteratorArray8of20();
	CRapidoDlgWin::fnIteratorArray1of4();
	UpdateData(false);

}

void CRapidoDlgWin::OnRecordWinningsButton() 
{
	// TODO: Add your control notification handler code here

UpdateData(true);
CRapidoDlgWin::fnOfstreamTxtFile();
m_editDateAndTimeRapido = CRapidoDlgWin::fnGetDateCharType();

}

void CRapidoDlgWin::OnChangeEditComment() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void CRapidoDlgWin::OnChangeEditDateAndTime() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

int* CRapidoDlgWin::fnShowArray8of20(int array[])
{
	for (int i=0; i<8; ++i){
			if (array[i]==0){
		 	m_checkRapido1 = true;
			}
			else if (array[i]==1){
			m_checkRapido2 = true;
			}
			else if (array[i]==2){
			m_checkRapido3 = true;
			}
			else if (array[i]==3){
			m_checkRapido4 = true;
			}
			else if (array[i]==4){
			m_checkRapido5 = true;
			}
			else if (array[i]==5){
			m_checkRapido6 = true;
			}
			else if (array[i]==6){
			m_checkRapido7 = true;
			}
			else if (array[i]==7){
			m_checkRapido8 = true;
			}
			else if (array[i]==8){
			m_checkRapido9 = true;
			}
			else if (array[i]==9){
			m_checkRapido10 = true;
			}
			else if (array[i]==10){
			m_checkRapido11 = true;
			}
			else if (array[i]==11){
			m_checkRapido12 = true;
			}
			else if (array[i]==12){
			m_checkRapido13 = true;
			}
			else if (array[i]==13){
			m_checkRapido14 = true;
			}
			else if (array[i]==14){
			m_checkRapido15 = true;
			}
			else if (array[i]==15){
			m_checkRapido16 = true;
			}
			else if (array[i]==16){
			m_checkRapido17 = true;
			}
			else if (array[i]==17){
			m_checkRapido18 = true;
			}
			else if (array[i]==18){
			m_checkRapido19 = true;
			}
			else if (array[i]==19){
			m_checkRapido20 = true;
			}

	}
	return array;
}

	int* CRapidoDlgWin::fnShowArray1of4(int array1of4[])
{
			if (array1of4[0]==1){
		 	m_checkRapido21 = true;
			}
			else if (array1of4[1]==1){
			m_checkRapido22 = true;
			}
			else if (array1of4[2]==1){
			m_checkRapido23 = true;
			}
			else if (array1of4[3]==1){
			m_checkRapido24 = true;
			}
	return array1of4;
}

int* CRapidoDlgWin::fnIteratorArray8of20()
{
		srand(time(0));
		int array8of20[8] = {0,0,0,0,0,0,0,0};
		int random;
		int z =0;
	while(z==0){
		array8of20[0] = 0;
		array8of20[1] = 0;
		array8of20[2] = 0;
		array8of20[3] = 0;
		array8of20[4] = 0;
		array8of20[5] = 0;
		array8of20[6] = 0;
		array8of20[7] = 0;
		
			for(int i=0; i < 8; i++)
			{
			random = rand()%20;
			array8of20[i] = random;
			}
			if (array8of20[0]==array8of20[1]||
			array8of20[0]==array8of20[2]||
			array8of20[0]==array8of20[3]||
			array8of20[0]==array8of20[4]||
			array8of20[0]==array8of20[5]||
			array8of20[0]==array8of20[6]||
			array8of20[0]==array8of20[7]||			
			array8of20[1]==array8of20[0]||
			array8of20[1]==array8of20[2]||
			array8of20[1]==array8of20[3]||
			array8of20[1]==array8of20[4]||
			array8of20[1]==array8of20[5]||
			array8of20[1]==array8of20[6]||
			array8of20[1]==array8of20[7]||
			array8of20[2]==array8of20[0]||
			array8of20[2]==array8of20[1]||
			array8of20[2]==array8of20[3]||
			array8of20[2]==array8of20[4]||
			array8of20[2]==array8of20[5]||
			array8of20[2]==array8of20[6]||
			array8of20[2]==array8of20[7]||
			array8of20[3]==array8of20[0]||
			array8of20[3]==array8of20[1]||
			array8of20[3]==array8of20[2]||
			array8of20[3]==array8of20[4]||
			array8of20[3]==array8of20[5]||
			array8of20[3]==array8of20[6]||
			array8of20[3]==array8of20[7]||
			array8of20[4]==array8of20[0]||
			array8of20[4]==array8of20[1]||
			array8of20[4]==array8of20[2]||
			array8of20[4]==array8of20[3]||
			array8of20[4]==array8of20[5]||
			array8of20[4]==array8of20[6]||
			array8of20[4]==array8of20[7]||
			array8of20[5]==array8of20[0]||
			array8of20[5]==array8of20[1]||
			array8of20[5]==array8of20[2]||
			array8of20[5]==array8of20[3]||
			array8of20[5]==array8of20[4]||
			array8of20[5]==array8of20[6]||
			array8of20[5]==array8of20[7]||
			array8of20[6]==array8of20[0]||
			array8of20[6]==array8of20[1]||
			array8of20[6]==array8of20[2]||
			array8of20[6]==array8of20[3]||
			array8of20[6]==array8of20[4]||
			array8of20[6]==array8of20[5]||
			array8of20[6]==array8of20[7]||
			array8of20[7]==array8of20[0]||
			array8of20[7]==array8of20[1]||
			array8of20[7]==array8of20[2]||
			array8of20[7]==array8of20[3]||
			array8of20[7]==array8of20[4]||
			array8of20[7]==array8of20[5]||
			array8of20[7]==array8of20[6])
			{z=0;
			array8of20[0] = 0;
			array8of20[1] = 0;
			array8of20[2] = 0;
			array8of20[3] = 0;
			array8of20[4] = 0;
			array8of20[5] = 0;
			array8of20[6] = 0;
			array8of20[7] = 0;}
	else if(array8of20[0]!=array8of20[1]||
			array8of20[0]!=array8of20[2]||
			array8of20[0]!=array8of20[3]||
			array8of20[0]!=array8of20[4]||
			array8of20[0]!=array8of20[5]||
			array8of20[0]!=array8of20[6]||
			array8of20[0]!=array8of20[7]||			
			array8of20[1]!=array8of20[0]||
			array8of20[1]!=array8of20[2]||
			array8of20[1]!=array8of20[3]||
			array8of20[1]!=array8of20[4]||
			array8of20[1]!=array8of20[5]||
			array8of20[1]!=array8of20[6]||
			array8of20[1]!=array8of20[7]||
			array8of20[2]!=array8of20[0]||
			array8of20[2]!=array8of20[1]||
			array8of20[2]!=array8of20[3]||
			array8of20[2]!=array8of20[4]||
			array8of20[2]!=array8of20[5]||
			array8of20[2]!=array8of20[6]||
			array8of20[2]!=array8of20[7]||
			array8of20[3]!=array8of20[0]||
			array8of20[3]!=array8of20[1]||
			array8of20[3]!=array8of20[2]||
			array8of20[3]!=array8of20[4]||
			array8of20[3]!=array8of20[5]||
			array8of20[3]!=array8of20[6]||
			array8of20[3]!=array8of20[7]||
			array8of20[4]!=array8of20[0]||
			array8of20[4]!=array8of20[1]||
			array8of20[4]!=array8of20[2]||
			array8of20[4]!=array8of20[3]||
			array8of20[4]!=array8of20[5]||
			array8of20[4]!=array8of20[6]||
			array8of20[4]!=array8of20[7]||
			array8of20[5]!=array8of20[0]||
			array8of20[5]!=array8of20[1]||
			array8of20[5]!=array8of20[2]||
			array8of20[5]!=array8of20[3]||
			array8of20[5]!=array8of20[4]||
			array8of20[5]!=array8of20[6]||
			array8of20[5]!=array8of20[7]||
			array8of20[6]!=array8of20[0]||
			array8of20[6]!=array8of20[1]||
			array8of20[6]!=array8of20[2]||
			array8of20[6]!=array8of20[3]||
			array8of20[6]!=array8of20[4]||
			array8of20[6]!=array8of20[5]||
			array8of20[6]!=array8of20[7]||
			array8of20[7]!=array8of20[0]||
			array8of20[7]!=array8of20[1]||
			array8of20[7]!=array8of20[2]||
			array8of20[7]!=array8of20[3]||
			array8of20[7]!=array8of20[4]||
			array8of20[7]!=array8of20[5]||
			array8of20[7]!=array8of20[6])
			{
			CRapidoDlgWin::fnShowArray8of20(array8of20);
			z=1;	
			}
	else {z=0;}
}
	return 0;
}
	int* CRapidoDlgWin::fnIteratorArray1of4()
	{
			srand(time(0));
			int array1of4[4];
			array1of4[0] = 0;
			array1of4[1] = 0;
			array1of4[2] = 0;
			array1of4[3] = 0;

		int random1of4;
			random1of4 = rand() % 4;
		
			if(random1of4==0){
				array1of4[0] = 1;
				array1of4[1] = 0;
				array1of4[2] = 0;
				array1of4[3] = 0;
			}
			else if(random1of4==1){
				array1of4[0] = 0;
				array1of4[1] = 1;
				array1of4[2] = 0;
				array1of4[3] = 0;
			}
			else if(random1of4==2){
				array1of4[0] = 0;
				array1of4[1] = 0;
				array1of4[2] = 1;
				array1of4[3] = 0;
			}
			else if(random1of4==3){
				array1of4[0] = 0;
				array1of4[1] = 0;
				array1of4[2] = 0;
				array1of4[3] = 1;
			}
			CRapidoDlgWin::fnShowArray1of4(array1of4);	
	return 0;
}


char* CRapidoDlgWin::fnGetDateCharType()
{
  struct tm *u;
  const time_t timer = time(NULL);
  u = localtime(&timer);
  static char s[29];
 //  char* t;
  for (int a = 0; a<30; a++) s[a] = 0;
  strftime(s, 23, "%Y.%m.%d %H:%M:%S", u);

	return s;
}


void CRapidoDlgWin::fnOfstreamTxtFile()
{
	CRapidoDlgWin::UpdateData(false);
	char Name[MAX_PATH];
	GetModuleFileNameA(NULL, Name, MAX_PATH);
	ofstream book_file_Rapido;  //"C:\\Documents and Settings\\Администратор\\Рабочий стол\\BOOKINFO.txt"
	book_file_Rapido.open(NULL+"RAPIDO_INFO.txt", ofstream::app);
	book_file_Rapido <<  m_editDateAndTimeRapido  << "	8of20 :		";
	if(CRapidoDlgWin::m_checkRapido1) 	book_file_Rapido << "1	";
	if(CRapidoDlgWin::m_checkRapido2) 	book_file_Rapido << "2	";
	if(CRapidoDlgWin::m_checkRapido3) 	book_file_Rapido << "3	";
	if(CRapidoDlgWin::m_checkRapido4) 	book_file_Rapido << "4	";
	if(CRapidoDlgWin::m_checkRapido5) 	book_file_Rapido << "5	";
	if(CRapidoDlgWin::m_checkRapido6) 	book_file_Rapido << "6	";
	if(CRapidoDlgWin::m_checkRapido7) 	book_file_Rapido << "7	";
	if(CRapidoDlgWin::m_checkRapido8) 	book_file_Rapido << "8	";
	if(CRapidoDlgWin::m_checkRapido9) 	book_file_Rapido << "9	";
	if(CRapidoDlgWin::m_checkRapido10) 	book_file_Rapido << "10	";
	if(CRapidoDlgWin::m_checkRapido11) 	book_file_Rapido << "11	";
	if(CRapidoDlgWin::m_checkRapido12) 	book_file_Rapido << "12	";
	if(CRapidoDlgWin::m_checkRapido13) 	book_file_Rapido << "13	";
	if(CRapidoDlgWin::m_checkRapido14) 	book_file_Rapido << "14	";
	if(CRapidoDlgWin::m_checkRapido15) 	book_file_Rapido << "15	";
	if(CRapidoDlgWin::m_checkRapido16) 	book_file_Rapido << "16	";
	if(CRapidoDlgWin::m_checkRapido17) 	book_file_Rapido << "17	";
	if(CRapidoDlgWin::m_checkRapido18) 	book_file_Rapido << "18	";
	if(CRapidoDlgWin::m_checkRapido19) 	book_file_Rapido << "19	";
	if(CRapidoDlgWin::m_checkRapido20) 	book_file_Rapido << "20	";
	book_file_Rapido << "	1of4 :	";
	if(CRapidoDlgWin::m_checkRapido21) 	book_file_Rapido << "1";
	if(CRapidoDlgWin::m_checkRapido22) 	book_file_Rapido << "2";
	if(CRapidoDlgWin::m_checkRapido23) 	book_file_Rapido << "3";
	if(CRapidoDlgWin::m_checkRapido24) 	book_file_Rapido << "4";
	book_file_Rapido << "		" << m_editCommentRapido;
	book_file_Rapido << endl;
}

void CRapidoDlgWin::OnUpdateDateTimeButtonRapido() 
{
	// TODO: Add your control notification handler code here
	m_editDateAndTimeRapido = CRapidoDlgWin::fnGetDateCharType();
		UpdateData(false);
}
