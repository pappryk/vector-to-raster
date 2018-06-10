
#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxHORIZONTAL);

	wxBoxSizer* left_panel;
	left_panel = new wxBoxSizer(wxVERTICAL);

	ProgramName = new wxStaticText(this, wxID_ANY, wxT("VectorToBMP"), wxDefaultPosition, wxDefaultSize, 0);
	ProgramName->Wrap(-1);
	//ProgramName->SetFont(wxFont(14, 74, 90, 90, false, wxT("Arial")));

	left_panel->Add(ProgramName, 0, wxALIGN_CENTER | wxALL, 5);

	m_staticline5 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	left_panel->Add(m_staticline5, 0, wxEXPAND | wxALL, 5);

	wxBoxSizer* IconSizer;
	IconSizer = new wxBoxSizer(wxHORIZONTAL);

	LoadTxTButton = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("assets/load.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxSize(32, 32), wxBU_AUTODRAW);
	IconSizer->Add(LoadTxTButton, 0, wxALL, 5);

	SaveToBMPbutton = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("assets/save.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxSize(32, 32), wxBU_AUTODRAW);
	IconSizer->Add(SaveToBMPbutton, 0, wxALL, 5);

	SaveToTXTbutton = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("assets/savetxt.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxSize(32, 32), wxBU_AUTODRAW);
	IconSizer->Add(SaveToTXTbutton, 0, wxALL, 5);

	AboutButton = new wxBitmapButton(this, wxID_ANY, wxBitmap(wxT("assets/about.bmp"), wxBITMAP_TYPE_ANY), wxDefaultPosition, wxSize(32, 32), wxBU_AUTODRAW);
	IconSizer->Add(AboutButton, 0, wxALL, 5);


	left_panel->Add(IconSizer, 0, wxALIGN_CENTER, 5);

	Shapes_text = new wxStaticText(this, wxID_ANY, wxT("Shapes"), wxDefaultPosition, wxDefaultSize, 0);
	Shapes_text->Wrap(-1);
	left_panel->Add(Shapes_text, 0, wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* ShapesSizer;
	ShapesSizer = new wxBoxSizer(wxHORIZONTAL);

	ShapesListBox = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 | wxVSCROLL);
	ShapesListBox->Append(wxT("figura1"));
	ShapesListBox->Append(wxT("prostokat"));
	ShapesListBox->Append(wxT("trojkat1"));
	ShapesListBox->Append(wxT("trojkat2"));
	ShapesListBox->Append(wxT("shape5"));
	ShapesSizer->Add(ShapesListBox, 1, wxFIXED_MINSIZE, 6);


	left_panel->Add(ShapesSizer, 1, wxALIGN_CENTER, 5);

	VerticesText = new wxStaticText(this, wxID_ANY, wxT("Vertices"), wxDefaultPosition, wxDefaultSize, 0);
	VerticesText->Wrap(-1);
	left_panel->Add(VerticesText, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	VerticesListBox = new wxListBox(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
	VerticesListBox->Append(wxT("Vertex 1"));
	VerticesListBox->Append(wxT("Vertex 2"));
	VerticesListBox->Append(wxT("Vertex 3"));
	left_panel->Add(VerticesListBox, 0, wxALIGN_CENTER | wxFIXED_MINSIZE, 5);

	wxBoxSizer* CoordsSizer;
	CoordsSizer = new wxBoxSizer(wxHORIZONTAL);

	X_text = new wxStaticText(this, wxID_ANY, wxT("X:"), wxDefaultPosition, wxDefaultSize, 0);
	X_text->Wrap(-1);
	CoordsSizer->Add(X_text, 0, wxALL, 5);

	X_label = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(24, -1), 0);
	CoordsSizer->Add(X_label, 0, wxALL, 5);

	Y_text = new wxStaticText(this, wxID_ANY, wxT("Y:"), wxDefaultPosition, wxDefaultSize, 0);
	Y_text->Wrap(-1);
	CoordsSizer->Add(Y_text, 0, wxALL, 5);

	Y_label = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(24, -1), 0);
	CoordsSizer->Add(Y_label, 0, wxALL, 5);


	left_panel->Add(CoordsSizer, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* LineSizer;
	LineSizer = new wxBoxSizer(wxHORIZONTAL);

	LineText = new wxStaticText(this, wxID_ANY, wxT("Line:"), wxDefaultPosition, wxDefaultSize, 0);
	LineText->Wrap(-1);
	LineSizer->Add(LineText, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	LineLabel = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(48, -1), 0);
	LineSizer->Add(LineLabel, 0, wxALL, 5);

	pxText = new wxStaticText(this, wxID_ANY, wxT("px"), wxDefaultPosition, wxDefaultSize, 0);
	pxText->Wrap(-1);
	LineSizer->Add(pxText, 0, wxALL, 5);


	left_panel->Add(LineSizer, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* LineColorSizer;
	LineColorSizer = new wxBoxSizer(wxHORIZONTAL);

	LineColorText = new wxStaticText(this, wxID_ANY, wxT("Line color:"), wxDefaultPosition, wxDefaultSize, 0);
	LineColorText->Wrap(-1);
	LineColorSizer->Add(LineColorText, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	PickColorButton = new wxButton(this, wxID_ANY, wxT("Pick color"), wxDefaultPosition, wxDefaultSize, 0);
	LineColorSizer->Add(PickColorButton, 0, wxALL, 5);


	left_panel->Add(LineColorSizer, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* FillColorSizer;
	FillColorSizer = new wxBoxSizer(wxHORIZONTAL);

	FillColorText = new wxStaticText(this, wxID_ANY, wxT("Fill color:"), wxDefaultPosition, wxDefaultSize, 0);
	FillColorText->Wrap(-1);
	FillColorSizer->Add(FillColorText, 0, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	PickColorFillButton = new wxButton(this, wxID_ANY, wxT("Pick color"), wxDefaultPosition, wxDefaultSize, 0);
	FillColorSizer->Add(PickColorFillButton, 0, wxALL, 5);


	left_panel->Add(FillColorSizer, 1, wxALIGN_CENTER_HORIZONTAL, 5);

	wxBoxSizer* ResolutionSizer;
	ResolutionSizer = new wxBoxSizer(wxVERTICAL);

	m_staticline4 = new wxStaticLine(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL);
	ResolutionSizer->Add(m_staticline4, 0, wxEXPAND | wxALL, 5);

	ResolText = new wxStaticText(this, wxID_ANY, wxT("bmp Resolution"), wxDefaultPosition, wxDefaultSize, 0);
	ResolText->Wrap(-1);
	ResolutionSizer->Add(ResolText, 1, wxALIGN_CENTER_HORIZONTAL | wxALL, 5);

	wxBoxSizer* ResolutionWHsizer;
	ResolutionWHsizer = new wxBoxSizer(wxHORIZONTAL);

	WidthText = new wxStaticText(this, wxID_ANY, wxT("Width:"), wxDefaultPosition, wxDefaultSize, 0);
	WidthText->Wrap(-1);
	ResolutionWHsizer->Add(WidthText, 0, wxALL, 5);

	WidthLabel = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(48, -1), 0);
	ResolutionWHsizer->Add(WidthLabel, 0, wxALL, 5);

	HeightText = new wxStaticText(this, wxID_ANY, wxT("Height:"), wxDefaultPosition, wxDefaultSize, 0);
	HeightText->Wrap(-1);
	ResolutionWHsizer->Add(HeightText, 0, wxALL, 5);

	HeightLabel = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(48, -1), 0);
	ResolutionWHsizer->Add(HeightLabel, 0, wxALL, 5);


	ResolutionSizer->Add(ResolutionWHsizer, 1, wxALIGN_CENTER_HORIZONTAL, 5);


	left_panel->Add(ResolutionSizer, 0, wxEXPAND, 5);


	bSizer1->Add(left_panel, 0, wxEXPAND, 5);

	wxBoxSizer* paper_field;
	paper_field = new wxBoxSizer(wxVERTICAL);

	m_panel1 = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	m_panel1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_BTNHIGHLIGHT));




	paper_field->Add(m_panel1, 2, wxEXPAND | wxALL, 5);


	bSizer1->Add(paper_field, 4, wxEXPAND, 5);
	

	this->SetSizer(bSizer1);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events

	m_panel1->Connect( wxEVT_UPDATE_UI, wxUpdateUIEventHandler( MyFrame1::Paint ), NULL, this );
	LoadTxTButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OpenFromTxt), NULL, this);
	SaveToBMPbutton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::SaveToBmp), NULL, this);
	SaveToTXTbutton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::SaveToTxt), NULL, this);
	AboutButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::AboutOpen), NULL, this);
	ShapesListBox->Connect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(MyFrame1::ChooseShape), NULL, this);
	VerticesListBox->Connect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(MyFrame1::ChooseVertex), NULL, this);
	PickColorButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::PickLineColor), NULL, this);
	PickColorFillButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::PickFillColor), NULL, this);
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	LoadTxTButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::OpenFromTxt), NULL, this);
	SaveToBMPbutton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::SaveToBmp), NULL, this);
	SaveToTXTbutton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::SaveToTxt), NULL, this);
	AboutButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::AboutOpen), NULL, this);
	ShapesListBox->Disconnect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(MyFrame1::ChooseShape), NULL, this);
	VerticesListBox->Disconnect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(MyFrame1::ChooseVertex), NULL, this);
	PickColorButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::PickLineColor), NULL, this);
	PickColorFillButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MyFrame1::PickFillColor), NULL, this);

	for (int i = 0; i < shapes.size(); i++)
	{
		delete shapes[i];
	}
}

