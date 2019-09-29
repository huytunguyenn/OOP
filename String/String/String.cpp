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
ostream& operator<<(ostream& os, String str)
{
	int i = 0;
	while (str.s[i] != NULL)
	{
		cout << str.s[i];
		i++;
	}
	return os;
}
istream &operator >> (istream &is, String &str)
{
	while (str.s[str.len])
	{
		str.len++;
	}
	return is;
}