#include <bits/stdc++.h>
using namespace std;

int main() {
	int mon, date;//日期
	int day = 0;//累计天数 
	cin >> mon >> date;
	int f[13] = {0 ,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (mon > 5) {
		day = 18;
		for (int i = mon; i > 5; i--) {
			day += f[i-1];
		}
		day += date;
	}
	else if (mon == 4) {
		day = date - 12;
	}
	else if (mon == 5) {
		day = date + 18;
	}
	int j = day % 7;
	string s[7] = {"Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday"};
	cout << s[j];
	return 0;
}
