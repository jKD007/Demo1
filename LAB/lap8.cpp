#include<iostream>
using namespace std;

//bài 1 Viết chương trình tính tổ hợp và chỉnh hợp
/*
float tinhGiaiThua(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s = s * i;
	}
	return s;
}

float tinhToHop(int n, int k)
{
	tinhGiaiThua(n);
	float c = tinhGiaiThua(n) / (tinhGiaiThua(k) * tinhGiaiThua(n - k));
	return c;
}
float tinhChinhHop(int n, int k)
{
	tinhGiaiThua(n);
	float a = tinhGiaiThua(n) / tinhGiaiThua(n - k);
	return a;
}

int main()
{
	int n, k, s;
	float c, a;
	do 
	{
	cout << "Bai 1: Tinh to hop va chinh hop\n";
	cout << "Nhap n nguyen duong: ";
	cin >> n;
	cout << "Nhap k nguyen duong: ";
	cin >> k;
	} while (n <= 0 || k <= 0 || n < k);
	cout << "To hop la: " << tinhToHop(n, k) << "\n";
	cout << "Chinh hop la: " << tinhChinhHop(n, k) << "\n";
	system("pause");
	return 0;
	
}
*/

//Bài 2 Tính diện tích và chu vi với chiều dài và chiều rộng được nhập từ bàn phím
/*
int tinhChuVi(int a, int b)
{
	int c = (a + b) * 2;
	return c;
}
int tinhDienTich(int a, int b)
{
	int s = a * b;
	return s;
}
int main()
{
	int a, b, c, s;
	cout << "Bai 2: Tinh chu vi va dien tich hinh chu nhat\n";
	do
	{
		cout << "Nhap chieu dai: ";
		cin >> a;
		cout << "Nhap chieu rong: ";
		cin >> b;
	} while (a <= 0 || b <= 0 || a < b);
	cout << "Chu vi cua hinh chu nhat la: " << tinhChuVi(a, b) << "\n";
	cout << "Dien tich cua hinh chu nhat la: " << tinhDienTich(a, b) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 3 Viết chương trình tính chu vi và diện tích hình tròn với bán kính nhập từ bàn phím
/*
double tinhChuVi(int r)
{
	return r*2*3.14 ;
}
double tinhDienTich(int r)
{
	return r*r*3.14;
}

int main()
{
	double r;
	cout << "Bai 3 Tinh chu vi va dien tich hinh tron\n";
	do
	{
		cout << "Nhap ban kinh hinh tron: ";
		cin >> r;
	} while (r <= 0);
	cout << "Chu vi hinh tron la: " << tinhChuVi(r) << "\n";
	cout << "Dien tich hinh tron la: " << tinhDienTich(r) << "\n";
	system("pause");
	return 0;
}
*/


//Bài 4 Viết chương trình gồm có hàm tính giá trị X^n với X là số thực, n là số nguyên dương
/*
#include<math.h>
float tinhSoMu(float x, int n)
{
	
	return pow(x, n);
}

int main()
{
	float x,s=1;
	int n;
	cout << "Bai 4 Tinh so mu";
	cout << "(X > 0 && n > 0)\n";
	cout << "Nhap X = ";
	cin >> x;
	cout << "Nhap n (so mu) = ";
	cin >> n;
	cout << "Ket qua la: " << tinhSoMu(x, n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 5 Viết chương trình kiểm tra số n nguyên dương có phải là số nguyên tố hay không
// Cách 1 trả về TRUE FALSE, Cách 2 trả về 1 0

//Cách 1 trả TRUE FALSE
/*
#include<math.h>
bool kiemTraSoNguyenTo(int n)
{
	if (n < 2)
	{
		return false;
	}
	int dem = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cout << "Bai 5 Kiem tra so nguyen to\nNhap n: ";
	cin >> n;
	kiemTraSoNguyenTo(n);
	cout << boolalpha;
	cout << kiemTraSoNguyenTo(n) << "\n";
	system("pause");
	return 0;
} 
*/

//Cách 2 trả 1 0
/*
#include<math.h>
bool kiemTraSoNguyenTo(int n)
{
	if (n < 2)
	{
		return 0;
	}
	int dem = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			dem++;
		}
	}
	if (dem == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int n;
	cout << "Bai 5 Kiem tra so nguyen to\nNhap n: ";
	cin >> n;
	cout << kiemTraSoNguyenTo(n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 6 Nhập số nguyên dương n. Liệt kê tất cả các số nguyên tố nhỏ hơn n
/*
#include <math.h>
int lietKeSoNguyenTo(int a)
{
	if (a < 2)
	{
		return 0;
	}
	int dem = 0;
	for (int i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	cout << "Bai 6 Liet ke cac so nguyen nho hon n\nNhap n: ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (lietKeSoNguyenTo(i))
		{
			cout << i << "\t";
		}
	}
	system("pause");
	return 0;
}
*/

//Bài 7 Viết chương trình có hàm kiểm tra số n nguyên dương có phải là số chính phương hay không ?
// Cách 1 Trả về True False
/*
#include<math.h>
bool kiemTraSoChinhPhuong(int n)
{
	int s = sqrt(n);
	if (s * s == n)
	{
		return true;
	}
	else return false;
}
int main()
{
	int n;
	cout << "Bai 7 Kiem tra n co la so chinh phuong khong\nNhap n: ";
	cin >> n;
	cout << boolalpha;
	cout << kiemTraSoChinhPhuong(n) << "\n";
	system("pause");
	return 0;
 }
 */

// Cách 2 Trả về 1 0
/*
#include<math.h>
bool kiemTraSoChinhPhuong(int n)
{
	int s = sqrt(n);
	if (s * s == n)
	{
		return 1;
	}
	else return 0;
}
int main()
{
	int n;
	cout << "Bai 7 Kiem tra n co la so chinh phuong khong\nNhap n: ";
	cin >> n;
	cout << kiemTraSoChinhPhuong(n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 8 Nhập số nguyên dương n. Liệt kê n số nguyên dương đầu tiên
/*
#include<math.h>
int lietKeSoChinhPhuong(int n)
{
	int s;
	for (int i = 1; i <= n; i++)
	{
		s = pow(i, 2);
		cout << s << "\t";
	}
	return s;
}
int main()
{
	int n, s;
	cout << "Bai 8 Liet ke n so chinh phuong dau tien\nNhap n: ";
	cin >> n;
	lietKeSoChinhPhuong(n);
	system("pause");
	return 0;
}
*/

//Bài 9 Kiểm tra n có phải là số hoàn thiện hay không
/*
bool kiemTraSoHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i <= n/2; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
	{
		return true;
	}
	return false;
}

int main()
{
	int n, s;
	cout << "Bai 9 Kiem tra n co la so hoan thien khong\n";
	do
	{
		cout << "Nhap n: ";
		cin >> n;
	} while (n <= 0);
	cout << boolalpha;
	cout << kiemTraSoHoanThien(n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 10 Nhập số nguyên n. Đếm xem có bao nhiêu số hoàn thiện nhỏ hơn n
/*
bool kiemTraSoHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
	{
		return true;
	}
	return false;
}

int demSoHoanThien(int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (kiemTraSoHoanThien(i))
		{
			dem++;
		}
	}
	return dem;
}

int main()
{
	int n;
	cout << "Bai 10 Dem so hoan thien nho hon n\nNhap n: ";
	cin >> n;
	cout << "So hoan thien nho hon " << n << " la: ";
	cout << demSoHoanThien(n) << "\n";
	system("pause");
	return 0;
}
*/