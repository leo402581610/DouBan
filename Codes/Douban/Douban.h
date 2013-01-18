//file name:	Douban.h
//author:		leo
//create time:	2013-01-16 15:26:49
//last modify:	2013-01-18 09:27:09
//description:	应用程序类头文件

#pragma once

#ifndef __AFXWIN_H__
	#error 在包含用于 PCH 的此文件之前包含“stdafx.h”
#endif

#include "resource.h"		// 主符号


// CDoubanApp:
// 有关此类的实现，请参阅 Douban.cpp
//

class CDoubanApp : public CWinApp
{
public:
	CDoubanApp();

// 重写
	public:
	virtual BOOL InitInstance();

// 实现

	DECLARE_MESSAGE_MAP()
};

extern CDoubanApp theApp;
