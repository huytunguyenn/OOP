#ifndef _NVCONGNHAN_H_
#define _NVCONGNHAN_H_
#include "NhanVien.h"
class NVcongNhan: public NhanVien
{
protected:
	int SOngay;
public:
	NVcongNhan();
	virtual ~NVcongNhan();
	friend ostream& operator<<(ostream&, NVcongNhan);
	friend istream& operator>>(istream&, NVcongNhan&);
	virtual float tinhLuong();
};
#endif

