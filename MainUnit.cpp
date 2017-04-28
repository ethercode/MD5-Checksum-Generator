//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "MD5Checksum.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmMain*   frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner):
    TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TfrmMain::mmoSourceChange(TObject* Sender)
{
    AnsiString  SrcText = mmoSource->Text;
    if (SrcText != "")
    {
        CMD5Checksum    Provider;
        int             BufferSize  = SrcText.Length();
        char*           Buffer      = new char[BufferSize];
        memcpy(Buffer, SrcText.c_str(), BufferSize);
        AnsiString  Hash    = Provider.GetMD5(Buffer, BufferSize);
        delete Buffer;
        edtHash->Text = Hash;
    }
    else
    {
        edtHash->Text = "N/A";
    }
}
//---------------------------------------------------------------------------
