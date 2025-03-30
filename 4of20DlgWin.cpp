// 4of20DlgWin.cpp : implementation file
//

#include "stdafx.h"
#include "GameGenerator.h"
#include "4of20DlgWin.h"
#include "windows.h"
//#include "unistd"

#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>
#include "GameGeneratorDlg.h"
#include "stdafx.h"
#include "GameGenerator.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// C4of20DlgWin dialog


C4of20DlgWin::C4of20DlgWin(CWnd* pParent /*=NULL*/)
	: CDialog(C4of20DlgWin::IDD, pParent)
{
	//{{AFX_DATA_INIT(C4of20DlgWin)
	m_check_4of20_10 = FALSE;
	m_check_4of20_1 = FALSE;
	m_check_4of20_11 = FALSE;
	m_check_4of20_12 = FALSE;
	m_check_4of20_13 = FALSE;
	m_check_4of20_14 = FALSE;
	m_check_4of20_15 = FALSE;
	m_check_4of20_16 = FALSE;
	m_check_4of20_17 = FALSE;
	m_check_4of20_18 = FALSE;
	m_check_4of20_19 = FALSE;
	m_check_4of20_2 = FALSE;
	m_check_4of20_20 = FALSE;
	m_check_4of20_21 = FALSE;
	m_check_4of20_22 = FALSE;
	m_check_4of20_23 = FALSE;
	m_check_4of20_24 = FALSE;
	m_check_4of20_25 = FALSE;
	m_check_4of20_26 = FALSE;
	m_check_4of20_27 = FALSE;
	m_check_4of20_28 = FALSE;
	m_check_4of20_29 = FALSE;
	m_check_4of20_3 = FALSE;
	m_check_4of20_30 = FALSE;
	m_check_4of20_31 = FALSE;
	m_check_4of20_32 = FALSE;
	m_check_4of20_33 = FALSE;
	m_check_4of20_34 = FALSE;
	m_check_4of20_35 = FALSE;
	m_check_4of20_36 = FALSE;
	m_check_4of20_37 = FALSE;
	m_check_4of20_38 = FALSE;
	m_check_4of20_39 = FALSE;
	m_check_4of20_4 = FALSE;
	m_check_4of20_40 = FALSE;
	m_check_4of20_5 = FALSE;
	m_check_4of20_6 = FALSE;
	m_check_4of20_7 = FALSE;
	m_check_4of20_8 = FALSE;
	m_check_4of20_9 = FALSE;
	m_editComment4of20 = _T("");
	m_editDateAndTime4of20 = _T("");
	//}}AFX_DATA_INIT
}


