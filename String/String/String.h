#pragma once
#ifndef _STRING_H_
#define _STRING_H_
#include <iostream>
using namespace std;
#include <vector>

class String
{
private:
	char *s;
	int len;
public:
	String();
	~String();
	String(String&);
	String(char*);
	String& operator=(const String&);
	char& operator[](int);
	friend istream& operator >> (istream&, String&);
	friend ostream& operator << (ostream&, String&);
	const char* c_str() const
	{
		return s;
	}
};
#endif
