
// e 74Dlg.h : header file
//

#pragma once
#include "afxwin.h"


// Ce74Dlg dialog
class Ce74Dlg : public CDialogEx
{
// Construction
public:
	Ce74Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_E74_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CEdit eCale;
	CListBox l;
	CEdit eText;
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEdit2();
};
