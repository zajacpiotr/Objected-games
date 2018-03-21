//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *b;
        TTimer *Timer_pilka;
        TImage *p1;
        TTimer *Lewo;
        TTimer *Prawo;
        TImage *p2;
        TTimer *Lewo2;
        TTimer *Prawo2;
        TTimer *komputer;
        TButton *Button1;
        TButton *Button2;
        TLabel *Label1;
        TButton *Button3;
        TButton *Button4;
        TImage *Menu;
        TLabel *Label2;
        TLabel *Label3;
        TButton *Button5;
        TLabel *Label4;
        void __fastcall Timer_pilkaTimer(TObject *Sender);
        void __fastcall LewoTimer(TObject *Sender);
        void __fastcall PrawoTimer(TObject *Sender);
        void __fastcall Lewo2Timer(TObject *Sender);
        void __fastcall Prawo2Timer(TObject *Sender);
        void __fastcall komputerTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall Button4Click(TObject *Sender);
        void __fastcall Button5Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
