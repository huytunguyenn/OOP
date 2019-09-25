#include "Header.h"

ostream& operator<<(ostream& os, DaThuc p)
{
	int mu = p.bac;
	for (int i = 0;i<=p.bac;i++)
	{
		if (i == p.bac)
			cout << p.heso[i] << "x^" << mu;
		else
			cout << p.heso[i] << "x^" <<mu<<"+";
		mu = mu - 1;
	}
	return os;
}
istream &operator >> (istream &is, DaThuc &p)
{
	cout << "Nhap bac da thuc: ";
	cin >> p.bac;
	p.heso = new float[p.bac + 1];
	for (int i = 0; i <=p.bac; i++)
	{
		cout << "Nhap he so thu "<<i+1<<": ";
		cin >> p.heso[i];
	}
	return is;
}