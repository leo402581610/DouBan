//file name:	JsonDouBan.h
//author:		leo
//create time:	2013-01-16 15:26:49
//last modify:	2013-01-18 10:42:46
//description:	解析豆瓣网返回的图书查询结果

#pragma once
#include "common.h"

typedef struct tBOOK
{
	unsigned long m_ulID;		//图书ID
	string m_strTitle;			//图书标题
	string m_strPublisher;		//图书出版社
	string m_strAuthor;			//图书作者
	string m_strPubdate;		//图书出版日期
	string m_strSummary;		//图书简介
	tBOOK();
}BOOK, *PBOOK;

typedef struct tJASON_INFO
{
	int m_nCount;		//当前获取条数
	int m_nTotal;		//总条数
	int m_nOffset;		//当前条数在总条数中的偏移量
	list<BOOK> m_lsBooks;	//获取的图书列表
}JSON_INFO, *PJSON_INFO;

class CJsonDouBan
{
public:
	CJsonDouBan(void);
	~CJsonDouBan(void);

	//************************************
	// Method:    Parse
	// FullName:  CJsonDouBan::Parse
	// Access:    public 
	// Returns:   bool	解析是否成功，如果字符串不合法，亦返回失败
	// Qualifier:
	// Parameter: const CString & strJson	查询信息
	// Parameter: JSON_INFO & tJsonInfo		用来保存解析结果的结构体
	// Description:		将Json格式的查询信息，解析到结构体JSON_INFO中
	//************************************
	bool Parse(const CString &strJson, JSON_INFO &tJsonInfo);

private:
	//************************************
	// Method:    GetBookInfo
	// FullName:  CJsonDouBan::GetBookInfo
	// Access:    private 
	// Returns:   bool	解析是否成功，如果字符串不合法，亦返回失败
	// Qualifier:
	// Parameter: const CString & strBook	待解析的字符串
	// Parameter: BOOK & book	保存解析结果的BOOK结构体
	// Description: 将Json格式的字符串解析到BOOK结构体中
	//************************************
	bool GetBookInfo(const CString &strBook, BOOK &book);

private:
	CString m_strJson;
};
