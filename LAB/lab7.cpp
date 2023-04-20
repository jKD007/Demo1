//bai 6: kiem tra so n co phai la so doi xung khong?
#include<iostream>
using namespace std;
/*
int main()
{
	int n, dem, a;
	int tong = 0;
	cout << "BAI 6: Kiem tra so doi xung\nNhap n: ";
	cin >> n;
	for (dem = n; n != 0; n /= 10)
	{
		a = n % 10;
		tong = tong * 10 + a;
	}
	if (tong == dem)
		cout << dem << " la so doi xung! ";
	else cout << dem << " khong la so doi xung! ";
	system("pause");
	return 0;
}
*/

//bai 7: kiem tra xem n co tang dan tu trai sang phai khong?

//bai 8: nhap vao so nguyen toi da 10 chu so, in ra so he nhi phan 
//lỗi chưa sửa
/*
int main()
{
	long n, dem, a = 0, i, b, r;
	cout << "BAI 8: Doi so thap phan thanh nhi phan\nNhap n: ";
	cin >> n;
	for (dem = n; n != 0; n = n / 2)
	{
		i = n % 2;
		a = a * 10 + i;
	}
	for (b=0; a != 0; a = a / 10)
	{
		r = a % 10;
		b = b * 10 + r;
	}
	cout << b << " la so he nhi phan cua " << dem << "\n";
	system("pause");
	return 0;
}
*/

//đã fix
/*
int main()
{
	long n, a, i = 1, s = 0, dem;
	cout << "BAI 8: Doi so thap phan thanh nhi phan\nNhap n: ";
	cin >> n;
	dem = n;
	do
	{
		a = n % 2;
		s = s + (i * a);
		n = n / 2;
		i = i * 10;
	} while (n > 0);
	cout << s << " la so nhi phan cua " << dem << "\n";
	system("pause");
	return 0;
}
*/


int main()
{
	int n;
	cin >> n;
	n = n % 10;
	cout << n;
	system("pause");
	return 0;
}