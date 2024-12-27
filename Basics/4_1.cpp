#include<iostream>
using namespace std;

int main()
{
	long long x,y;
	cin >> x >> y;
	long long sum = x + y;
	long long mul = x * y;
	long long dif = x - y;
	cout << x << " + " << y << " = " << sum << endl;
	cout << x << " * " << y << " = " << mul << endl;
	cout << x << " - " << y << " = " << dif << endl; 
}