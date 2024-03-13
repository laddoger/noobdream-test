#include <bits/stdc++.h>
using namespace std;

char s[105];
char s1[105];
int main() {
	gets(s);
	int i, j, n = 0;
	int ls = strlen(s);
	for (i = 0; i < ls; ) {
		int cnt = 1;
		s1[n++] = s[i];
		if (s[i] != s[i + 1]) {
			i++;
		}
		else{
		for (j = i + 1; j < ls; j++) {
			if(s[j] == s[i]) {
				cnt ++;
			}
		}
		s1[n++] = '0' + cnt;
		i += cnt;
		}
	}
	cout << s1 << endl;
	return 0;
}
