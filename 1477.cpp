#include <bits/stdc++.h>
using namespace std;



int main () {
	int m,n;
	map<int, int> M;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		M[x]++;
	}
	cin >> m;
	for(int i = 0; i < m; i++) {
		int x;
		cin >> x;
		if(M[x] == 0){
			cout << "no" << endl;
			M[x]++;
		}
		else cout << "find" << endl;
	}
	return 0;
}
