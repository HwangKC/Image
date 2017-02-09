#pragma once
#include "wx/wx.h"
#include <wx/dialog.h>
#include <wx/statline.h>
#include <wx/statline.h>
#include "wx/artprov.h"
#include "wx/spinctrl.h"
#include <math.h>
#include <algorithm>

class ProcessDialog : public wxDialog
{
	
	enum
	{
		ID_OKBTN,
		ID_NOBTN,
		ID_IMAGE,
		ID_HIDEBUTTON,
		ID_RELOAD,
		ID_THUMBNAIL,
		ID_SAVE,
		ID_AUTOWB,
		ID_CAMWB,
		ID_CUSTOMWB,
		ID_SLIDER1,
		ID_SLIDER2,
		ID_SLIDER3,
		ID_CUSTOMWB1,
		ID_CUSTOMWB2,
		ID_CUSTOMWB3,
		ID_ABER,
		ID_ABER1,
		ID_ABER2,
		ID_BLACK,
		ID_BLACK1,
		ID_SATURATION,
		ID_SATURATION1,
		ID_NOISE,
		ID_NOISE1,
		ID_HIGHLIGHT,
		ID_HIGHLIGHT1,
		ID_FLIP,
		ID_FLIP1,
		ID_NOTBRIGHT,
		ID_BRIGHT,
		ID_BRIGHT1,
		ID_HALF,
		ID_GAMMA,
		ID_GAMMA1,
		ID_GAMMA2,
		ID_CONTRAST,
		ID_CONTRAST1,
		ID_CONTRAST2,
		ID_SAT,
		ID_SAT1,
		ID_SAT2,
		ID_RED,
		ID_RED1,
		ID_RED2,
		ID_GREEN,
		ID_GREEN1,
		ID_GREEN2,
		ID_BLUE,
		ID_BLUE1,
		ID_BLUE2,
		ID_PIXEL,
		ID_PIXEL1,
		ID_MEDIAN,
		ID_MEDIAN1,
		ID_MASK,
		ID_GAUSS,
		ID_GAUSS1,
		ID_TIFF,
		ID_THUMB,
	};

public:
	ProcessDialog(wxWindow *parent);
	
	wxCheckBox* m_checkBox1;
	wxCheckBox* m_checkBox2;
	wxCheckBox* m_checkBox3;

	wxSpinCtrlDouble* spinctrldbl1;
	wxSpinCtrlDouble* spinctrldbl2;
	wxSpinCtrlDouble* spinctrldbl3;

	wxCheckBox* m_checkBox4;
	wxSpinCtrlDouble* spinctrldbl4;
	wxSpinCtrlDouble* spinctrldbl5;

	wxCheckBox* m_checkBox5;
	wxSpinCtrl* spinctrl1;

	wxCheckBox* m_checkBox6;
	wxSpinCtrl* spinctrl2;

	wxCheckBox* m_checkBox7;
	wxSpinCtrl* spinctrl3;

	wxCheckBox* m_checkBox8;
	wxSpinCtrl* spinctrl4;

	wxCheckBox* m_checkBox9;
	wxSpinCtrl* spinctrl5;

	wxCheckBox* m_checkBox10;

	wxCheckBox* m_checkBox11;
	wxSpinCtrlDouble* spinctrldbl6;

	wxCheckBox* m_checkBox13;

	wxCheckBox* m_checkBox14;
	wxSpinCtrlDouble* spinctrldbl7;
	wxSpinCtrlDouble* spinctrldbl8;

	wxCheckBox* m_checkBox15;
	wxSpinCtrlDouble* spinctrldbl9;
	wxSpinCtrlDouble* spinctrldbl10;

	wxCheckBox* m_checkBox16;
	wxSpinCtrlDouble* spinctrldbl11;
	wxSpinCtrlDouble* spinctrldbl12;

	wxCheckBox* m_checkBox17;
	wxSpinCtrlDouble* spinctrldbl13;
	wxSpinCtrlDouble* spinctrldbl14;

	wxCheckBox* m_checkBox18;
	wxSpinCtrlDouble* spinctrldbl15;
	wxSpinCtrlDouble* spinctrldbl16;

	wxCheckBox* m_checkBox19;
	wxSpinCtrlDouble* spinctrldbl17;
	wxSpinCtrlDouble* spinctrldbl18;

	wxCheckBox* m_checkBox20;
	wxSpinCtrlDouble* spinctrldbl19;

	wxCheckBox* m_checkBox21;
	wxSpinCtrlDouble* spinctrldbl20;
	wxCheckBox* m_checkBox22;

	wxCheckBox* m_checkBox23;
	wxCheckBox* m_checkBox24;

	wxScrolledWindow* m_panel2;
	wxScrolledWindow* m_panel3;
	wxButton* m_OK;
	wxButton* m_Cancel;
	
	wxBoxSizer* bSizer3;

	DECLARE_EVENT_TABLE()

	void OnThumb(wxCommandEvent& event);
	void OnNoise(wxCommandEvent& event);
	void OnBright(wxCommandEvent& event);
	void OnGamma(wxCommandEvent& event);
	void OnContrast(wxCommandEvent& event);
	void OnSat(wxCommandEvent& event);
	void OnPixel(wxCommandEvent& event);
	void OnMedian(wxCommandEvent& event);
};