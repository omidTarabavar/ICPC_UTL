#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int year = n / 365;
	n -= year * 365;
	int month = n / 30;
	n -= month * 30;
	int day = n;
	
	cout << year << " years" << endl;
	cout << month << " months" << endl;
	cout << day << " days" << endl;
}