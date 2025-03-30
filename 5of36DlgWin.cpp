// 5of36DlgWin.cpp : implementation file
//

#include "stdafx.h"
#include "GameGenerator.h"
#include "5of36DlgWin.h"

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
// C5of36DlgWin dialog


C5of36DlgWin::C5of36DlgWin(CWnd* pParent /*=NULL*/)
	: CDialog(C5of36DlgWin::IDD, pParent)
{
	//{{AFX_DATA_INIT(C5of36DlgWin)
	m_check_5of36_1 = FALSE;
	m_check_5of36_10 = FALSE;
	m_check_5of36_11 = FALSE;
	m_check_5of36_12 = FALSE;
	m_check_5of36_13 = FALSE;
	m_check_5of36_14 = FALSE;
	m_check_5of36_15 = FALSE;
	m_check_5of36_16 = FALSE;
	m_check_5of36_17 = FALSE;
	m_check_5of36_18 = FALSE;
	m_check_5of36_19 = FALSE;
	m_check_5of36_2 = FALSE;
	m_check_5of36_20 = FALSE;
	m_check_5of36_21 = FALSE;
	m_check_5of36_22 = FALSE;
	m_check_5of36_23 = FALSE;
	m_check_5of36_24 = FALSE;
	m_check_5of36_25 = FALSE;
	m_check_5of36_26 = FALSE;
	m_check_5of36_27 = FALSE;
	m_check_5of36_28 = FALSE;
	m_check_5of36_29 = FALSE;
	m_check_5of36_3 = FALSE;
	m_check_5of36_30 = FALSE;
	m_check_5of36_31 = FALSE;
	m_check_5of36_32 = FALSE;
	m_check_5of36_33 = FALSE;
	m_check_5of36_34 = FALSE;
	m_check_5of36_35 = FALSE;
	m_check_5of36_36 = FALSE;
	m_check_5of36_37 = FALSE;
	m_check_5of36_38 = FALSE;
	m_check_5of36_39 = FALSE;
	m_check_5of36_4 = FALSE;
	m_check_5of36_40 = FALSE;
	m_check_5of36_5 = FALSE;
	m_check_5of36_6 = FALSE;
	m_check_5of36_7 = FALSE;
	m_check_5of36_8 = FALSE;
	m_check_5of36_9 = FALSE;
	m_editDateAndTime5of36 = _T("");
	m_editComment5of36 = _T("");
	//}}AFX_DATA_INIT
}


void C5of36DlgWin::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(C5of36DlgWin)
	DDX_Check(pDX, IDC_CHECK1, m_check_5of36_1);
	DDX_Check(pDX, IDC_CHECK10, m_check_5of36_10);
	DDX_Check(pDX, IDC_CHECK11, m_check_5of36_11);
	DDX_Check(pDX, IDC_CHECK12, m_check_5of36_12);
	DDX_Check(pDX, IDC_CHECK13, m_check_5of36_13);
	DDX_Check(pDX, IDC_CHECK14, m_check_5of36_14);
	DDX_Check(pDX, IDC_CHECK15, m_check_5of36_15);
	DDX_Check(pDX, IDC_CHECK16, m_check_5of36_16);
	DDX_Check(pDX, IDC_CHECK17, m_check_5of36_17);
	DDX_Check(pDX, IDC_CHECK18, m_check_5of36_18);
	DDX_Check(pDX, IDC_CHECK19, m_check_5of36_19);
	DDX_Check(pDX, IDC_CHECK2, m_check_5of36_2);
	DDX_Check(pDX, IDC_CHECK20, m_check_5of36_20);
	DDX_Check(pDX, IDC_CHECK21, m_check_5of36_21);
	DDX_Check(pDX, IDC_CHECK22, m_check_5of36_22);
	DDX_Check(pDX, IDC_CHECK23, m_check_5of36_23);
	DDX_Check(pDX, IDC_CHECK24, m_check_5of36_24);
	DDX_Check(pDX, IDC_CHECK25, m_check_5of36_25);
	DDX_Check(pDX, IDC_CHECK26, m_check_5of36_26);
	DDX_Check(pDX, IDC_CHECK27, m_check_5of36_27);
	DDX_Check(pDX, IDC_CHECK28, m_check_5of36_28);
	DDX_Check(pDX, IDC_CHECK29, m_check_5of36_29);
	DDX_Check(pDX, IDC_CHECK3, m_check_5of36_3);
	DDX_Check(pDX, IDC_CHECK30, m_check_5of36_30);
	DDX_Check(pDX, IDC_CHECK31, m_check_5of36_31);
	DDX_Check(pDX, IDC_CHECK32, m_check_5of36_32);
	DDX_Check(pDX, IDC_CHECK33, m_check_5of36_33);
	DDX_Check(pDX, IDC_CHECK34, m_check_5of36_34);
	DDX_Check(pDX, IDC_CHECK35, m_check_5of36_35);
	DDX_Check(pDX, IDC_CHECK36, m_check_5of36_36);
	DDX_Check(pDX, IDC_CHECK37, m_check_5of36_37);
	DDX_Check(pDX, IDC_CHECK38, m_check_5of36_38);
	DDX_Check(pDX, IDC_CHECK39, m_check_5of36_39);
	DDX_Check(pDX, IDC_CHECK4, m_check_5of36_4);
	DDX_Check(pDX, IDC_CHECK40, m_check_5of36_40);
	DDX_Check(pDX, IDC_CHECK5, m_check_5of36_5);
	DDX_Check(pDX, IDC_CHECK6, m_check_5of36_6);
	DDX_Check(pDX, IDC_CHECK7, m_check_5of36_7);
	DDX_Check(pDX, IDC_CHECK8, m_check_5of36_8);
	DDX_Check(pDX, IDC_CHECK9, m_check_5of36_9);
	DDX_Text(pDX, IDC_EDIT2, m_editDateAndTime5of36);
	DDX_Text(pDX, IDC_EDIT1, m_editComment5of36);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(C5of36DlgWin, CDialog)
	//{{AFX_MSG_MAP(C5of36DlgWin)
	ON_BN_CLICKED(IDC_BUTTON2, OnWinGenerationButton)
	ON_BN_CLICKED(IDC_BUTTON3, OnRecordWinningsButton)
	ON_BN_CLICKED(IDC_BUTTON1, OnUpdateDateTimeButton5of36)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// C5of36DlgWin message handlers
