#include <bits/stdc++.h>
using namespace std;



int main () {
	int m,n;
	map<int, int> M;
	while(cin >> n){
		int a[n];
		for(int i = 0; i < n; i++){
			int x;
			cin >> x;
			a[i] = x;
			M[x] = 1;
		}
		cin >> m;
		int b[m];
		for(int i = 0; i < m; i++) {
			cin >> b[i];
		}
		for(int i = 0; i < m; i++) {
			if(M[b[i]] == 1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
}
	return 0;
}
