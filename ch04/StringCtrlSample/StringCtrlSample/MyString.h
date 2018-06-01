#pragma once
class CMyString
{
private:
	char* m_pszData;
	int m_nLength;
	char** pm_pszData;
	int* pm_nLength;

public:
	CMyString();
	CMyString(const CMyString & rhs);
	~CMyString();
	int SetString(const char* pszParam);
	const char * GetString() const;
	void Release();
	CMyString& operator=(const CMyString &rhs)
	{
		m_nLength = rhs.m_nLength;
		m_pszData = rhs.m_pszData;
		return *this;
	}
};

