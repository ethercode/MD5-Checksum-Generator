//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TfrmMain:public TForm
{
__published:    // IDE-managed Components
    TMemo*                  mmoSource;
    TEdit*                  edtHash;
    TLabel*                 Label1;
    void __fastcall         mmoSourceChange(TObject* Sender);
private:    // User declarations
public:     // User declarations
    __fastcall              TfrmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmMain*frmMain;
//---------------------------------------------------------------------------
#endif
