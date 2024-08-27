
#include<iostream>
using namespace std;

//int main()
//{
//	int n, i, * p;
//	cout << "Nhap so luong";
//	cin >> n;
//	int* a = new int[n];
//	for (int i = 0; i < n; i++) {
//		cout << "Nhap gia tri thu " << i + 1 << endl;
//		cin >> a[i];
//	}
//
//	p = findMax(a, n);
//	cout << "Gia tri lon nhat la " << *p;
//	delete[] a;
//
//	return 0;
//}
//
//int* findMax(int data[], int n)
//{
//	int* max = data;
//	for (int i = 1; i < n; i++)
//	{
//		if (*max < *(data + i)) {
//			max = data + i;
//		}
//	}
//	return max;
//}


//int main() {
//
//
//	int* p = new int[5];
//
//	cout << "Nhap 5 so" << endl;
//
//	for (int i = 0; i < 5; i++) {
//		cout << "Nhap so thu " << i + 1<<" ";
//		cin >> *(p + i);
//	}
//	cout << "Mang ban vua nhap la " << endl;
//	for (int i = 0; i < 5; i++) {
//		
//		cout << p[i]<<" ";
//	}
//
//	return 0;
//}

/*Cho menu chương trình như sau

1. Nhập vào N số nguyên

2. Hiển thị danh sách các phần tử trong mảng

3. Tính tổng các phần tử trong mảng

4. Săp xếp các phần tử trong mảng theo thứ tự tăng dần

5. Thoát*/

int main()
{
	int n,sl;
	int* p = nullptr; // Khởi tạo con trỏ p
	int tong = 0;
	do{
		
	printf("\n1. Nhap vao N so nguyen");
	printf("\n2. Hien thi danh sach cac phan tu trong mang");
	printf("\n3. Tinh tong  cac phan tu trong mang");
	printf("\n4. Sap xep cac phan tu trong mang theo thu tu tang dan");
	printf("\n5. Thoat");

	cout << "\nNhap lua chon" << " ";
	cin >> n;
	
		switch (n)
		{
			case 1:
			{
				cout << "\nNhap so luong mang";
				cin >> sl;
				
				p = new int[sl];
				for (int i = 0; i < sl; i++) {
					cout << "\nNhap phan tu thu " << i + 1<<" ";
					cin >> p[i];
				}
				break;
			}

			case 2: 
			{
				if (p == nullptr) {
					cout << "\nMang chua duoc nhap. Vui long chon 1 de nhap mang truoc.\n";
				}
				else {
					cout << "\nMang la ";
					for (int i = 0; i < sl; i++) {

						cout << p[i] << " ";
					}
				}
				break;
			}

			case 3:
			{
				
				if (p == nullptr) {
					cout << "\nMang chua duoc nhap. Vui long chon 1 de nhap mang truoc.\n";
				}
				else {
					for (int i = 0; i < sl; i++) {
						tong += p[i];
					}
				}
				cout << "\nTong la " << tong;
				break;
			}

			case 4:
			{
				if (p == nullptr) {
					cout << "\nMang chua duoc nhap. Vui long chon 1 de nhap mang truoc.\n";
				}
				else {
					//sap xep , su dung bubble sort
					for (int i = 0; i < sl - 1; i++) {
						for (int j = i + 1; j < sl; j++) {
							if (p[i] > p[j]) {
								swap(p[i], p[j]);
							}
						}
					}
					cout << "\nMang da duoc sap xep theo thu tu tang dan.\n";
				}
				break;
			}
			case 5:
			{
				cout << "Thoat thanh cong ";
				break;
			}
			default:
			{
				cout << " Vui long nhap tu 1 den 5 ";
				break;
			}
		}
	} while (n != 5);
	
	delete[] p;

	return 0;
}