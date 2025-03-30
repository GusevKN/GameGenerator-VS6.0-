// 6of45DlgWin.cpp : implementation file
//

#include "stdafx.h"
#include "GameGenerator.h"
#include "6of45DlgWin.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


#include "stdlib.h"
#include "fstream.h"
#include "time.h"		//time
#include "stdio.h"		//time
#include <string.h>
#include <iostream.h>
#include "GameGeneratorDlg.h"
#include "stdafx.h"
#include "GameGenerator.h"

/////////////////////////////////////////////////////////////////////////////
// C6of45DlgWin dialog


C6of45DlgWin::C6of45DlgWin(CWnd* pParent /*=NULL*/)
	: CDialog(C6of45DlgWin::IDD, pParent)
{
	//{{AFX_DATA_INIT(C6of45DlgWin)
	m_check_6of45_1 = FALSE;
	m_check_6of45_10 = FALSE;
	m_check_6of45_11 = FALSE;
	m_check_6of45_12 = FALSE;
	m_check_6of45_13 = FALSE;
	m_check_6of45_14 = FALSE;
	m_check_6of45_15 = FALSE;
	m_check_6of45_16 = FALSE;
	m_check_6of45_17 = FALSE;
	m_check_6of45_18 = FALSE;
	m_check_6of45_19 = FALSE;
	m_check_6of45_2 = FALSE;
	m_check_6of45_20 = FALSE;
	m_check_6of45_21 = FALSE;
	m_check_6of45_22 = FALSE;
	m_check_6of45_23 = FALSE;
	m_check_6of45_24 = FALSE;
	m_check_6of45_25 = FALSE;
	m_check_6of45_26 = FALSE;
	m_check_6of45_27 = FALSE;
	m_check_6of45_28 = FALSE;
	m_check_6of45_29 = FALSE;
	m_check_6of45_3 = FALSE;
	m_check_6of45_30 = FALSE;
	m_check_6of45_31 = FALSE;
	m_check_6of45_32 = FALSE;
	m_check_6of45_33 = FALSE;
	m_check_6of45_34 = FALSE;
	m_check_6of45_35 = FALSE;
	m_check_6of45_36 = FALSE;
	m_check_6of45_37 = FALSE;
	m_check_6of45_38 = FALSE;
	m_check_6of45_39 = FALSE;
	m_check_6of45_4 = FALSE;
	m_check_6of45_40 = FALSE;
	m_check_6of45_41 = FALSE;
	m_check_6of45_42 = FALSE;
	m_check_6of45_43 = FALSE;
	m_check_6of45_44 = FALSE;
	m_check_6of45_45 = FALSE;
	m_check_6of45_5 = FALSE;
	m_check_6of45_6 = FALSE;
	m_check_6of45_7 = FALSE;
	m_check_6of45_8 = FALSE;
	m_check_6of45_9 = FALSE;
	m_editComment6of45 = _T("");
	m_editDateAndTime6of45 = _T("");
	//}}AFX_DATA_INIT
}


