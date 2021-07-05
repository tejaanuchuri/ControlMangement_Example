
// Control ManagementDlg.h : header file
//

#pragma once


// CControlManagementDlg dialog
class CControlManagementDlg : public CDialogEx
{
// Construction
public:
	CControlManagementDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CONTROL_MANAGEMENT_DIALOG };
#endif

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
	afx_msg void OnEnChangeEdit1();
	CButton m_enableDisableCheck;
	CEdit m_myEditControl;
	BOOL m_enableDisableVal;
	CString m_editControlVal;
	afx_msg void OnBnClickedCheck1();
};
