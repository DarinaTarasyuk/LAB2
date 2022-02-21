//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
const int Nmax=20;

struct Student {
	AnsiString fio;
	int godr;
	int godp;
	int course;
	AnsiString group;
   struct { int os,inf, mat, alg, eng; } ocenk;
};
extern int  n;
extern int  num[Nmax];
extern Student  gruppa[Nmax], s1;

void RazmernStrG(int n, TStringGrid *StrG, AnsiString st);
void inpzap(int n, Student a[], TStringGrid *StrG);
void outpz(int n, int k, double ss, Student a[], int num[], TStringGrid *Strg);
double midlocenk(int n, Student Gruppa[]);
 int kolstud(int n, Student gruppa[], double ss, int num[]);

#endif
