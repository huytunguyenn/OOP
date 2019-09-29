#pragma once
#ifndef _STRING_H_
#define _STRING_H_
#include <iostream>
using namespace std;
#include <string>
class String
{
private:
	char *s;
	int len;
public:
	String();
	~String();
	friend ostream& operator<<(ostream& , String);
	friend istream &operator >> (istream &, String &);
};
#endif
