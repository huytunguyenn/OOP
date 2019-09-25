#ifndef __HEADER_H__
#define __HEADER_H__
#include <iostream>
using namespace std;

class DaThuc {
private:
	int bac;
	float *heso;
public:
	DaThuc()
	{
		this->bac = -1; // vì bậc 0 vẫn có hệ số
		this->heso = NULL;
	}
	~DaThuc()
	{
		if (heso != NULL)
			delete[]this->heso;
	}
	friend ostream& operator<<(ostream& os, DaThuc);
	friend istream &operator>>(istream &is, DaThuc &);
};
#endif