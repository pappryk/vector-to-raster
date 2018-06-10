#ifndef __NONAME_H__
#define __NONAME_H__

#include <fstream>

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/listbox.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/frame.h>
#include <wx/filedlg.h>
#include <wx/dcclient.h>


#include "Shape.h"


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
private:

protected:
	wxStaticText* ProgramName;
	wxStaticLine* m_staticline5;
	wxBitmapButton* LoadTxTButton;
	wxBitmapButton* SaveToBMPbutton;
	wxBitmapButton* SaveToTXTbutton;
	wxBitmapButton* AboutButton;
	wxStaticText* Shapes_text;
	wxListBox* ShapesListBox;
	wxStaticText* VerticesText;
	wxListBox* VerticesListBox;
	wxStaticText* X_text;
	wxTextCtrl* X_label;
	wxStaticText* Y_text;
	wxTextCtrl* Y_label;
	wxStaticText* LineText;
	wxTextCtrl* LineLabel;
	wxStaticText* pxText;
	wxStaticText* LineColorText;
	wxButton* PickColorButton;
	wxStaticText* FillColorText;
	wxButton* PickColorFillButton;
	wxStaticLine* m_staticline4;
	wxStaticText* ResolText;
	wxStaticText* WidthText;
	wxTextCtrl* WidthLabel;
	wxStaticText* HeightText;
	wxTextCtrl* HeightLabel;
	wxPanel* m_panel1;

	std::vector<Shape*> shapes;

	// Virtual event handlers, overide them in your derived class
	virtual void OpenFromTxt(wxCommandEvent& event);
	virtual void SaveToBmp(wxCommandEvent& event) { event.Skip(); }
	virtual void SaveToTxt(wxCommandEvent& event) { event.Skip(); }
	virtual void AboutOpen(wxCommandEvent& event) { event.Skip(); }
	virtual void ChooseShape(wxCommandEvent& event) { event.Skip(); }
	virtual void ChooseVertex(wxCommandEvent& event) { event.Skip(); }
	virtual void PickLineColor(wxCommandEvent& event) { event.Skip(); }
	virtual void PickFillColor(wxCommandEvent& event) { event.Skip(); }


public:

	MyFrame1(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(1109, 713), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

	~MyFrame1();

	void Paint(wxUpdateUIEvent& event);
};

#endif //__NONAME_H__