void ReadFile(std::vector<Shape*> &vector, std::string path)
{
    std::ifstream file(path);    
    std::string type;
    
    while(!file.eof())
    {
        file >> type;
        int r1, g1, b1, r2, g2, b2;
        if (type == "T")
        {
            double x1, x2, x3, y1, y2, y3;
            file >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
            Triangle *triangle = new Triangle(Point(x1, y1), Point(x2, y2), Point(x3, y3), wxColour(r1, g1, b1), wxColour(r2, g2, b2));
            vector.push_back(triangle);
        }
		else if (type == "R")
        {
            double x1, x2, x3, x4, y1, y2, y3, y4;
            file >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
            Rectangle *rectangle = new Rectangle(Point(x1, y1), Point(x2, y2), Point(x3, y3), Point(x4, y4), wxColour(r1, g1, b1), wxColour(r2, g2, b2));
            vector.push_back(rectangle);
        }
		else if (type == "C")
        {
            double x, y, r;
            file >> x >> y >> r >> r1 >> g1 >> b1 >> r2 >> g2 >> b2;
            Circle *circle = new Circle(Point(x, y), r, wxColour(r1, g1, b1), wxColour(r2, g2, b2));
            vector.push_back(circle);
        }
    }

    
    

}



void MyFrame1::OpenFromTxt(wxCommandEvent& event)
{
	wxFileDialog WxOpenFileDialog(this, wxT("Choose a file"), wxT(""), wxT(""), wxT("npc file (*.npc)|*.npc"), wxFD_OPEN | wxFD_FILE_MUST_EXIST);
	if (WxOpenFileDialog.ShowModal() == wxID_OK)
	{
		ReadFile(shapes, WxOpenFileDialog.GetPath().ToStdString());
		
	}
}


void MyFrame1::Paint(wxUpdateUIEvent& event)
{
	wxClientDC dc(m_panel1);
	dc.SetBackground(wxBrush(wxColour(0, 0, 0)));
	dc.SetPen(wxPen(wxColour(150, 150, 150)));  

	

	for (int i = 0; i < 100; i++)
	{
		dc.DrawPoint(i, i);
	}
}