int* C5of36DlgWin::fnShowArray5of36(int array[])
{
	for (int i=0; i<5; ++i){
			if (array[i]==0){
		 	m_check_5of36_1 = true;
			}
			else if (array[i]==1){
			m_check_5of36_2 = true;
			}
			else if (array[i]==2){
			m_check_5of36_3 = true;
			}
			else if (array[i]==3){
			m_check_5of36_4 = true;
			}
			else if (array[i]==4){
			m_check_5of36_5 = true;
			}
			else if (array[i]==5){
			m_check_5of36_6 = true;
			}
			else if (array[i]==6){
			m_check_5of36_7 = true;
			}
			else if (array[i]==7){
			m_check_5of36_8 = true;
			}
			else if (array[i]==8){
			m_check_5of36_9 = true;
			}
			else if (array[i]==9){
			m_check_5of36_10 = true;
			}
			else if (array[i]==10){
			m_check_5of36_11 = true;
			}
			else if (array[i]==11){
			m_check_5of36_12 = true;
			}
			else if (array[i]==12){
			m_check_5of36_13 = true;
			}
			else if (array[i]==13){
			m_check_5of36_14 = true;
			}
			else if (array[i]==14){
			m_check_5of36_15 = true;
			}
			else if (array[i]==15){
			m_check_5of36_16 = true;
			}
			else if (array[i]==16){
			m_check_5of36_17 = true;
			}
			else if (array[i]==17){
			m_check_5of36_18 = true;
			}
			else if (array[i]==18){
			m_check_5of36_19 = true;
			}
			else if (array[i]==19){
			m_check_5of36_20 = true;
			}
			else if (array[i]==20){
			m_check_5of36_21 = true;
			}
			else if (array[i]==21){
			m_check_5of36_22 = true;
			}
			else if (array[i]==22){
			m_check_5of36_23 = true;
			}
			else if (array[i]==23){
			m_check_5of36_24 = true;
			}
			else if (array[i]==24){
			m_check_5of36_25 = true;
			}
			else if (array[i]==25){
			m_check_5of36_26 = true;
			}
			else if (array[i]==26){
			m_check_5of36_27 = true;
			}
			else if (array[i]==27){
			m_check_5of36_28 = true;
			}
			else if (array[i]==28){
			m_check_5of36_29 = true;
			}
			else if (array[i]==29){
			m_check_5of36_30 = true;
			}
			else if (array[i]==30){
			m_check_5of36_31 = true;
			}
			else if (array[i]==31){
			m_check_5of36_32 = true;
			}
			else if (array[i]==32){
			m_check_5of36_33 = true;
			}
			else if (array[i]==33){
			m_check_5of36_34 = true;
			}
			else if (array[i]==34){
			m_check_5of36_35 = true;
			}
			else if (array[i]==35){
			m_check_5of36_36 = true;
			}

	}
	return array;
}

	int* C5of36DlgWin::fnShowArray1of4(int array1of4[])
{
			if (array1of4[0]==1){
		 	m_check_5of36_37 = true;
			}
			else if (array1of4[1]==1){
			m_check_5of36_38 = true;
			}
			else if (array1of4[2]==1){
			m_check_5of36_39 = true;
			}
			else if (array1of4[3]==1){
			m_check_5of36_40 = true;
			}
	return array1of4;
}


	int* C5of36DlgWin::fnIteratorArray1of4()
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
			C5of36DlgWin::fnShowArray1of4(array1of4);	
	return 0;
}

