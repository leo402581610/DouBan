//file name:	Douban.h
//author:		leo
//create time:	2013-01-16 15:26:49
//last modify:	2013-01-18 09:27:09
//description:	Ӧ�ó�����ͷ�ļ�

#pragma once

#ifndef __AFXWIN_H__
	#error �ڰ������� PCH �Ĵ��ļ�֮ǰ������stdafx.h��
#endif

#include "resource.h"		// ������


// CDoubanApp:
// �йش����ʵ�֣������ Douban.cpp
//

class CDoubanApp : public CWinApp
{
public:
	CDoubanApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CDoubanApp theApp;
