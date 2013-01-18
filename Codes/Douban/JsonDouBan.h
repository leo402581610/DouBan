//file name:	JsonDouBan.h
//author:		leo
//create time:	2013-01-16 15:26:49
//last modify:	2013-01-18 10:42:46
//description:	�������������ص�ͼ���ѯ���

#pragma once
#include "common.h"

typedef struct tBOOK
{
	unsigned long m_ulID;		//ͼ��ID
	string m_strTitle;			//ͼ�����
	string m_strPublisher;		//ͼ�������
	string m_strAuthor;			//ͼ������
	string m_strPubdate;		//ͼ���������
	string m_strSummary;		//ͼ����
	tBOOK();
}BOOK, *PBOOK;

typedef struct tJASON_INFO
{
	int m_nCount;		//��ǰ��ȡ����
	int m_nTotal;		//������
	int m_nOffset;		//��ǰ�������������е�ƫ����
	list<BOOK> m_lsBooks;	//��ȡ��ͼ���б�
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
	// Returns:   bool	�����Ƿ�ɹ�������ַ������Ϸ����෵��ʧ��
	// Qualifier:
	// Parameter: const CString & strJson	��ѯ��Ϣ
	// Parameter: JSON_INFO & tJsonInfo		���������������Ľṹ��
	// Description:		��Json��ʽ�Ĳ�ѯ��Ϣ���������ṹ��JSON_INFO��
	//************************************
	bool Parse(const CString &strJson, JSON_INFO &tJsonInfo);

private:
	//************************************
	// Method:    GetBookInfo
	// FullName:  CJsonDouBan::GetBookInfo
	// Access:    private 
	// Returns:   bool	�����Ƿ�ɹ�������ַ������Ϸ����෵��ʧ��
	// Qualifier:
	// Parameter: const CString & strBook	���������ַ���
	// Parameter: BOOK & book	������������BOOK�ṹ��
	// Description: ��Json��ʽ���ַ���������BOOK�ṹ����
	//************************************
	bool GetBookInfo(const CString &strBook, BOOK &book);

private:
	CString m_strJson;
};
