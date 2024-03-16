#include <bits/stdc++.h>
using namespace std;


//降序排序 
bool comp_a (int a, int b) {
	return a > b;
}

//升序排序
bool comp_b (int a, int b) {
	return a < b;
}

int main () {
	int a[105];
	int b[105], c[105];
	int m = 0, n = 0;
	while (cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6] >> a[7] >> a[8] >> a[9]){
		for (int i = 0; i < 10; i++) {
			if( a[i] % 2 == 0) b[m++] = a[i];
			else c[n++] = a[i];
		}
		sort(b, b + m, comp_b);
		sort(c, c + n, comp_a);

		for (int j = 0; j < n; j++){
			cout << c[j] << ' ';
		}
		for(int i = 0; i < m; i++) {
			cout << b[i] <<' ';
		}
	}
	return 0;
}
