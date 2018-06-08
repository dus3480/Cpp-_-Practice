#include "stdafx.h"
#include "MyString.h"


CMyString::CMyString():
	m_pszData(NULL),
	m_nLength(0)
{
}

CMyString::CMyString(const CMyString & rhs):m_pszData(NULL),m_nLength(0)
{
	this->SetString(rhs.GetString());
}


CMyString::~CMyString()
{
	Release();
}

int CMyString::SetString(const char * pszParam)
{
	Release();
	//cout<<(m_nLength = strlen(pszParam));
	m_nLength = strlen(pszParam);

	if (pszParam != NULL && m_nLength != 0) {
		if(m_pszData == NULL) m_pszData = new char[m_nLength+1];
		strcpy_s(m_pszData,sizeof(char) * (m_nLength+1),pszParam);
	}
	return m_nLength;
}

const char * CMyString::GetString() const
{
	return m_pszData;
}

void CMyString::Release()
{
	if(m_pszData!=NULL)	delete[] m_pszData;
	m_pszData = NULL;
	m_nLength = 0;
}

CMyString & CMyString::operator=(const CMyString & rhs)
{
	// TODO: insert return statement here
	if (this != &rhs)
		this->SetString(rhs.GetString());
	return *this;
}
