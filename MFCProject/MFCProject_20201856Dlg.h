
// MFCProject_20201856Dlg.h: 헤더 파일
//

#pragma once


// CMFCProject20201856Dlg 대화 상자
class CMFCProject20201856Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCProject20201856Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCPROJECT_20201856_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CMonthCalCtrl m_my_calendar;
	afx_msg void OnMcnSelchangeMyCalendar(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnEnChangeEdit1();
	afx_msg void OnEnChangeNoteEdit();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedSetButton();
};
