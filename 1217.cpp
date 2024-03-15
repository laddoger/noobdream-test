#include <bits/stdc++.h>
using namespace std;

//降序排序 
bool compare_a (string a, string b) {
	return a < b;
}

int main () {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	sort(s, s + n, compare_a);
	for (int j = 0; j < n; j++) {
		cout << s[j] << endl;
	}
	return 0;
}
