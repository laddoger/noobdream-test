#include <bits/stdc++.h>
using namespace std;
//素数集合
const int maxn = 1000000 + 5;
int prime[maxn];
void getPrime() {
	memset (prime, 0, sizeof(prime));
	for (int i = 2; i < maxn; i++) {
		if (!prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j < prime[0] && prime[j] * i < maxn; j++) {
			prime[prime[j] * i] = 1;
			if (i % prime[j] == 0) break;
		}
	}
} 

int main () {
	getPrime();
	int n;
	while (cin >> n) {
		for (int i = 1; ; i++){
			if (n == prime[i]) {
				cout << n << endl;
				break;
			}
			else if (prime[i] > n) {
				cout << prime[i] << endl;
				break;
			}
		//	cout << prime[i] << endl;
		}
	}
	return 0;
}
