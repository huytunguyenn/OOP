#ifndef _NVQUANLY_H_
#define _NVQUANLY_H_
#include "NhanVien.h"
#include "NVcongNhan.h"
#include "NVsanXuat.h"

#include <list>
class NVquanLy: public NhanVien
{
protected:
	list <NhanVien*> dsnv;
public:
	NVquanLy();
	virtual ~NVquanLy();
	void themNhanVien();
	void xuatNhanVien();
	virtual float tinhLuong();
};
#endif

