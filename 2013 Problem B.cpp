#include <bits/stdc++.h>
using namespace std;

//数字及出现次数
typedef struct num {
	int num;
	int cnt;
}num;

bool comp(num a, num b) {
	return a.num < b.num;
} 

int main () {
	int n;
	cin >> n;
	int a[n];
	map<int, int> M;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		M[a[i]]++;
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++) {
		if(i == 0 ) cout << a[i] << ':' <<M[a[i]] << endl;
		if (a[i] != a[i - 1] && i > 0) cout << a[i] << ':' <<M[a[i]] << endl;
	}
	return 0;
}
