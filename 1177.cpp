#include <bits/stdc++.h>
using namespace std;



int main () {
	int m,n;
	map<int, int> M;
	while(cin >> n >> m){
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		M[i] = x;
	}
	for(int i = 0; i < n; i++) {
		int cont = 0;
		for(int j = 0; j < n; j++) {
			if(M[j] == M[i]) cont++; 
		}
		if(cont - 1 == 0) cout << "BeiJu" << endl;
		else cout << cont - 1 << endl;
	}
}
	return 0;
}
