#include<iostream>
using namespace std;

//Bài 1 Tìm ước số chung lớn nhất của a và b
/*
int timUCLN(int a, int b)
{
	if (a >= b)
	{
		if (a > b)
		{
			do
			{
				a = a - b;
			} while (a != b);
			return a;
		}
		else return b;
	}
	else
	{
		do
		{
			b = b - a;
		} while (b != a);
		return b;
	}
	
}

int main()
{
	int a, b;
	cout << "Bai 1 Tim uoc chung lon nhat cua a va b\n";
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Uoc chung lon nhat la: " << timUCLN(a, b) << "\n";
	system("pause");
	return 0;
}
*/


//Bài 2 Tìm bội số chung nhỏ nhất của a và b
/*
int timUCLN(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	}
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		}
		else 
		{
			b = b - a;
		}
	}
	return a;
}

int main()
{
	int a, b;
	cout << "Bai 2 Tim boi chung nho nhat cua a va b\n";
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	int bcnn = a * b / timUCLN(a, b);
	cout << "Boi chung nho nhat la: " << bcnn << "\n";
	system("pause");
	return 0;
}
*/


//Bài 4 Viết chương trình nhập số nguyên dương n gồm k chữ số (0< k <=5), đếm xem n có bao nhiêu chữ số
/*
int demSo(int n)
{
	int k = 0;
	int i;
	do
	{
		i = n % 10;
		n = n / 10;
		if (i > 0)
		{
			k++;
		}
	} while (n > 0);
	return k;
}

int main()
{
	int n;
	cout << "Bai 2 Dem chu so co trong n\nNhap n: ";
	cin >> n;
	demSo(n);
	if (demSo(n) <= 5)
	{
		cout << "Co " << demSo(n) << " chu so!" << "\n";
	}
	else if (demSo(n) > 5)
	{
		cout << "Sai cu phap!" << "\n";
	}
	system("pause");
	return 0;
}
*/

//Bài 5 Viết chương trình nhập số nguyên dương n gồm k chữ số (0 < k <= 5). Tính tổng các chữ số của n
/*
void tinhTongCacSo(int n)
{
	int k = 0, s = 0;
	int i;
		for (; n != 0;)
		{
			i = n % 10;
			s = s + i;
			n = n / 10;
			if (i > 0)
			{
				k++;
			}
		}
	if (k > 5)
	{
		cout << "Sai cu phap!\n";
	}
	else
	{
		cout << "Tong cac chu so la: " << s << "\n";
	}
}

int main()
{
	int n, s, k ;
	cout << "Bai 3 Tinh tong cac chu so co trong n\nNhap n: ";
	cin >> n;
	tinhTongCacSo( n);
	system("pause");
	return 0;
}
*/


// Bài 6 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5) đếm xem n có bao nhiêu chữ số chẵn và lẻ
/*
void demChanLe(int n)
{
	int chan = 0, le = 0, k = 0;
	int i;
	for (; n != 0;)
	{
		i = n % 10;
		n = n / 10;
		if (i > 0)
		{
			k++;
			if (i % 2 == 0)
			{
				chan++;
			}
			else
			{
				le++;
			}
		}
		

	}
	if (k <= 5) 
	{
		cout << "Co " << chan << " so chan va " << le << " so le!\n";
	}
	else 
	{
		cout << "Sai cu phap!\n";
	}
}

int main()
{
	int n;
	cout << "Bai 6 Dem so chan le\nNhap n: ";
	cin >> n;
	demChanLe(n);
	system("pause");
	return 0;
}
*/

//Bài 7 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5) đếm xem n có bao nhiêu chữ số là số nguyên tố
/*
#include<math.h>
void demSoNguyenTo(int n)
{
	int dem = 0, i, a = 0, k = 0;
	for (; n != 0;)
	{
		i = n % 10;
		n = n / 10;
		if (i > 0)
		{
			k++;

			if (i >= 2)
			{
				for (int j = 2; j <= sqrt(i); j++)
				{
					if (i % j == 0)
					{
						dem++;
					}
				}
				if (dem == 0)
				{
					a++;
				} 
			}
		}
	}
	if (k <= 5)
	{
		cout << a;
	}
	else 
	{
		cout << "Sai cu phap!\n";
	}
}

int main()
{
	int n;
	cout << "Bai 7 Dem so nguyen to trong n\nNhap n: ";
	cin >> n;
	demSoNguyenTo(n);
	//cout << "So chu so la so nguyen to la: " << demSoNguyenTo(n) << "\n";
	system("pause");
	return 0;
}
*/


//Bài 8 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5). Tính tổng các ước số dương của n
//VD n = 6. 1+2+3+6=12
/*
int tinhTongCacUoc(int n)
{
	int s = 0, m = 0;
	for (int i = 1; i <= n; i++)
	{
		s = n % i;
		if (s == 0)
		{
			m = m + i;
		}
	}
	return m;
}

int main()
{
	int n;
	cout << "Bai 8 Tinh tong cac uoc cua n\nNhap n: ";
	cin >> n;
	tinhTongCacUoc(n);
	cout << "Tong cac uoc cua n la: " << tinhTongCacUoc(n) << "\n";
	system("pause");
	return 0;
}
*/


//Bài 9 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5), Tìm ước số lẻ lớn nhất của n
//VD n=27 Ước số lẻ lớn nhất là 9
/*
int timUoc(int n)
{
	int s = 0, m = 0, max = 0;
	for (int i = 1; i < n; i++)
	{
		s = n % i;
		if (s == 0 && i % 2 != 0)
		{
			max = i;
		}
	}

	return max;
}

int main()
{
	int n;
	cout << "Bai 9 Uoc so le lon nhat cua n\nNhap n: ";
	cin >> n;
	timUoc(n);
	cout << "Uoc so le lon nhat cua n la: " << timUoc(n) << "\n";
	system("pause");
	return 0;
}
*/

//Bài 10 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5). Kiểm tra các số của n có toàn lẻ hay toàn chẵn không
/*
void kiemTraChanLe(int n)
{
	int s;
	int chan = 0, le = 0, k = 0;
	for (; n != 0;)
	{
		s = n % 10;
		n = n / 10;
		if (s > 0)
		{
			k++;
			if (s % 2 == 0)
			{
				chan++;
			}
			else
			{
				le++;
			}
		}
		
	}
	if (k == chan)
	{
		cout << "Cac chu so cua n toan chan !\n";
	}
	else if (k == le)
	{
		cout << "Cac chu so cua n toan le !\n";
	}
	else 
	{
		cout << "Cac chu so cua n khong toan chan hay toan le !\n";
	}
}

int main()
{
	int n;
	cout << "Bai 10 Kiem tra n co toan chan hay toan le\nNhap n: ";
	cin >> n;
	kiemTraChanLe(n);
	system("pause");
	return 0;
}
*/

// Bài 11 Viết chương trình nhập số nguyên dương n gồm k chữ số ( 0 < k <= 5). Tính trung bình cộng của các chữ số của n
/*
void tinhTBC(int n)
{
	float s = 0, i, k = 0;
	for (; n > 0;)
	{
		i = n % 10;
		n = n / 10;
		s = s + i;
		if (i > 0)
		{
			k++;
		}
	}
	if (k <= 5)
	{
		cout << "Trung binh cong cac chu so cua n la: " << s / k << "\n";
	}
	else
	{
		cout << "Sai cu phap!\n" ;
	}
}

int main()
{
	int n;
	cout << "Bai 11 Tinh trung binh cong cac chu so cua n\nNhap n: ";
	cin >> n;
	tinhTBC(n);
	system("pause");
	return 0;
}
*/