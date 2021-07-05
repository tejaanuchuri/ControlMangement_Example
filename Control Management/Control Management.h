
// Control Management.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CControlManagementApp:
// See Control Management.cpp for the implementation of this class
//

class CControlManagementApp : public CWinApp
{
public:
	CControlManagementApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CControlManagementApp theApp;
