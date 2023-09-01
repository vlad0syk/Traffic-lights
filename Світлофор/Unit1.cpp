//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int state = 0;
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
//	if (Shape2->Brush->Color == clGreen)
//	{
//		Shape2->Brush->Color = clGreen;
//		Shape3->Brush->Color = clGray;
//		Shape4->Brush->Color = clGray;
//	}
//	else if (Shape3->Brush->Color == clYellow && Shape2->Brush->Color == clGreen)
//	{
//		Shape2->Brush->Color = clGray;
//		Shape3->Brush->Color = clGray;
//		Shape4->Brush->Color = clRed;
//	}
//	else if (Shape4->Brush->Color == clRed)
//    {
//		Shape2->Brush->Color = clGreen;
//		Shape3->Brush->Color = clGray;
//		Shape4->Brush->Color = clGray;
//	}
//	else
//	{
//		Shape2->Brush->Color = clGreen;
//		Shape3->Brush->Color = clGray;
//		Shape4->Brush->Color = clGray;
//	}
	switch (state)
	{
		case 0: Shape2->Brush->Color = clGreen;
				Shape3->Brush->Color = clGray;
				Shape4->Brush->Color = clGray;
				state = 1;
				break;
		case 1: Shape2->Brush->Color = clGray;
				Shape3->Brush->Color = clYellow;
				Shape4->Brush->Color = clGray;
				state = 2;
				break;
		case 2: Shape2->Brush->Color = clGray;
				Shape3->Brush->Color = clGray;
				Shape4->Brush->Color = clRed;
				state = 3;
				break;
		case 3: Shape2->Brush->Color = clGray;
				Shape3->Brush->Color = clYellow;
				Shape4->Brush->Color = clGray;
				state = 0;
				break;
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
	int n = StrToInt(Edit1->Text);
	int cycleDuration = 6;  // ��������� ������ �����
	int remainder = n % cycleDuration;

	if (remainder < 3)
	{
		Shape5->Brush->Color = clGreen;
		Edit2->Text = "�������";
	}
	else if (remainder == 3)
	{
		Shape5->Brush->Color = clYellow;
		Edit2->Text = "������";
	}
	else
	{
		Shape5->Brush->Color = clRed;
		Edit2->Text = "��������";
	}

}
//---------------------------------------------------------------------------
