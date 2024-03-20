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
	int a, b;
	while(cin >> a >> b) {
		int cnt = 0;
		for (int i = 0; i < prime[0]; i++) {
			if (prime[i] >= a && prime[i] <= b) cnt++;
			else if (prime[i] >= b && prime[i] <= a) cnt++;
		}
		cout << cnt << endl;
	}
	return 0;
}
