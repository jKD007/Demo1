#include<iostream>
using namespace std;
#include<time.h>

int main()
{
	int x = 4;
	cout << "Gia tri cua x la: " << x << endl;
	cout << "Vi tri cua x la: " << &x << endl;
	return 0;
}

//Bài 1 Viết chương trình nhập mảng có n số nguyên bằng cách gieo ngẫu nhiên các số thuộc [-50,140]. Sau đó xuất mảng vừa nhập ra màn hình
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = -50 + rand() % (140 + 1 + 50);
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

int main()
{
	int a[100], n;
	cout << "Bai 1 Gieo van ngau nhien thuoc [-50, 140] va xuat mang do\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	system("pause");
	return 0;
}
*/

//Bài 2 Liệt kê các phần tử có giá trị chẵn trong mảng
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

void lietKePTChan(int a[], int n)
{
	cout << "\nCac phan tu chan co trong mang la: ";
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << "   ";
		}
	}
}

int main()
{
	int n, a[100];
	cout << "Bai 2 Liet ke cac phan tu chan trong mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	lietKePTChan(a, n);
	system("pause");
	return 0;
}
*/

//Bài 3 Viết hàm tìm và trả về giá trị lớn nhất trong mảng. Kỹ thuật đặt lính canh
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

void timMax(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			
		}
	}
	cout << "\nPhan tu lon nhat la: " << max << "\n";
}

int main()
{
	int n, a[100];
	cout << "Bai 3 Tim phan tu lon nhat trong mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	timMax(a, n);
	system("pause");
	return 0;
}
*/

//Bài 4 Viết hàm kiểm tra xem mảng có sắp thứ tự tăng dần không (Trả về 1 nếu mảng tăng dần, ngược lại trả về 0). 
//Kỹ thuật đặt cờ hiệu
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "     ";
	}
}

int kiemTraSapXep(int a[], int n)
{
	int flag = 1;
	for (int i = 0; i < n-1; i++)
	{
		if (a[i+1] < a[i])
		{
			flag = 0;
			break;
		}
	}
	return flag;
}

int main()
{
	int n, a[100];
	cout << "Bai 4 Kiem tra mang co tang dan khong\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	kiemTraSapXep(a, n);
	if (kiemTraSapXep(a, n) == 1)
	{
		cout << "\nMang co thu tu tang dan!\n";
	}
	else 
	{
		cout << "\nMang khong co thu tu tang dan!\n";
	}
	system("pause");
	return 0;
}
*/

//Bài 5 Viết hàm kiểm tra xem mảng có tồn tại số nguyên lẻ lớn hơn 100 hay không (Trả về 1 nếu mảng tăng dần, ngược lại trả về 0). 
//Kỹ thuật đặt cờ hiệu
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "   ";
	}
}

bool kiemTra(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 100 && a[i] % 2 != 0)
		{
			return 1;
			break;
		}
	}
	return 0;
}

int main()
{
	int n, a[100];
	cout << "Bai 5 Kiem tra co phan tu la so nguyen le va lon hon 100 khong\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	kiemTra(a, n);
	if (kiemTra(a, n) == 1)
	{
		cout << "\n1\n";
	}
	else
	{
		cout << "\n0\n";
	}
	system("pause");
	return 0;
}
*/

//Bài 6 Viết hàm sắp xếp theo thứ tự tăng dần

/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

void doiCho(int& c, int& d)
{
	int tam = c;
	c = d;
	d = tam;
}

void sapXepTangDan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				doiCho(a[i], a[j]);
			}
		}
	}
	cout << "\n\nMang sau khi sap xep theo thu tu tang dan la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "   ";
	}
}

int main()
{
	int n, a[100];
	cout << "Bai 6 Sap xem theo thu tu tang dan\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	//doiCho(c, d);
	sapXepTangDan(a, n);

	system("pause");
	return 0;
}
*/


//Bài 7 Viết hàm thêm phần tử x vào cuối mảng

/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

void chenX(int a[], int n)
{
	int x;
	cout << "\nNhap x: ";
	cin >> x;
	a[n] = x;
	n++;
	cout << "\n\nMang sau khi chen x la: ";
	xuatMang(a, n);
}

int main()
{
	int n, a[100];
	cout << "Bai 7 Them phan tu x vao cuoi mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	chenX(a, n);
	system("pause");
	return 0;
}
*/


//Bài 8 Viết hàm thêm x vào vị trí k
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

void chenPT(int a[], int n)
{
	int x, k;
	cout << "\nNhap phan tu x can chen: ";
	cin >> x;
	do
	{

		cout << "\nNhap vi tri can chen: ";
		cin >> k;
		if (k < 0 || k > n - 1)
		{
			cout << "\nSai cu phap! Nhap lai";
		}
	} while (k < 0 || k > n - 1);
	for (int i = n - 1; i >= k; i--)
	{
		  a[i + 1] = a[i ];
	}
	a[k] = x;
	n++;
	//xuatMang(a, n);
}

int main()
{
	int a[100], n;
	cout << "Bai 8 Chen phan tu x vao vi tri k\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	chenPT(a, n);
	cout << "\nMang sau khi chen: ";
	xuatMang(a, n+1);
	system("pause");
	return 0;
}
*/

//Bài 9 Viết hàm xóa phần tử đầu tiên của mảng
/*
void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	int x;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}

int main()
{
	int n, a[100];
	cout << "Bai 9 Xoa phan tu o cuoi mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	cout << "\nMang sau khi xoa la: ";
	xuatMang(a, n-1);
	system("pause");
	return 0;
}
*/


//Bài 10 Viết hàm xóa phần tử tại vị trí k trong mảng

/*void sinhMangNgauNhien(int a[], int n)
{
	srand((int)time(0));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand();
	}
}

void xuatMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "    ";
	}
}
void xoaPT(int a[], int n)
{
	int  k;
	do
	{
		cout << "\nNhap vi tri k: ";
		cin >> k;
	} while (k <= 0 || k > n);
	for (int i = k; i < n-1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}

int main()
{
	int n, a[100];
	cout << "Bai 10 Xoa phan tu o vi tri k trong mang\nNhap n: ";
	cin >> n;
	sinhMangNgauNhien(a, n);
	xuatMang(a, n);
	xoaPT(a, n);
	cout << "\nMang sau khi xoa la: ";
	xuatMang(a, n-1);
	system("pause");
	return 0;
}*/