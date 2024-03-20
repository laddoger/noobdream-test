#include <bits/stdc++.h>
using namespace std;

//素数判定
const int maxn = 1000000 + 5;
int prime[maxn];
void getPrime() {
	memset(prime, 0, sizeof(prime));
	for (int i = 2; i <= maxn; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && prime[j] * i <= maxn; j++) {
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
} 

int main () {
	getPrime();
	int n;
	while(cin >> n) {
		int cnt = 0;
		for (int i = 1; i <= prime[0]; i++) {
			if (prime[i] <= n && prime[i] % 10 == 1) {
				cout << prime[i];
				cout << ' ';
				cnt++;
			}
		}
		if (cnt == 0) cout << -1; 
	}
	return 0;
}
