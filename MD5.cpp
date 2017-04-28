//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
USERES("MD5.res");
USEFORM("MainUnit.cpp", frmMain);
USEUNIT("MD5Checksum.cpp");
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    try
    {
        Application->Initialize();
        Application->CreateForm(__classid(TfrmMain), &frmMain);
        Application->Run();
    }
    catch (Exception& exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