int* C5of36DlgWin::fnIteratorArray5of36()
{
		srand(time(0));
		int array5of36[5] = {0,0,0,0,0};
		int random;
		int z =0;
		while(z==0){
		array5of36[0] = 0;
		array5of36[1] = 0;
		array5of36[2] = 0;
		array5of36[3] = 0;
		array5of36[4] = 0;
		
			for(int i=0; i < 5; i++)
			{
			random = rand()%36;
			array5of36[i] = random;
			}
			if (array5of36[0]==array5of36[1]||
			array5of36[0]==array5of36[2]||
			array5of36[0]==array5of36[3]||
			array5of36[0]==array5of36[4]||			
			array5of36[1]==array5of36[2]||
			array5of36[1]==array5of36[3]||
			array5of36[1]==array5of36[4]||
			array5of36[2]==array5of36[3]||
			array5of36[2]==array5of36[4]||
			array5of36[3]==array5of36[4])
			{z=0;
			array5of36[0] = 0;
			array5of36[1] = 0;
			array5of36[2] = 0;
			array5of36[3] = 0;
			array5of36[4] = 0;}
	else if(array5of36[0]!=array5of36[1]||
			array5of36[0]!=array5of36[2]||
			array5of36[0]!=array5of36[3]||
			array5of36[0]!=array5of36[4]||			
			array5of36[1]!=array5of36[2]||
			array5of36[1]!=array5of36[3]||
			array5of36[1]!=array5of36[4]||
			array5of36[2]!=array5of36[3]||
			array5of36[2]!=array5of36[4]||
			array5of36[3]!=array5of36[4])
			{
			C5of36DlgWin::fnShowArray5of36(array5of36);
			z=1;	
			}
	else {z=0;}
}
	return 0;
}


char* C5of36DlgWin::fnGetDateCharType()
{
  struct tm *u;
  const time_t timer = time(NULL);
  u = localtime(&timer);
  static char s[29];
  for (int a = 0; a<30; a++) s[a] = 0;
  strftime(s, 23, "%Y.%m.%d %H:%M:%S", u);

	return s;
}


