#include <bits/stdc++.h>
using namespace std;

 
int i = 0;

queue<int> q;
//层次遍历
void lay_order(int n, int m) {
	if(m > n) return;
	else {
		i++;
		q.push(m*2);
		q.push(m*2 + 1);
		int x = q.front();
		q.pop();
		lay_order(n, x);
	}
} 

int main () {
	int n, m;
	while (cin >> n >> m) {
		lay_order(m, n);
		cout << i << endl;
	}
	return 0;
}
