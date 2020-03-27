//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TAPIChecker *APIChecker;
//---------------------------------------------------------------------------
__fastcall TAPIChecker::TAPIChecker(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
