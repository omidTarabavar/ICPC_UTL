#include<iostream>
#include<string>

using namespace std;

int main()
{
	long long mul = 1;
	long long a,b,c,d;
	cin >> a >> b >> c >> d;
	a %= 100;
	b %= 100;
	c %= 100;
	d %= 100;
	mul = a * b * c * d;
	int ld = mul % 10;
	mul /= 10;
	int pld = mul % 10;
	cout << pld << ld << endl;
}
