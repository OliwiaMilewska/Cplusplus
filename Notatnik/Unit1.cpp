//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString nazwapliku="";
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
  if(OpenDialog1->Execute())
  {
    try
    {
    tresc->Lines->LoadFromFile(OpenDialog1->FileName);
    nazwapliku=OpenDialog1->FileName;
    }
    catch(...)
    {
       ShowMessage("B��d otwarcia pliku.Upewnij si�,�e plik istnieje!") ;
    }
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
  if(SaveDialog1->Execute())
  {
    try
    {
    tresc->Lines->SaveToFile(SaveDialog1->FileName);
    nazwapliku=SaveDialog1->FileName;
    }
    catch(...)
    {
       ShowMessage("B��d zaisu!") ;
    }
  }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapisz1Click(TObject *Sender)
{
  if(nazwapliku!="")
  {
    tresc->Lines->SaveToFile(nazwapliku);
  }
  else
  {
    Form1->Zapiszjako1Click(MainMenu1);
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
  if(Application->MessageBox("Czy na pewno utworzyc nowy plik?","Potwierd�",MB_YESNOCANCEL | MB_ICONQUESTION)==IDYES)
  {
   tresc->Lines->Clear();
   nazwapliku="";
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::trescKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Shift.Contains(ssCtrl))  //czy trzyma shift
    {
        if((Key=='s') || (Key='S'))
        {
        Form1->Zapisz1Click(MainMenu1);
        }
        if( (Key='n') || (Key='N'))
        {
        Form1->Nowy1Click(MainMenu1);
        }
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zakocz1Click(TObject *Sender)
{
   if(Application->MessageBox("Czy na pewno zako�czy program?","Potwierd�",MB_YESNO | MB_ICONQUESTION)==IDYES)
  {
   Application->Terminate();
  }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Wyczy1Click(TObject *Sender)
{
   if(Application->MessageBox("Czy na pewno wyczyscic plik?","Potwierd�",MB_YESNO | MB_ICONQUESTION)==IDYES)
  {
   tresc->Lines->Clear();
   }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
  if(Application->MessageBox("Czy na pewno zako�czy program?","Potwierd�",MB_YESNO | MB_ICONQUESTION)==IDNO)
  {
   Action=caNone;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WytnijCtrX1Click(TObject *Sender)
{
     tresc->CutToClipboard();   
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KopiujCtrC1Click(TObject *Sender)
{
   tresc->CopyToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WklejCtrV1Click(TObject *Sender)
{
    tresc->PasteFromClipboard();    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
     if(Zawijaniewierszy1->AutoCheck==true)
     {
       Zawijaniewierszy1->AutoCheck=false;
       tresc->WordWrap=false;
       tresc->ScrollBars=ssBoth;
     }
     else
     {
       Zawijaniewierszy1->AutoCheck=true;
       tresc->WordWrap=true;
       tresc->ScrollBars=ssVertical;
     }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
    if(FontDialog1->Execute())
    {
      //kroj
      tresc->Font->Name=FontDialog1->Font->Name;
      // kolor
      tresc->Font->Color=FontDialog1->Font->Color;
      //rozmiar
      tresc->Font->Size=FontDialog1->Font->Size;
      //styl
      tresc->Font->Style=FontDialog1->Font->Style;

}   }
//---------------------------------------------------------------------------

void __fastcall TForm1::N0programie1Click(TObject *Sender)
{
   Form2->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Linkdostronyinternetowej1Click(TObject *Sender)
{
   ShellExecute(NULL,"open","https://www.instagram.com/m_ile_wska/?hl=en",NULL,NULL,SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