void C5of36DlgWin::fnOfstreamTxtFile()
{
	C5of36DlgWin::UpdateData(false);
	char Name[MAX_PATH];
	GetModuleFileNameA(NULL, Name, MAX_PATH);
	ofstream book_file_5of36;  //"C:\\Documents and Settings\\Администратор\\Рабочий стол\\BOOKINFO.txt"
	book_file_5of36.open(NULL+"5of36_INFO.txt", ofstream::app);
	book_file_5of36 <<  m_editDateAndTime5of36  << "	5of36 :		";
	if(C5of36DlgWin::m_check_5of36_1) 	book_file_5of36 << "1	";
	if(C5of36DlgWin::m_check_5of36_2) 	book_file_5of36 << "2	";
	if(C5of36DlgWin::m_check_5of36_3) 	book_file_5of36 << "3	";
	if(C5of36DlgWin::m_check_5of36_4) 	book_file_5of36 << "4	";
	if(C5of36DlgWin::m_check_5of36_5) 	book_file_5of36 << "5	";
	if(C5of36DlgWin::m_check_5of36_6) 	book_file_5of36 << "6	";
	if(C5of36DlgWin::m_check_5of36_7) 	book_file_5of36 << "7	";
	if(C5of36DlgWin::m_check_5of36_8) 	book_file_5of36 << "8	";
	if(C5of36DlgWin::m_check_5of36_9) 	book_file_5of36 << "9	";
	if(C5of36DlgWin::m_check_5of36_10) 	book_file_5of36 << "10	";
	if(C5of36DlgWin::m_check_5of36_11) 	book_file_5of36 << "11	";
	if(C5of36DlgWin::m_check_5of36_12) 	book_file_5of36 << "12	";
	if(C5of36DlgWin::m_check_5of36_13) 	book_file_5of36 << "13	";
	if(C5of36DlgWin::m_check_5of36_14) 	book_file_5of36 << "14	";
	if(C5of36DlgWin::m_check_5of36_15) 	book_file_5of36 << "15	";
	if(C5of36DlgWin::m_check_5of36_16) 	book_file_5of36 << "16	";
	if(C5of36DlgWin::m_check_5of36_17) 	book_file_5of36 << "17	";
	if(C5of36DlgWin::m_check_5of36_18) 	book_file_5of36 << "18	";
	if(C5of36DlgWin::m_check_5of36_19) 	book_file_5of36 << "19	";
	if(C5of36DlgWin::m_check_5of36_20) 	book_file_5of36 << "20	";
	if(C5of36DlgWin::m_check_5of36_21) 	book_file_5of36 << "21	";
	if(C5of36DlgWin::m_check_5of36_22) 	book_file_5of36 << "22	";
	if(C5of36DlgWin::m_check_5of36_23) 	book_file_5of36 << "23	";
	if(C5of36DlgWin::m_check_5of36_24) 	book_file_5of36 << "24	";
	if(C5of36DlgWin::m_check_5of36_25) 	book_file_5of36 << "25	";
	if(C5of36DlgWin::m_check_5of36_26) 	book_file_5of36 << "26	";
	if(C5of36DlgWin::m_check_5of36_27) 	book_file_5of36 << "27	";
	if(C5of36DlgWin::m_check_5of36_28) 	book_file_5of36 << "28	";
	if(C5of36DlgWin::m_check_5of36_29) 	book_file_5of36 << "29	";
	if(C5of36DlgWin::m_check_5of36_30) 	book_file_5of36 << "30	";
	if(C5of36DlgWin::m_check_5of36_31) 	book_file_5of36 << "31	";
	if(C5of36DlgWin::m_check_5of36_32) 	book_file_5of36 << "32	";
	if(C5of36DlgWin::m_check_5of36_33) 	book_file_5of36 << "33	";
	if(C5of36DlgWin::m_check_5of36_34) 	book_file_5of36 << "34	";
	if(C5of36DlgWin::m_check_5of36_35) 	book_file_5of36 << "35	";
	if(C5of36DlgWin::m_check_5of36_36) 	book_file_5of36 << "36	";


	book_file_5of36 << "	1of4 :	";
	if(C5of36DlgWin::m_check_5of36_37) 	book_file_5of36 << "1";
	if(C5of36DlgWin::m_check_5of36_38) 	book_file_5of36 << "2";
	if(C5of36DlgWin::m_check_5of36_39) 	book_file_5of36 << "3";
	if(C5of36DlgWin::m_check_5of36_40) 	book_file_5of36 << "4";
	book_file_5of36 << "	" << m_editComment5of36;
	book_file_5of36 << endl;
}

void C5of36DlgWin::OnWinGenerationButton() 
{
	// TODO: Add your control notification handler code here
	
	// TODO: Add your control notification handler code here
	m_editDateAndTime5of36 = C5of36DlgWin::fnGetDateCharType();
	m_check_5of36_1 = false;
	m_check_5of36_2 = false;
	m_check_5of36_3 = false;
	m_check_5of36_4 = false;
	m_check_5of36_5 = false;
	m_check_5of36_6 = false;
	m_check_5of36_7 = false;
	m_check_5of36_8 = false;
	m_check_5of36_9 = false;
	m_check_5of36_10 = false;
	m_check_5of36_11 = false;
	m_check_5of36_12 = false;
	m_check_5of36_13 = false;
	m_check_5of36_14 = false;
	m_check_5of36_15 = false;
	m_check_5of36_16 = false;
	m_check_5of36_17 = false;
	m_check_5of36_18 = false;
	m_check_5of36_19 = false;
	m_check_5of36_20 = false;
	m_check_5of36_21 = false;
	m_check_5of36_22 = false;
	m_check_5of36_23 = false;
	m_check_5of36_24 = false;
	m_check_5of36_25 = false;
	m_check_5of36_26 = false;
	m_check_5of36_27 = false;
	m_check_5of36_28 = false;
	m_check_5of36_29 = false;
	m_check_5of36_30 = false;
	m_check_5of36_31 = false;
	m_check_5of36_32 = false;
	m_check_5of36_33 = false;
	m_check_5of36_34 = false;
	m_check_5of36_35 = false;
	m_check_5of36_36 = false;
	m_check_5of36_37 = false;
	m_check_5of36_38 = false;
	m_check_5of36_39 = false;
	m_check_5of36_40 = false;
	C5of36DlgWin::fnIteratorArray5of36();
	C5of36DlgWin::fnIteratorArray1of4();
	UpdateData(false);

}

void C5of36DlgWin::OnRecordWinningsButton() 
{
	// TODO: Add your control notification handler code here
	
UpdateData(true);
C5of36DlgWin::fnOfstreamTxtFile();
m_editDateAndTime5of36 = C5of36DlgWin::fnGetDateCharType();
	
}

void C5of36DlgWin::OnUpdateDateTimeButton5of36() 
{
	// TODO: Add your control notification handler code here
		m_editDateAndTime5of36 = C5of36DlgWin::fnGetDateCharType();
		UpdateData(false);
}
