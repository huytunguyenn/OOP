#include "String.h"

String::String()
{
	s = NULL;
	len = 0;
}
String::~String()
{
	delete[]this->s;
}
String::String(String &s1)
{
	for (int i = 0; i <= s1.len; i++)
	{
		s[i] = s1.s[i];
	}
}
String::String(char*x)
{
	int length = strlen(x);
	s = new char[length+1];
	for (int i = 0; i < length; i++)
	{
		s[i] = x[i];
	}
	s[length] = '\0';
}
String& String::operator=(const String& x)
{
	if (this != &x)
	{
		if (s != NULL)
			delete s;
		int length = x.len;
		s = new char[len + 1];
		for (int i = 0; i <= len; i++)
		{
			s[i] = x.s[i];
		}
	}
	return *this;
}
char& String::operator[](int i)
{
	if (this->len > i)
		return s[i];
	else
		return s[len-1];
}
// https://stackoverflow.com/questions/31732990/c-overloading-operator-for-my-string-class#_=_
istream& operator >> (istream& is, String &x)
{
	istream::sentry sentry(is);
	if (!sentry)
		return is;

	vector<char> temp;
	int next;

	while ((next = is.get()) != is.eof() && !isspace(next))
		temp.push_back(next);
	temp.push_back('\0');
	x = &temp[0];
	return is;
}
ostream& operator << (ostream& os, String &x)
{
	return os << x.c_str();
}