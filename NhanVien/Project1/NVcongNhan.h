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
	virtual void Nhap();
	virtual void Xuat();
	virtual float tinhLuong();
};
#endif

