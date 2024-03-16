#include <bits/stdc++.h>
using namespace std;


//降序排序 
bool comp_a (int a, int b) {
	return a > b;
}

//升序排序
bool comp_b (char a, char b) {
	return a < b;
}

int main () {
	char s[105];
	while(gets(s)) {
		int ls = strlen(s);
		sort(s, s + ls, comp_b);
		for(int i = 0; i < ls; i++) {
			cout << s[i];
		}
	}
	
	return 0;
}
