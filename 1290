#include <bits/stdc++.h>
using namespace std;

int main() {
	int y1, y2, m1, m2, d1,d2 ;//日期 
	int x, y;
	int f[13] = {0 ,31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	while(cin >> x >> y){
		int day = 0;//累计天数
		y1 = x / 10000;
		x %= 10000;
		m1 = x / 100;
		x %= 100;
		d1 = x;
		//
		y2 = y / 10000;
		y %= 10000;
		m2 = y / 100;
		y %= 100;
		d2 = y;
		
		if (y1 == y2 && m1 == m2) {
			cout << d2 - d1 + 1;
		}
		else if (y1 == y2 && m1 != m2){
			if (y2 % 400 ==0 || y2 % 4 == 0 && y2 % 100 != 0) {
				f[2] = 29;
				while (m2 > m1 + 1) {
					day += f[m2-1];
					m2--;
				}
				day += (f[m1] - d1) + d2;
				cout << day;
			}
			else {
				while (m2 > m1 + 1) {
					day += f[m2-1];
					m2--;
				}
				day += (f[m1] - d1) + d2;
				cout << day;
			}
		}
		else if (y2 > y1) {
			while(y2 > y1 + 1) {
				if ((y2 - 1) % 400 ==0 || (y2 - 1) % 4 == 0 && (y2 - 1) % 100 != 0) {
					day += 366;
				}
				else day += 365;
				y2--;
			}
			if (y2 % 400 ==0 || y2 % 4 == 0 && y2 % 100 != 0){
				f[2] = 29;
				while(m2 > 1) {
					day += f[m2-1];
					m2--;
				}
				day += d1;
			}
			else {
				while(m2 > 1) {
					day += f[m2-1];
					m2--;
				}
				day += d1;
			}
			if (y1 % 400 ==0 || y1 % 4 == 0 && y1 % 100 != 0) {
				f[2] = 29;
				int tem = m1;
				while (m1 < 12){
					day += f[m1+1];
					m1++;
				}
				day += f[tem] - d1;
			}
			else {
				int tem = m1;
				while (m1 < 12){
					day += f[m1+1];
					m1++;
				}
				day += f[tem] - d1;
			}
			cout << day;
			}
		}
	return 0;
}