void C6of45DlgWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C6of45DlgWin)
	DDX_Check(pDX, IDC_CHECK1, m_check_6of45_1);
	DDX_Check(pDX, IDC_CHECK10, m_check_6of45_10);
	DDX_Check(pDX, IDC_CHECK11, m_check_6of45_11);
	DDX_Check(pDX, IDC_CHECK12, m_check_6of45_12);
	DDX_Check(pDX, IDC_CHECK13, m_check_6of45_13);
	DDX_Check(pDX, IDC_CHECK14, m_check_6of45_14);
	DDX_Check(pDX, IDC_CHECK15, m_check_6of45_15);
	DDX_Check(pDX, IDC_CHECK16, m_check_6of45_16);
	DDX_Check(pDX, IDC_CHECK17, m_check_6of45_17);
	DDX_Check(pDX, IDC_CHECK18, m_check_6of45_18);
	DDX_Check(pDX, IDC_CHECK19, m_check_6of45_19);
	DDX_Check(pDX, IDC_CHECK2, m_check_6of45_2);
	DDX_Check(pDX, IDC_CHECK20, m_check_6of45_20);
	DDX_Check(pDX, IDC_CHECK21, m_check_6of45_21);
	DDX_Check(pDX, IDC_CHECK22, m_check_6of45_22);
	DDX_Check(pDX, IDC_CHECK23, m_check_6of45_23);
	DDX_Check(pDX, IDC_CHECK24, m_check_6of45_24);
	DDX_Check(pDX, IDC_CHECK25, m_check_6of45_25);
	DDX_Check(pDX, IDC_CHECK26, m_check_6of45_26);
	DDX_Check(pDX, IDC_CHECK27, m_check_6of45_27);
	DDX_Check(pDX, IDC_CHECK28, m_check_6of45_28);
	DDX_Check(pDX, IDC_CHECK29, m_check_6of45_29);
	DDX_Check(pDX, IDC_CHECK3, m_check_6of45_3);
	DDX_Check(pDX, IDC_CHECK30, m_check_6of45_30);
	DDX_Check(pDX, IDC_CHECK31, m_check_6of45_31);
	DDX_Check(pDX, IDC_CHECK32, m_check_6of45_32);
	DDX_Check(pDX, IDC_CHECK33, m_check_6of45_33);
	DDX_Check(pDX, IDC_CHECK34, m_check_6of45_34);
	DDX_Check(pDX, IDC_CHECK35, m_check_6of45_35);
	DDX_Check(pDX, IDC_CHECK36, m_check_6of45_36);
	DDX_Check(pDX, IDC_CHECK37, m_check_6of45_37);
	DDX_Check(pDX, IDC_CHECK38, m_check_6of45_38);
	DDX_Check(pDX, IDC_CHECK39, m_check_6of45_39);
	DDX_Check(pDX, IDC_CHECK4, m_check_6of45_4);
	DDX_Check(pDX, IDC_CHECK40, m_check_6of45_40);
	DDX_Check(pDX, IDC_CHECK41, m_check_6of45_41);
	DDX_Check(pDX, IDC_CHECK42, m_check_6of45_42);
	DDX_Check(pDX, IDC_CHECK43, m_check_6of45_43);
	DDX_Check(pDX, IDC_CHECK44, m_check_6of45_44);
	DDX_Check(pDX, IDC_CHECK45, m_check_6of45_45);
	DDX_Check(pDX, IDC_CHECK5, m_check_6of45_5);
	DDX_Check(pDX, IDC_CHECK6, m_check_6of45_6);
	DDX_Check(pDX, IDC_CHECK7, m_check_6of45_7);
	DDX_Check(pDX, IDC_CHECK8, m_check_6of45_8);
	DDX_Check(pDX, IDC_CHECK9, m_check_6of45_9);
	DDX_Text(pDX, IDC_EDIT1, m_editComment6of45);
	DDX_Text(pDX, IDC_EDIT2, m_editDateAndTime6of45);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C6of45DlgWin, CDialog)
	//{{AFX_MSG_MAP(C6of45DlgWin)
	ON_BN_CLICKED(IDC_BUTTON2, OnWinGenerationButton)
	ON_BN_CLICKED(IDC_BUTTON1, OnUpdateDateTimeButton6of45)
	ON_BN_CLICKED(IDC_BUTTON3, OnRecordWinningsButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C6of45DlgWin message handlers


void C6of45DlgWin::OnUpdateDateTimeButton6of45() 
{
	// TODO: Add your control notification handler code here
	m_editDateAndTime6of45 = C6of45DlgWin::fnGetDateCharType();
	UpdateData(false);
}

void C6of45DlgWin::OnRecordWinningsButton() 
{
	// TODO: Add your control notification handler code here
UpdateData(true);
C6of45DlgWin::fnOfstreamTxtFile();
m_editDateAndTime6of45 = C6of45DlgWin::fnGetDateCharType();
	
}

int* C6of45DlgWin::fnShowArray6of45(int array[])
{

	for (int i=0; i<6; ++i){
			if (array[i]==0){
		 	m_check_6of45_1 = true;
			}
			else if (array[i]==1){
			m_check_6of45_2 = true;
			}
			else if (array[i]==2){
			m_check_6of45_3 = true;
			}
			else if (array[i]==3){
			m_check_6of45_4 = true;
			}
			else if (array[i]==4){
			m_check_6of45_5 = true;
			}
			else if (array[i]==5){
			m_check_6of45_6 = true;
			}
			else if (array[i]==6){
			m_check_6of45_7 = true;
			}
			else if (array[i]==7){
			m_check_6of45_8 = true;
			}
			else if (array[i]==8){
			m_check_6of45_9 = true;
			}
			else if (array[i]==9){
			m_check_6of45_10 = true;
			}
			else if (array[i]==10){
			m_check_6of45_11 = true;
			}
			else if (array[i]==11){
			m_check_6of45_12 = true;
			}
			else if (array[i]==12){
			m_check_6of45_13 = true;
			}
			else if (array[i]==13){
			m_check_6of45_14 = true;
			}
			else if (array[i]==14){
			m_check_6of45_15 = true;
			}
			else if (array[i]==15){
			m_check_6of45_16 = true;
			}
			else if (array[i]==16){
			m_check_6of45_17 = true;
			}
			else if (array[i]==17){
			m_check_6of45_18 = true;
			}
			else if (array[i]==18){
			m_check_6of45_19 = true;
			}
			else if (array[i]==19){
			m_check_6of45_20 = true;
			}
			else if (array[i]==20){
			m_check_6of45_21 = true;
			}
			else if (array[i]==21){
			m_check_6of45_22 = true;
			}
			else if (array[i]==22){
			m_check_6of45_23 = true;
			}
			else if (array[i]==23){
			m_check_6of45_24 = true;
			}
			else if (array[i]==24){
			m_check_6of45_25 = true;
			}
			else if (array[i]==25){
			m_check_6of45_26 = true;
			}
			else if (array[i]==26){
			m_check_6of45_27 = true;
			}
			else if (array[i]==27){
			m_check_6of45_28 = true;
			}
			else if (array[i]==28){
			m_check_6of45_29 = true;
			}
			else if (array[i]==29){
			m_check_6of45_30 = true;
			}
			else if (array[i]==30){
			m_check_6of45_31 = true;
			}
			else if (array[i]==31){
			m_check_6of45_32 = true;
			}
			else if (array[i]==32){
			m_check_6of45_33 = true;
			}
			else if (array[i]==33){
			m_check_6of45_34 = true;
			}
			else if (array[i]==34){
			m_check_6of45_35 = true;
			}
			else if (array[i]==35){
			m_check_6of45_36 = true;
			}
			else if (array[i]==36){
			m_check_6of45_37 = true;
			}
			else if (array[i]==37){
			m_check_6of45_38 = true;
			}
			else if (array[i]==38){
			m_check_6of45_39 = true;
			}
			else if (array[i]==39){
			m_check_6of45_40 = true;
			}
			else if (array[i]==40){
			m_check_6of45_41 = true;
			}
			else if (array[i]==41){
			m_check_6of45_42 = true;
			}
			else if (array[i]==42){
			m_check_6of45_43 = true;
			}
			else if (array[i]==43){
			m_check_6of45_44 = true;
			}
			else if (array[i]==44){
			m_check_6of45_45 = true;
			}


	}

	return array;

}

int* C6of45DlgWin::fnIteratorArray6of45()
{

		srand(time(0));
		int array6of45[6] = {0,0,0,0,0,0};
		int random;
		int z =0;
		while(z==0){
		array6of45[0] = 0;
		array6of45[1] = 0;
		array6of45[2] = 0;
		array6of45[3] = 0;
		array6of45[4] = 0;
		array6of45[5] = 0;
		
			for(int i=0; i < 6; i++)
			{
			random = rand()%45;
			array6of45[i] = random;
			}
			if (array6of45[0]==array6of45[1]||
			array6of45[0]==array6of45[2]||
			array6of45[0]==array6of45[3]||
			array6of45[0]==array6of45[4]||
			array6of45[0]==array6of45[5]||
			array6of45[1]==array6of45[2]||
			array6of45[1]==array6of45[3]||
			array6of45[1]==array6of45[4]||
			array6of45[1]==array6of45[5]||
			array6of45[2]==array6of45[3]||
			array6of45[2]==array6of45[4]||
			array6of45[2]==array6of45[5]||
			array6of45[3]==array6of45[4]||
			array6of45[3]==array6of45[5])
			{z=0;
			array6of45[0] = 0;
			array6of45[1] = 0;
			array6of45[2] = 0;
			array6of45[3] = 0;
			array6of45[4] = 0;
			array6of45[5] = 0;}
	else if(array6of45[0]!=array6of45[1]||
			array6of45[0]!=array6of45[2]||
			array6of45[0]!=array6of45[3]||
			array6of45[0]!=array6of45[4]||
			array6of45[0]!=array6of45[5]||	
			array6of45[1]!=array6of45[2]||
			array6of45[1]!=array6of45[3]||
			array6of45[1]!=array6of45[4]||
			array6of45[1]!=array6of45[5]||
			array6of45[2]!=array6of45[3]||
			array6of45[2]!=array6of45[4]||
			array6of45[2]!=array6of45[5]||
			array6of45[3]!=array6of45[4]||
			array6of45[3]!=array6of45[5])
			{
			C6of45DlgWin::fnShowArray6of45(array6of45);
			z=1;	
			}
	else {z=0;}
}
	return 0;

}


char* C6of45DlgWin::fnGetDateCharType()
{
  struct tm *u;
  const time_t timer = time(NULL);
  u = localtime(&timer);
  static char s[29];
  for (int a = 0; a<30; a++) s[a] = 0;
  strftime(s, 23, "%Y.%m.%d %H:%M:%S", u);

	return s;
}


void C6of45DlgWin::fnOfstreamTxtFile()
{

	C6of45DlgWin::UpdateData(false);
	char Name[MAX_PATH];
	GetModuleFileNameA(NULL, Name, MAX_PATH);
	ofstream book_file_6of45;  //"C:\\Documents and Settings\\Администратор\\Рабочий стол\\BOOKINFO.txt"
	book_file_6of45.open(NULL+"6of45_INFO.txt", ofstream::app);
	book_file_6of45 <<  m_editDateAndTime6of45  << "	6of45 :		";
	if(C6of45DlgWin::m_check_6of45_1) 	book_file_6of45 << "1	";
	if(C6of45DlgWin::m_check_6of45_2) 	book_file_6of45 << "2	";
	if(C6of45DlgWin::m_check_6of45_3) 	book_file_6of45 << "3	";
	if(C6of45DlgWin::m_check_6of45_4) 	book_file_6of45 << "4	";
	if(C6of45DlgWin::m_check_6of45_5) 	book_file_6of45 << "5	";
	if(C6of45DlgWin::m_check_6of45_6) 	book_file_6of45 << "6	";
	if(C6of45DlgWin::m_check_6of45_7) 	book_file_6of45 << "7	";
	if(C6of45DlgWin::m_check_6of45_8) 	book_file_6of45 << "8	";
	if(C6of45DlgWin::m_check_6of45_9) 	book_file_6of45 << "9	";
	if(C6of45DlgWin::m_check_6of45_10) 	book_file_6of45 << "10	";
	if(C6of45DlgWin::m_check_6of45_11) 	book_file_6of45 << "11	";
	if(C6of45DlgWin::m_check_6of45_12) 	book_file_6of45 << "12	";
	if(C6of45DlgWin::m_check_6of45_13) 	book_file_6of45 << "13	";
	if(C6of45DlgWin::m_check_6of45_14) 	book_file_6of45 << "14	";
	if(C6of45DlgWin::m_check_6of45_15) 	book_file_6of45 << "15	";
	if(C6of45DlgWin::m_check_6of45_16) 	book_file_6of45 << "16	";
	if(C6of45DlgWin::m_check_6of45_17) 	book_file_6of45 << "17	";
	if(C6of45DlgWin::m_check_6of45_18) 	book_file_6of45 << "18	";
	if(C6of45DlgWin::m_check_6of45_19) 	book_file_6of45 << "19	";
	if(C6of45DlgWin::m_check_6of45_20) 	book_file_6of45 << "20	";
	if(C6of45DlgWin::m_check_6of45_21) 	book_file_6of45 << "21	";
	if(C6of45DlgWin::m_check_6of45_22) 	book_file_6of45 << "22	";
	if(C6of45DlgWin::m_check_6of45_23) 	book_file_6of45 << "23	";
	if(C6of45DlgWin::m_check_6of45_24) 	book_file_6of45 << "24	";
	if(C6of45DlgWin::m_check_6of45_25) 	book_file_6of45 << "25	";
	if(C6of45DlgWin::m_check_6of45_26) 	book_file_6of45 << "26	";
	if(C6of45DlgWin::m_check_6of45_27) 	book_file_6of45 << "27	";
	if(C6of45DlgWin::m_check_6of45_28) 	book_file_6of45 << "28	";
	if(C6of45DlgWin::m_check_6of45_29) 	book_file_6of45 << "29	";
	if(C6of45DlgWin::m_check_6of45_30) 	book_file_6of45 << "30	";
	if(C6of45DlgWin::m_check_6of45_31) 	book_file_6of45 << "31	";
	if(C6of45DlgWin::m_check_6of45_32) 	book_file_6of45 << "32	";
	if(C6of45DlgWin::m_check_6of45_33) 	book_file_6of45 << "33	";
	if(C6of45DlgWin::m_check_6of45_34) 	book_file_6of45 << "34	";
	if(C6of45DlgWin::m_check_6of45_35) 	book_file_6of45 << "35	";
	if(C6of45DlgWin::m_check_6of45_36) 	book_file_6of45 << "36	";
	if(C6of45DlgWin::m_check_6of45_37) 	book_file_6of45 << "37	";
	if(C6of45DlgWin::m_check_6of45_38) 	book_file_6of45 << "38	";
	if(C6of45DlgWin::m_check_6of45_39) 	book_file_6of45 << "39	";
	if(C6of45DlgWin::m_check_6of45_40) 	book_file_6of45 << "40	";
	if(C6of45DlgWin::m_check_6of45_41) 	book_file_6of45 << "41	";
	if(C6of45DlgWin::m_check_6of45_42) 	book_file_6of45 << "42	";
	if(C6of45DlgWin::m_check_6of45_43) 	book_file_6of45 << "43	";
	if(C6of45DlgWin::m_check_6of45_44) 	book_file_6of45 << "44	";
	if(C6of45DlgWin::m_check_6of45_45) 	book_file_6of45 << "45	";

	book_file_6of45 << "		" << m_editComment6of45;
	book_file_6of45 << endl;

}
void C6of45DlgWin::OnWinGenerationButton() 
{
	// TODO: Add your control notification handler code here
	
	// TODO: Add your control notification handler code here
	m_editDateAndTime6of45 = C6of45DlgWin::fnGetDateCharType();
	m_check_6of45_1 = false;
	m_check_6of45_2 = false;
	m_check_6of45_3 = false;
	m_check_6of45_4 = false;
	m_check_6of45_5 = false;
	m_check_6of45_6 = false;
	m_check_6of45_7 = false;
	m_check_6of45_8 = false;
	m_check_6of45_9 = false;
	m_check_6of45_10 = false;
	m_check_6of45_11 = false;
	m_check_6of45_12 = false;
	m_check_6of45_13 = false;
	m_check_6of45_14 = false;
	m_check_6of45_15 = false;
	m_check_6of45_16 = false;
	m_check_6of45_17 = false;
	m_check_6of45_18 = false;
	m_check_6of45_19 = false;
	m_check_6of45_20 = false;
	m_check_6of45_21 = false;
	m_check_6of45_22 = false;
	m_check_6of45_23 = false;
	m_check_6of45_24 = false;
	m_check_6of45_25 = false;
	m_check_6of45_26 = false;
	m_check_6of45_27 = false;
	m_check_6of45_28 = false;
	m_check_6of45_29 = false;
	m_check_6of45_30 = false;
	m_check_6of45_31 = false;
	m_check_6of45_32 = false;
	m_check_6of45_33 = false;
	m_check_6of45_34 = false;
	m_check_6of45_35 = false;
	m_check_6of45_36 = false;
	m_check_6of45_37 = false;
	m_check_6of45_38 = false;
	m_check_6of45_39 = false;
	m_check_6of45_40 = false;
	m_check_6of45_41 = false;
	m_check_6of45_42 = false;
	m_check_6of45_43 = false;
	m_check_6of45_44 = false;
	m_check_6of45_45 = false;
	C6of45DlgWin::fnIteratorArray6of45();
	UpdateData(false);

}

