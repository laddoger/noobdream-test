#include <bits/stdc++.h>
using namespace std;

int main () {
	stack<char> s;
	char a[105];
	cin >> a;
	int len = strlen(a);
	for (int i = 0; i < len; i++) {
		if (!s.empty()) {
			if (a[i] == ')' && s.top() == '(' || a[i] == ']' && s.top() == '[') s.pop();
			else s.push(a[i]);
		}
		else s.push(a[i]);
	}
	if (s.empty()) cout << "YES";
	else cout << "NO";
	return 0;
}
