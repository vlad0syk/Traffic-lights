//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Timer1->Interval=3000;
	Timer1->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
	if (Shape2->Brush->Color == clGreen)
    {
		Shape2->Brush->Color = clGray;
		Shape3->Brush->Color = clYellow;
		Shape4->Brush->Color = clGray;
	}
	else if (Shape3->Brush->Color == clYellow)
	{
		Shape2->Brush->Color = clGray;
		Shape3->Brush->Color = clGray;
		Shape4->Brush->Color = clRed;
    }
	else if (Shape4->Brush->Color == clRed)
    {
		Shape2->Brush->Color = clGreen;
		Shape3->Brush->Color = clGray;
		Shape4->Brush->Color = clGray;
	}
	else
	{
		Shape2->Brush->Color = clGreen;
		Shape3->Brush->Color = clGray;
		Shape4->Brush->Color = clGray;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Shape2->Brush->Color = clGreen;
	Shape3->Brush->Color = clGray;
	Shape4->Brush->Color = clGray;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
//	int n = StrToInt(Edit1->Text);
//	int remainder = n % 10;
//
//	if (n <= 3)
//	{
//		Shape5->Brush->Color = clGreen;
//		Edit2->Text = "Зелений";
//	}
//	else if (n <= 4 && n >=5)
//	{
//		Shape5->Brush->Color = clYellow;
//		Edit2->Text = "Жовтий";
//	}
//	else if (n >= 6 && n <= 8)
//	{
//		Shape5->Brush->Color = clRed;
//		Edit2->Text = "Червоний";
//	}
//	else if (remainder >= 9 && remainder <= 2)
//	{
//		Shape5->Brush->Color = clGreen;
//		Edit2->Text = "Зелений";
//	}
//	else if (remainder >=3 && remainder <=4)
//	{
//		Shape5->Brush->Color = clYellow;
//		Edit2->Text = "Жовтий";
//	}
//	else if (remainder ==5 && remainder ==8)
//	{
//		Shape5->Brush->Color = clRed;
//		Edit2->Text = "Червоний";
//	}
	int n = StrToInt(Edit1->Text);
	int cycleDuration = 6;  // Тривалість одного циклу
	int remainder = n % cycleDuration;

	if (remainder < 3)
	{
		Shape5->Brush->Color = clGreen;
		Edit2->Text = "Зелений";
	}
	else if (remainder == 3)
	{
		Shape5->Brush->Color = clYellow;
		Edit2->Text = "Жовтий";
	}
	else
	{
		Shape5->Brush->Color = clRed;
		Edit2->Text = "Червоний";
	}

}
//---------------------------------------------------------------------------
