//file name:	common.h
//author:		leo
//create time:	2013-01-16 15:26:53
//last modify:	2013-01-18 10:42:32
//description:	һЩ���õ�ȫ�ֺ���
#pragma once

#include <string>
#include <iostream>
#include <fstream>
#include <list>

#ifdef _DEBUG
#define	WRITE_LOG	true
#else
#define WRITE_LOG	false
#endif

#define SEARCH_KEY	0x0001
#define SEARCH_TAG	0x0002
#define SEARCH_ISBN	0x0002

using std::string;
using std::fstream;
using std::ios;
using std::list;
using std::wstring;
//************************************
// Method:    ApiGetHttpData
// FullName:  ApiGetHttpData
// Access:    public 
// Returns:   BOOL
// Description:	��ȡHTTP����
// Parameter: const string & strUrl	Ҫ��ȡ��Ϣ����ҳurl��ַ
// Parameter: CString & strPageFile	���ػ�ȡ����Ϣ
//************************************
BOOL ApiGetHttpData(const string &strUrl, CString &strPageFile);


//************************************
// Method:    ApiWriteLog
// FullName:  ApiWriteLog
// Access:    public 
// Returns:   void
// Description:					д����־
// Parameter: string strLog		��־��Ϣ
// Parameter: bool bAppend		�Ƿ���׷�ӵ���ʽд����־
//************************************
void ApiWriteLog(string strLog, bool bAppend=TRUE);

//************************************
// Method:    ApiGetDetailTime
// FullName:  ApiGetDetailTime
// Access:    public 
// Returns:   CString			���ص���ϸʱ��
// Description:					��ȡ��ǰ����ϸʱ�䣬���ַ�������ʽ����
//************************************
CString ApiGetDetailTime();

//************************************
// Method:    GetJSON
// FullName:  GetJSON
// Access:    public 
// Returns:   BOOL	�Ƿ��ѯ�ɹ�
// Qualifier:	
// Parameter: CString & strPageFile	��ż���������ַ���
// Parameter: CString strKey	����������
// Parameter: int nType		��ѯ�ķ�ʽ����Ϊ���ؼ��ֺͰ���ǩ��ѯ
// Description:		�Ӷ������ϻ�ȡ��Ŀ��ѯ��Json
//************************************
BOOL GetJSON(CString &strPageFile, CString strKey, int nType=SEARCH_KEY, int nStart=0);

//************************************
// Method:    ApiSplitToArray
// FullName:  ApiSplitToArray
// Access:    public 
// Returns:   int	�ָ�Ϊ�˶��ٸ����ַ���
// Qualifier:
// Parameter: CStringArray & strArray	������Ž�����ַ�������
// Parameter: const CString & strInput	���ָ����ַ���
// Parameter: string strKey	�����ָ���ǵ��ַ���
// Parameter: BOOL bClear	ʹ��ǰ�Ƿ����������Ž��������
// Parameter: int iNum	�ִ�����С����
// Description:		��CString��ĳ���ַ����ָ�Ϊ����ִ�������������ַ���������
//************************************
int ApiSplitToArray(CStringArray &strArray, const CString &strInput, string strKey, BOOL bClear, int iNum);

//************************************
// Method:    Replace
// FullName:  Replace
// Access:    public 
// Returns:   int					�滻����
// Qualifier:
// Parameter: string & strValue		Ҫ���������ַ���
// Parameter: const string & strCur	Ҫ���滻���ִ�
// Parameter: const string & strNew	�����滻���ַ���
//************************************
int Replace(string &strValue, const string strCur, const string strNew);