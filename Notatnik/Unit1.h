//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Nowy1;
        TMenuItem *N1;
        TMenuItem *Otwrz1;
        TMenuItem *Zapisz1;
        TMenuItem *Zapiszjako1;
        TMenuItem *N2;
        TMenuItem *Zakocz1;
        TMenuItem *Edycja1;
        TMenuItem *WytnijCtrX1;
        TMenuItem *KopiujCtrC1;
        TMenuItem *WklejCtrV1;
        TMenuItem *Format1;
        TMenuItem *Zawijaniewierszy1;
        TMenuItem *Czcionka1;
        TMenuItem *Pomoc1;
        TMenuItem *Informacje1;
        TMenuItem *N0programie1;
        TMenuItem *Linkdostronyinternetowej1;
        TMemo *tresc;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TMenuItem *Wyczy1;
        TFontDialog *FontDialog1;
        void __fastcall Otwrz1Click(TObject *Sender);
        void __fastcall Zapiszjako1Click(TObject *Sender);
        void __fastcall Zapisz1Click(TObject *Sender);
        void __fastcall Nowy1Click(TObject *Sender);
        void __fastcall trescKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Zakocz1Click(TObject *Sender);
        void __fastcall Wyczy1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall WytnijCtrX1Click(TObject *Sender);
        void __fastcall KopiujCtrC1Click(TObject *Sender);
        void __fastcall WklejCtrV1Click(TObject *Sender);
        void __fastcall Zawijaniewierszy1Click(TObject *Sender);
        void __fastcall Czcionka1Click(TObject *Sender);
        void __fastcall N0programie1Click(TObject *Sender);
        void __fastcall Linkdostronyinternetowej1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
