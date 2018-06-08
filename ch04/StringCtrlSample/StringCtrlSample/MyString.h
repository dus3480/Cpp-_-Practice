#pragma once
class CMyString
{
private:
	char* m_pszData;
	int m_nLength;
public:
	CMyString();
	CMyString(const CMyString &rhs);
	~CMyString();
	int SetString(const char* pszParam);
	const char * GetString() const;
	void Release();
	CMyString& operator=(const CMyString &rhs);
};

