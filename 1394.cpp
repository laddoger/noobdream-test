#include <bits/stdc++.h>
using namespace std;

char s[105];
//char s1[105];
int main() {
	while(gets(s)){
	//gets(s);
	int ls = strlen(s);
	int n = 0;
	for(int i = 0; i < ls; i++) {
		if(s[i] == '.' && s[i - 1] == ' ') break;
		else if(s[i] != ' ' && s[i] != '.') {
			n++;	
		}
		else if(s[i] == ' ' && s[i + 1] != ' ' || s[i] == '.') {
			cout << n << ' ';
			n=0;	
		}
	}
}
	return 0;
}
