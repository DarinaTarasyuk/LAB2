//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
n = StrToInt(Edit1->Text);
RazmernStrG(n, StringGrid1, "Группа");

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
inpzap(n, gruppa, StringGrid1);
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
double ss; /* средний балл успеваемости студентов группы */
 int k;     /* количество студентов, чей балл выше среднего */
 ss = midlocenk(n, gruppa);
 k = kolstud(n, gruppa, ss, num);
 outpz(n, k, ss, gruppa, num, StringGrid2);

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------


