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
{ /*Процедура для задания размерности таблицы с данными о студентах */
 StrG->ColCount = 11;
 StrG->RowCount = n+1;
 StrG->Cells[0][0] = st;

 for(int i=0; i<=n; i++) {
    StrG->Cells[0][i] = IntToStr(i);
	StrG->Cells[1][0] = "ФIО";
	StrG->Cells[2][0] = "Рік народження";
	StrG->Cells[3][0] = "Рік вступу";
	StrG->Cells[4][0] = "Курс";
	StrG->Cells[5][0] = "Група";
	StrG->Cells[6][0] = "Інформатика";
	StrG->Cells[7][0] = "Вища математика";
	StrG->Cells[8][0] = "Операційні системи";
	StrG->Cells[9][0] = "Алгоритми";
	StrG->Cells[10][0] = "Англійська";
 }

}
void inpzap(int n, Student a[], TStringGrid *StrG)
{ /*процедура ввода исходных записей из таблицы StrG */
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
void outpz(int n, int k, double ss, Student a[], int num[], TStringGrid *StrG)
{ /*процедура вывода записей студентов,чей балл выше среднего в группе */
 RazmernStrG(k, StrG, "Студ.>средн.");  int j;
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
double midlocenk(int n, Student Gruppa[])
{ /* Функция  для пределение среднего балла студентов в группе */
int count=0, sum=0;

 for(int i=0; i<n; i++) {
	sum = sum +gruppa[i].ocenk.alg +
		  gruppa[i].ocenk.os+ gruppa[i].ocenk.inf +
		  gruppa[i].ocenk.eng+ gruppa[i].ocenk.mat;
     count = count+5;
 }
 return  double(sum)/count;

}
int kolstud(int n, Student gruppa[], double ss, int num[])
{/* Определение количества студентов в группе чей балл выше среднего     с сохранением порядковых номеров этих студентов в массиве num */
double r;  int j=0;
 for(int i=0; i<n; i++) {
	 r = double(gruppa[i].ocenk.eng+
	   gruppa[i].ocenk.alg+ gruppa[i].ocenk.inf +
		gruppa[i].ocenk.mat+ gruppa[i].ocenk.os)/5;     if(r>ss) {        num[j]=i;
       j=j+1;
    }  }  return j;

}

