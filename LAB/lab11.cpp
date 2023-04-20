#include<iostream>
using namespace std;

//Bài 1 Nhập / xuất mảng có n số nguyên
/*
void nhapXuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap vao phan tu a[" << i << "]  ";
		cin >> a[i];
	}
}

int main()
{
	int a[1000];
	int n;
	cout << "Bai 1 Nhap xuat mang 1 chieu\nNhap n so nguyen: ";
	cin >> n;
	cout << "Xuat mang co n so nguyen:\n\n";
	nhapXuatMang(a, n);
	system("pause");
	return 0;
}
*/

//Bài 2 Viết hàm tính tổng các phần tử trong mảng
/*
void tinhTongCacPT(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
		cout << "\n";
		s = s + a[i];
	}
	cout << "\nTong ca phan tu trong mang tren la: " << s << "\n\n";
}

int main()
{
	int a[1000];
	int n;
	cout << "Bai 2 Tinh tong cac phan tu trong mang\nNhap n: ";
	cin >> n;
	 tinhTongCacPT(a, n);
	system("pause");
	return 0;
}
*/

//Bài 3 Tính tổng các phần tử có giá trị chẵn trong mảng
/*
int tinhTongCacPT(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{

		cin >> a[i];
		cout << "\n";
		if (a[i] % 2 == 0)
		{
			s = s + a[i];
		}
	}
	return s;
}

int main()
{
	int a[1000];
	int n; 
	cout << "Bai 3 Tinh tong cac phan tu chan trong mang\nNhap n : ";
	cin >> n;
	cout << "Tong cac phan tu chan trong mang la: " << tinhTongCacPT(a, n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 4 Tính tổng các phần tử có giá trị là số nguyên tố trong mảng
/*
void nhapXuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] ";
		cin >> a[i];
	}
}

void soNguyenTo(int a[], int n)
{
	int s = 0;
	int kt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int k = 2; k < a[i]; k++)
		{
			if (a[i] % k == 0)
			{
				kt = 1;
				break;
			}
			else
			{
				kt = 0;
			}
		}
		if (kt == 0)
		{
			s += a[i];
		}
	}
	cout << "Tong cac phan tu co gia tri la nguyen to trong mang la : " << s;
}

int main()
{
	int n, a[100];
	cout << "Bai 4 Tinh tong cac so nguyen to\nNhap n : ";
	cin >> n;
	nhapXuatMang(a, n);
	//xuatMang(a, n);
	soNguyenTo(a, n);

}
*/


//Bài 5 Tính tích các phần tử trong mảng
/*
void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]  ";
		cin >> a[i];
	}
}

void tinhTich(int a[], int n)
{
	int t = 1;
	for (int i = 0; i < n; i++)
	{
		t = t * a[i];
	}
	cout << "Tich cac phan tu trong mang la: " << t << "\n";
}

int main()
{
	int n, a[1000];
	cout << "Bai 5 Tinh tich cac phan tu trong mang\nNhap n: ";
	cin >> n;
	nhapXuat(a,n);
	tinhTich( a, n);
	system("pause");
	return 0;
}
*/

//Bài 6 Tính tích các phần tử có giá trị lẻ trong mảng
/*
void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]  ";
		cin >> a[i];
	}
}

void tinhTich(int a[], int n)
{
	int t = 1;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			t = t * a[i];
		}

	}
	cout << "Tich cua cac so le trong mang la: " << t << "\n";
}

int main()
{
	int a[1000], n;
	cout << "Bai 6 Tinh tich cac so le trong mang\nNhap n: ";
	cin >> n;
	nhapXuat(a, n);
	tinhTich(a, n);
	system("pause");
	return 0;
}
*/

//Bài 7 Đếm số lượng phần tử có giá trị lẻ trong mảng
/*
void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]";
		cin >> a[i];
	}
}

void demSoLe(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			dem++;
		}
	}
	cout << "So luong so le trong mang la: " << dem << "\n";
}

int main()
{
	int a[1000], n;
	cout << "Bai 7 Dem so luong phan tu gia tri le trong mang\nNhap n: ";
	cin >> n;
	nhapXuat(a, n);
	demSoLe(a, n);
	system("pause");
	return 0;
}
*/

//Bài 8 Tính trung bình cộng các phần tử trong mảng
/*
void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]   ";
		cin >> a[i];
	}
}

void TBC(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong = tong + a[i];
	}
	float TBC = tong / n;
	cout << "Trung binh cong cua cac phan tu la: " << TBC << "\n";
}

int main()
{
	int a[1000], n;
	cout << "Bai 8 Tinh trung binh cong cac phan tu trong mang\nNhap n: ";
	cin >> n;
	nhapXuat(a,n);
	TBC(a,n);
	system("pause");
	return 0;
}
*/

//Bài 9 Tính trong bình cộng các phần từ có giá trị dương trong mảng
/*
void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]  ";
		cin >> a[i];
	}
}

void tinhTBCSoDuong(int a[], int n)
{
	int s = 0, dem = 0;
	float TBC;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			s = s + a[i];
			dem++;
		}
	}
	TBC = (float)s / (dem);
	cout << "Trung binh cong so duong trong mang la: " << TBC << "\n";
}

int main()
{
	int a[1000], n;
	cout << "Bai 9 Tinh trung binh cong cac so duong co trong mang\nNhap n : ";
	cin >> n;
	nhapXuat(a, n);
	tinhTBCSoDuong(a, n);
	system("pause");
	return 0;
}
*/

//Bài 10 Viết hàm tìm phần tử có giá trị x xuất hiện đầu tên trong mảng 
//(Nếu tìm thấy giá trị về vị trí xuất hiện x, ngược lại trả về -1)

/*#include<time.h>
void sinhMangNgauNhien(int a[], int n)
{
	srand((int) time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void nhapXuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "   ";
	}
}

void timX(int a[], int n)
{
	int x, b;
	cout << "\nNhap x muon tim trong cac phan tu: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		b = a[i] % 10;
		if (b == x)
		{
			cout << "Phan tu co gia tri " << x << " xuat hien dau tien la: a[" << i << "]\n";
			break;
		}
		a[i] = a[i] / 10;
	}
	if (b != x) cout << "-1\n";
}

int main()
{
	int a[1000], n;
	cout << "Bai 10 Tim phan tu co gia tri x xuat hien dau tien trong mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	nhapXuat(a, n);
	timX(a, n);
	system("pause");
	return 0;
}*/