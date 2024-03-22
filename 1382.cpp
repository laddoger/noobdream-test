#include <bits/stdc++.h>
using namespace std;

struct cmp {
	bool operator() (int a, int b) {
		return a > b;
	}
};

int main () {
	priority_queue<int, vector<int>, cmp> q;
	int n;
	int sum;
	while(cin >> n && n != EOF) {
		priority_queue<int, vector<int>, cmp> empty;
		swap(empty, q);
		sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		q.push(x);
	}
	while (q.size() > 1) {
		int a, b;
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		sum += a + b;
		q.push(a + b);
	}
	cout << sum << endl;
}
	return 0;
}