void C4of20DlgWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C4of20DlgWin)
	DDX_Control(pDX, IDC_BUTTON2, m_buttonWinGeneration);
	DDX_Check(pDX, IDC_CHECK10, m_check_4of20_10);
	DDX_Check(pDX, IDC_CHECK1, m_check_4of20_1);
	DDX_Check(pDX, IDC_CHECK11, m_check_4of20_11);
	DDX_Check(pDX, IDC_CHECK12, m_check_4of20_12);
	DDX_Check(pDX, IDC_CHECK13, m_check_4of20_13);
	DDX_Check(pDX, IDC_CHECK14, m_check_4of20_14);
	DDX_Check(pDX, IDC_CHECK15, m_check_4of20_15);
	DDX_Check(pDX, IDC_CHECK16, m_check_4of20_16);
	DDX_Check(pDX, IDC_CHECK17, m_check_4of20_17);
	DDX_Check(pDX, IDC_CHECK18, m_check_4of20_18);
	DDX_Check(pDX, IDC_CHECK19, m_check_4of20_19);
	DDX_Check(pDX, IDC_CHECK2, m_check_4of20_2);
	DDX_Check(pDX, IDC_CHECK20, m_check_4of20_20);
	DDX_Check(pDX, IDC_CHECK21, m_check_4of20_21);
	DDX_Check(pDX, IDC_CHECK22, m_check_4of20_22);
	DDX_Check(pDX, IDC_CHECK23, m_check_4of20_23);
	DDX_Check(pDX, IDC_CHECK24, m_check_4of20_24);
	DDX_Check(pDX, IDC_CHECK25, m_check_4of20_25);
	DDX_Check(pDX, IDC_CHECK26, m_check_4of20_26);
	DDX_Check(pDX, IDC_CHECK27, m_check_4of20_27);
	DDX_Check(pDX, IDC_CHECK28, m_check_4of20_28);
	DDX_Check(pDX, IDC_CHECK29, m_check_4of20_29);
	DDX_Check(pDX, IDC_CHECK3, m_check_4of20_3);
	DDX_Check(pDX, IDC_CHECK30, m_check_4of20_30);
	DDX_Check(pDX, IDC_CHECK31, m_check_4of20_31);
	DDX_Check(pDX, IDC_CHECK32, m_check_4of20_32);
	DDX_Check(pDX, IDC_CHECK33, m_check_4of20_33);
	DDX_Check(pDX, IDC_CHECK34, m_check_4of20_34);
	DDX_Check(pDX, IDC_CHECK35, m_check_4of20_35);
	DDX_Check(pDX, IDC_CHECK36, m_check_4of20_36);
	DDX_Check(pDX, IDC_CHECK37, m_check_4of20_37);
	DDX_Check(pDX, IDC_CHECK38, m_check_4of20_38);
	DDX_Check(pDX, IDC_CHECK39, m_check_4of20_39);
	DDX_Check(pDX, IDC_CHECK4, m_check_4of20_4);
	DDX_Check(pDX, IDC_CHECK40, m_check_4of20_40);
	DDX_Check(pDX, IDC_CHECK5, m_check_4of20_5);
	DDX_Check(pDX, IDC_CHECK6, m_check_4of20_6);
	DDX_Check(pDX, IDC_CHECK7, m_check_4of20_7);
	DDX_Check(pDX, IDC_CHECK8, m_check_4of20_8);
	DDX_Check(pDX, IDC_CHECK9, m_check_4of20_9);
	DDX_Text(pDX, IDC_EDIT1, m_editComment4of20);
	DDX_Text(pDX, IDC_EDIT2, m_editDateAndTime4of20);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C4of20DlgWin, CDialog)
	//{{AFX_MSG_MAP(C4of20DlgWin)
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
	ON_BN_CLICKED(IDC_CHECK25, OnCheck25)
	ON_BN_CLICKED(IDC_CHECK26, OnCheck26)
	ON_BN_CLICKED(IDC_CHECK27, OnCheck27)
	ON_BN_CLICKED(IDC_CHECK28, OnCheck28)
	ON_BN_CLICKED(IDC_CHECK29, OnCheck29)
	ON_BN_CLICKED(IDC_CHECK30, OnCheck30)
	ON_BN_CLICKED(IDC_CHECK31, OnCheck31)
	ON_BN_CLICKED(IDC_CHECK32, OnCheck32)
	ON_BN_CLICKED(IDC_CHECK33, OnCheck33)
	ON_BN_CLICKED(IDC_CHECK34, OnCheck34)
	ON_BN_CLICKED(IDC_CHECK35, OnCheck35)
	ON_BN_CLICKED(IDC_CHECK36, OnCheck36)
	ON_BN_CLICKED(IDC_CHECK37, OnCheck37)
	ON_BN_CLICKED(IDC_CHECK38, OnCheck38)
	ON_BN_CLICKED(IDC_CHECK39, OnCheck39)
	ON_BN_CLICKED(IDC_CHECK40, OnCheck40)
	ON_EN_CHANGE(IDC_EDIT1, OnChangeEditComment)
	ON_EN_CHANGE(IDC_EDIT2, OnChangeEditDateAndTime)
	ON_BN_CLICKED(IDC_BUTTON1, OnUpdateDateTimeButton4of20)
	ON_BN_CLICKED(IDC_BUTTON2, OnWinGenerationButton)
	ON_BN_CLICKED(IDC_BUTTON3, OnRecordWinningsButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C4of20DlgWin message handlers

void C4of20DlgWin::OnCheck1() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck2() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck3() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck4() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck5() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck6() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck7() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck8() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck9() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck10() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck11() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck12() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck13() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck14() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck15() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck16() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck17() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck18() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck19() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck20() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck21() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck22() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck23() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck24() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck25() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck26() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck27() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck28() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck29() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck30() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck31() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck32() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck33() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck34() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck35() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck36() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck37() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck38() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck39() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnCheck40() 
{
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnChangeEditComment() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnChangeEditDateAndTime() 
{
	// TODO: If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialog::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.
	
	// TODO: Add your control notification handler code here
	
}

void C4of20DlgWin::OnUpdateDateTimeButton4of20() 
{
	// TODO: Add your control notification handler code here
		// TODO: Add your control notification handler code here
	m_editDateAndTime4of20 = C4of20DlgWin::fnGetDateCharType();
		UpdateData(false);
}

void C4of20DlgWin::OnWinGenerationButton() 
{

	// TODO: Add your control notification handler code here
	m_editDateAndTime4of20 = C4of20DlgWin::fnGetDateCharType();
	m_check_4of20_1 = false;
	m_check_4of20_2 = false;
	m_check_4of20_3 = false;
	m_check_4of20_4 = false;
	m_check_4of20_5 = false;
	m_check_4of20_6 = false;
	m_check_4of20_7 = false;
	m_check_4of20_8 = false;
	m_check_4of20_9 = false;
	m_check_4of20_10 = false;
	m_check_4of20_11 = false;
	m_check_4of20_12 = false;
	m_check_4of20_13 = false;
	m_check_4of20_14 = false;
	m_check_4of20_15 = false;
	m_check_4of20_16 = false;
	m_check_4of20_17 = false;
	m_check_4of20_18 = false;
	m_check_4of20_19 = false;
	m_check_4of20_20 = false;
	m_check_4of20_21 = false;
	m_check_4of20_22 = false;
	m_check_4of20_23 = false;
	m_check_4of20_24 = false;
	m_check_4of20_25 = false;
	m_check_4of20_26 = false;
	m_check_4of20_27 = false;
	m_check_4of20_28 = false;
	m_check_4of20_29 = false;
	m_check_4of20_30 = false;
	m_check_4of20_31 = false;
	m_check_4of20_32 = false;
	m_check_4of20_33 = false;
	m_check_4of20_34 = false;
	m_check_4of20_35 = false;
	m_check_4of20_36 = false;
	m_check_4of20_37 = false;
	m_check_4of20_38 = false;
	m_check_4of20_39 = false;
	m_check_4of20_40 = false;
	C4of20DlgWin::fnIteratorArray4of20Left();
	m_buttonWinGeneration.EnableWindow(false);
	Sleep(1000);
	C4of20DlgWin::fnIteratorArray4of20Right();
	m_buttonWinGeneration.EnableWindow(true);
	UpdateData(false);

}

void C4of20DlgWin::OnRecordWinningsButton() 
{
	// TODO: Add your control notification handler code here
	
UpdateData(true);
C4of20DlgWin::fnOfstreamTxtFile();
m_editDateAndTime4of20 = C4of20DlgWin::fnGetDateCharType();

}

int* C4of20DlgWin::fnShowArray4of20Left(int array[])
{
	for (int i=0; i<4; ++i){
			if (array[i]==0){
		 	m_check_4of20_1 = true;
			}
			else if (array[i]==1){
			m_check_4of20_2 = true;
			}
			else if (array[i]==2){
			m_check_4of20_3 = true;
			}
			else if (array[i]==3){
			m_check_4of20_4 = true;
			}
			else if (array[i]==4){
			m_check_4of20_5 = true;
			}
			else if (array[i]==5){
			m_check_4of20_6 = true;
			}
			else if (array[i]==6){
			m_check_4of20_7 = true;
			}
			else if (array[i]==7){
			m_check_4of20_8 = true;
			}
			else if (array[i]==8){
			m_check_4of20_9 = true;
			}
			else if (array[i]==9){
			m_check_4of20_10 = true;
			}
			else if (array[i]==10){
			m_check_4of20_11 = true;
			}
			else if (array[i]==11){
			m_check_4of20_12 = true;
			}
			else if (array[i]==12){
			m_check_4of20_13 = true;
			}
			else if (array[i]==13){
			m_check_4of20_14 = true;
			}
			else if (array[i]==14){
			m_check_4of20_15 = true;
			}
			else if (array[i]==15){
			m_check_4of20_16 = true;
			}
			else if (array[i]==16){
			m_check_4of20_17 = true;
			}
			else if (array[i]==17){
			m_check_4of20_18 = true;
			}
			else if (array[i]==18){
			m_check_4of20_19 = true;
			}
			else if (array[i]==19){
			m_check_4of20_20 = true;
			}

	}
	return array;
}

int* C4of20DlgWin::fnShowArray4of20Right(int array[])
{
	for (int i=0; i<4; ++i){
			if (array[i]==0){
		 	m_check_4of20_21 = true;
			}
			else if (array[i]==1){
			m_check_4of20_22 = true;
			}
			else if (array[i]==2){
			m_check_4of20_23 = true;
			}
			else if (array[i]==3){
			m_check_4of20_24 = true;
			}
			else if (array[i]==4){
			m_check_4of20_25 = true;
			}
			else if (array[i]==5){
			m_check_4of20_26 = true;
			}
			else if (array[i]==6){
			m_check_4of20_27 = true;
			}
			else if (array[i]==7){
			m_check_4of20_28 = true;
			}
			else if (array[i]==8){
			m_check_4of20_29 = true;
			}
			else if (array[i]==9){
			m_check_4of20_30 = true;
			}
			else if (array[i]==10){
			m_check_4of20_31 = true;
			}
			else if (array[i]==11){
			m_check_4of20_32 = true;
			}
			else if (array[i]==12){
			m_check_4of20_33 = true;
			}
			else if (array[i]==13){
			m_check_4of20_34 = true;
			}
			else if (array[i]==14){
			m_check_4of20_35 = true;
			}
			else if (array[i]==15){
			m_check_4of20_36 = true;
			}
			else if (array[i]==16){
			m_check_4of20_37 = true;
			}
			else if (array[i]==17){
			m_check_4of20_38 = true;
			}
			else if (array[i]==18){
			m_check_4of20_39 = true;
			}
			else if (array[i]==19){
			m_check_4of20_40 = true;
			}

	}
	return array;
}

int* C4of20DlgWin::fnIteratorArray4of20Left()
{
		srand(time(0));
		int array4of20Left[4] = {0,0,0,0,};
		int random;
		int z =0;
	while(z==0){
		array4of20Left[0] = 0;
		array4of20Left[1] = 0;
		array4of20Left[2] = 0;
		array4of20Left[3] = 0;
		
			for(int i=0; i < 4; i++)
			{
			random = rand()%20;
			array4of20Left[i] = random;
			}
			if (array4of20Left[0]==array4of20Left[1]||
			array4of20Left[0]==array4of20Left[2]||
			array4of20Left[0]==array4of20Left[3]||			
			array4of20Left[1]==array4of20Left[0]||
			array4of20Left[1]==array4of20Left[2]||
			array4of20Left[1]==array4of20Left[3]||
			array4of20Left[2]==array4of20Left[0]||
			array4of20Left[2]==array4of20Left[1]||
			array4of20Left[2]==array4of20Left[3]||
			array4of20Left[3]==array4of20Left[0]||
			array4of20Left[3]==array4of20Left[1]||
			array4of20Left[3]==array4of20Left[2])
			{z=0;
			array4of20Left[0] = 0;
			array4of20Left[1] = 0;
			array4of20Left[2] = 0;
			array4of20Left[3] = 0;
			}
	else if(array4of20Left[0]!=array4of20Left[1]||
			array4of20Left[0]!=array4of20Left[2]||
			array4of20Left[0]!=array4of20Left[3]||			
			array4of20Left[1]!=array4of20Left[0]||
			array4of20Left[1]!=array4of20Left[2]||
			array4of20Left[1]!=array4of20Left[3]||
			array4of20Left[2]!=array4of20Left[0]||
			array4of20Left[2]!=array4of20Left[1]||
			array4of20Left[2]!=array4of20Left[3]||
			array4of20Left[3]!=array4of20Left[0]||
			array4of20Left[3]!=array4of20Left[1]||
			array4of20Left[3]!=array4of20Left[2])
			{
			C4of20DlgWin::fnShowArray4of20Left(array4of20Left);
			z=1;	
			}
	else {z=0;}
}
	return 0;
}
int* C4of20DlgWin::fnIteratorArray4of20Right()
{
		srand(time(0));
		int array4of20Right[4] = {0,0,0,0,};
		int random;
		int z =0;
	while(z==0){
		array4of20Right[0] = 0;
		array4of20Right[1] = 0;
		array4of20Right[2] = 0;
		array4of20Right[3] = 0;
		
			for(int i=0; i < 4; i++)
			{
			random = rand()%20;
			array4of20Right[i] = random;
			}
			if (array4of20Right[0]==array4of20Right[1]||
			array4of20Right[0]==array4of20Right[2]||
			array4of20Right[0]==array4of20Right[3]||			
			array4of20Right[1]==array4of20Right[0]||
			array4of20Right[1]==array4of20Right[2]||
			array4of20Right[1]==array4of20Right[3]||
			array4of20Right[2]==array4of20Right[0]||
			array4of20Right[2]==array4of20Right[1]||
			array4of20Right[2]==array4of20Right[3]||
			array4of20Right[3]==array4of20Right[0]||
			array4of20Right[3]==array4of20Right[1]||
			array4of20Right[3]==array4of20Right[2])
			{z=0;
			array4of20Right[0] = 0;
			array4of20Right[1] = 0;
			array4of20Right[2] = 0;
			array4of20Right[3] = 0;
			}
	else if(array4of20Right[0]!=array4of20Right[1]||
			array4of20Right[0]!=array4of20Right[2]||
			array4of20Right[0]!=array4of20Right[3]||			
			array4of20Right[1]!=array4of20Right[0]||
			array4of20Right[1]!=array4of20Right[2]||
			array4of20Right[1]!=array4of20Right[3]||
			array4of20Right[2]!=array4of20Right[0]||
			array4of20Right[2]!=array4of20Right[1]||
			array4of20Right[2]!=array4of20Right[3]||
			array4of20Right[3]!=array4of20Right[0]||
			array4of20Right[3]!=array4of20Right[1]||
			array4of20Right[3]!=array4of20Right[2])
			{
			C4of20DlgWin::fnShowArray4of20Right(array4of20Right);
			z=1;	
			}
	else {z=0;}
}
	return 0;
}

char* C4of20DlgWin::fnGetDateCharType()
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


void C4of20DlgWin::fnOfstreamTxtFile()
{
	C4of20DlgWin::UpdateData(false);
	char Name[MAX_PATH];
	GetModuleFileNameA(NULL, Name, MAX_PATH);
	ofstream book_file_4of20;  //"C:\\Documents and Settings\\Администратор\\Рабочий стол\\BOOKINFO.txt"
	book_file_4of20.open(NULL+"4of20_INFO.txt", ofstream::app);
	book_file_4of20 <<  m_editDateAndTime4of20  << "	4of20Left :		";
	if(C4of20DlgWin::m_check_4of20_1) 	book_file_4of20 << "1	";
	if(C4of20DlgWin::m_check_4of20_2) 	book_file_4of20 << "2	";
	if(C4of20DlgWin::m_check_4of20_3) 	book_file_4of20 << "3	";
	if(C4of20DlgWin::m_check_4of20_4) 	book_file_4of20 << "4	";
	if(C4of20DlgWin::m_check_4of20_5) 	book_file_4of20 << "5	";
	if(C4of20DlgWin::m_check_4of20_6) 	book_file_4of20 << "6	";
	if(C4of20DlgWin::m_check_4of20_7) 	book_file_4of20 << "7	";
	if(C4of20DlgWin::m_check_4of20_8) 	book_file_4of20 << "8	";
	if(C4of20DlgWin::m_check_4of20_9) 	book_file_4of20 << "9	";
	if(C4of20DlgWin::m_check_4of20_10) 	book_file_4of20 << "10	";
	if(C4of20DlgWin::m_check_4of20_11) 	book_file_4of20 << "11	";
	if(C4of20DlgWin::m_check_4of20_12) 	book_file_4of20 << "12	";
	if(C4of20DlgWin::m_check_4of20_13) 	book_file_4of20 << "13	";
	if(C4of20DlgWin::m_check_4of20_14) 	book_file_4of20 << "14	";
	if(C4of20DlgWin::m_check_4of20_15) 	book_file_4of20 << "15	";
	if(C4of20DlgWin::m_check_4of20_16) 	book_file_4of20 << "16	";
	if(C4of20DlgWin::m_check_4of20_17) 	book_file_4of20 << "17	";
	if(C4of20DlgWin::m_check_4of20_18) 	book_file_4of20 << "18	";
	if(C4of20DlgWin::m_check_4of20_19) 	book_file_4of20 << "19	";
	if(C4of20DlgWin::m_check_4of20_20) 	book_file_4of20 << "20	";
	book_file_4of20 << "	4of20Right :   ";
	if(C4of20DlgWin::m_check_4of20_21) 	book_file_4of20 << "1	";
	if(C4of20DlgWin::m_check_4of20_22) 	book_file_4of20 << "2	";
	if(C4of20DlgWin::m_check_4of20_23) 	book_file_4of20 << "3	";
	if(C4of20DlgWin::m_check_4of20_24) 	book_file_4of20 << "4	";
	if(C4of20DlgWin::m_check_4of20_25) 	book_file_4of20 << "5	";
	if(C4of20DlgWin::m_check_4of20_26) 	book_file_4of20 << "6	";
	if(C4of20DlgWin::m_check_4of20_27) 	book_file_4of20 << "7	";
	if(C4of20DlgWin::m_check_4of20_28) 	book_file_4of20 << "8	";
	if(C4of20DlgWin::m_check_4of20_29) 	book_file_4of20 << "9	";
	if(C4of20DlgWin::m_check_4of20_30) 	book_file_4of20 << "10	";
	if(C4of20DlgWin::m_check_4of20_31) 	book_file_4of20 << "11	";
	if(C4of20DlgWin::m_check_4of20_32) 	book_file_4of20 << "12	";
	if(C4of20DlgWin::m_check_4of20_33) 	book_file_4of20 << "13	";
	if(C4of20DlgWin::m_check_4of20_34) 	book_file_4of20 << "14	";
	if(C4of20DlgWin::m_check_4of20_35) 	book_file_4of20 << "15	";
	if(C4of20DlgWin::m_check_4of20_36) 	book_file_4of20 << "16	";
	if(C4of20DlgWin::m_check_4of20_37) 	book_file_4of20 << "17	";
	if(C4of20DlgWin::m_check_4of20_38) 	book_file_4of20 << "18	";
	if(C4of20DlgWin::m_check_4of20_39) 	book_file_4of20 << "19	";
	if(C4of20DlgWin::m_check_4of20_40) 	book_file_4of20 << "20	";
	book_file_4of20 << "	" << m_editComment4of20;
	book_file_4of20 << endl;
}
