//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.Bind.Components.hpp>
#include <Data.Bind.EngExt.hpp>
#include <Data.Bind.Grid.hpp>
#include <Data.Bind.ObjectScope.hpp>
#include <Fmx.Bind.DBEngExt.hpp>
#include <Fmx.Bind.Editors.hpp>
#include <Fmx.Bind.Grid.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Grid.hpp>
#include <FMX.Grid.Style.hpp>
#include <FMX.Menus.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <REST.Client.hpp>
#include <REST.Types.hpp>
#include <System.Bindings.Outputs.hpp>
#include <System.Rtti.hpp>
#include <FMX.ComboEdit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.Memo.hpp>
#include <FMX.WebBrowser.hpp>
//---------------------------------------------------------------------------
class TAPIChecker : public TForm
{
__published:	// IDE-managed Components
	TRESTClient *RESTClient1;
	TRESTRequest *RESTRequest1;
	TGrid *Grid1;
	TBindingsList *BindingsList1;
	TLinkGridToDataSource *LinkGridToDataSourceRESTRequest1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TEdit *Edit1;
	TStatusBar *StatusBar1;
	TGroupBox *Request;
	TGroupBox *Authentication;
	TGroupBox *Connection;
	TGroupBox *Parameters;
	TGroupBox *Output;
	TLabel *Label4;
	TEdit *Edit2;
	TLabel *Label5;
	TLabel *Label6;
	TComboBox *ComboBox1;
	TComboEdit *ComboEdit1;
	TListBox *ListBox1;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TLabel *Label7;
	TComboBox *ComboBox2;
	TButton *Authentication_Button;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TEdit *Edit3;
	TEdit *Edit4;
	TEdit *Edit5;
	TEdit *Edit6;
	TWebBrowser *WebBrowser1;
	TMemo *Memo1;
	TLabel *Label8;
	TButton *Button4;
private:	// User declarations
public:		// User declarations
	__fastcall TAPIChecker(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAPIChecker *APIChecker;
//---------------------------------------------------------------------------
#endif
