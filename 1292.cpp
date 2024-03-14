#include <bits/stdc++.h>
using namespace std;

char s[105];
int s1[105];
int main() {
	while(gets(s)){
		memset(s1, 0, sizeof(s1));
		int ls = strlen(s);
		for (int i = 0; i < ls; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z'){
				s1[s[i] - 'A']++;
			}
		}
		for(int j = 0; j < 26; j++) {
			cout << (char)('A' + j) << ':' << s1[j] << endl;
		}
	}
	return 0;
}
