//---------------------------------------------------------------------------
 #include <vcl.h>
#pragma hdrstop

#include <Grids.hpp>
#include "Unit4.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
 int  n;
 int num[Nmax];
Student  gruppa[Nmax], s1;

void RazmernStrG(int n, TStringGrid *StrG, AnsiString st)
{ /*��������� ��� ������� ����������� ������� � ������� � ��������� */
 StrG->ColCount = 11;
 StrG->RowCount = n+1;
 StrG->Cells[0][0] = st;

 for(int i=0; i<=n; i++) {
    StrG->Cells[0][i] = IntToStr(i);
	StrG->Cells[1][0] = "�I�";
	StrG->Cells[2][0] = "г� ����������";
	StrG->Cells[3][0] = "г� ������";
	StrG->Cells[4][0] = "����";
	StrG->Cells[5][0] = "�����";
	StrG->Cells[6][0] = "�����������";
	StrG->Cells[7][0] = "���� ����������";
	StrG->Cells[8][0] = "��������� �������";
	StrG->Cells[9][0] = "���������";
	StrG->Cells[10][0] = "���������";
 }

}
void inpzap(int n, Student a[], TStringGrid *StrG)
{ /*��������� ����� �������� ������� �� ������� StrG */
 for(int i=0; i<n; i++) {
	 a[i].fio = StrG->Cells[1][i+1];
	 a[i].godr = StrToInt(StrG->Cells[2][i+1]);
	 a[i].godp = StrToInt(StrG->Cells[3][i+1]);
	 a[i].course = StrToInt(StrG->Cells[4][i+1]);
	 a[i].group = StrToInt(StrG->Cells[5][i+1]);
	 a[i].ocenk.inf = StrToInt(StrG->Cells[6][i+1]);
	 a[i].ocenk.mat = StrToInt(StrG->Cells[7][i+1]);
	 a[i].ocenk.os = StrToInt(StrG->Cells[8][i+1]);
	 a[i].ocenk.alg = StrToInt(StrG->Cells[9][i+1]);
	 a[i].ocenk.eng = StrToInt(StrG->Cells[10][i+1]);
 }

}
void outpz(int n, int k, Student a[], int num[], TStringGrid *StrG)
{ /*��������� ������ ������� ��������� */
  RazmernStrG(k, StrG, "����.>�����.");
  int j;
 for(int i=0; i<k; i++) {
	j=num[i];
    StrG->Cells[1][i] = a[j].fio;
	StrG->Cells[2][i] = IntToStr(a[j].godr);
	StrG->Cells[3][i] = IntToStr(a[j].godp);
	StrG->Cells[4][i] = IntToStr(a[j].course);
	StrG->Cells[5][i] = a[j].group;
	StrG->Cells[6][i] = IntToStr(a[j].ocenk.inf);
	StrG->Cells[7][i] = IntToStr(a[j].ocenk.mat);
	StrG->Cells[8][i] = IntToStr(a[j].ocenk.os);
	StrG->Cells[9][i] = IntToStr(a[j].ocenk.alg);
	StrG->Cells[10][i] = IntToStr(a[j].ocenk.eng);
  }
}

int kolstud(int n, Student gruppa[], int num[])
{/* ����������� ���������, ������� �������� ������ 4 � 5  */
int b=0;
int j=0;
 for(int i=0; i<n; i++) {
 b=0;
	if (gruppa[i].ocenk.alg==3)  b+=1;
	if (gruppa[i].ocenk.os==3)  b+=1;
	if (gruppa[i].ocenk.inf==3)  b+=1;
	if (gruppa[i].ocenk.eng==3)  b+=1;
	if (gruppa[i].ocenk.mat==3)  b+=1;
	if(b==1) {
			num[j]=i;
			j=j+1;
		}
	}
	return j;

}

