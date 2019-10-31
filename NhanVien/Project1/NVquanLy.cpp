#include "NVquanLy.h"

NVquanLy::NVquanLy()
{
}
NVquanLy::~NVquanLy()
{
	dsnv.clear();
}
void NVquanLy::themNhanVien() {
	int n;
	cout << "Nhap so nhan vien muon them: ";
	cin >> n;
	NhanVien* temp;
	for (int i = 0; i < n; i++) {
		int loai;
		do {
			cout << "THEM NHAN VIEN THU " << i + 1 << endl;
			cout << "1. Nhan vien cong nhan" << endl;
			cout << "2. Nhan vien san xuat" << endl;
			cout << "Nhap loai nhan vien: ";
			cin >> loai;
		} while (!(loai == 1 || loai == 2));
		if (loai ==1) {
			temp = new NVcongNhan;
			temp->Nhap();
			dsnv.push_back(temp);
		}
		else
		{
			temp = new NVsanXuat;
			temp->Nhap();
			dsnv.push_back(temp);
		}
	}
}
float NVquanLy::tinhLuong() {
	list<NhanVien*>::iterator it;
	float tongluong = 0;
	int slnv = 0;
	for (it = dsnv.begin(); it != dsnv.end(); ++it) {
		tongluong += (*it)->tinhLuong();
		slnv++;
	}
	if (slnv == 0)
		slnv = 1;
	return 100000+ tongluong / slnv;
}
void NVquanLy::xuatNhanVien() {
	list<NhanVien*>::iterator it;
	for (it = dsnv.begin(); it != dsnv.end(); ++it) {
		cout << *it;
	}
	cout << endl;
}