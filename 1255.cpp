#include <bits/stdc++.h>
using namespace std;

typedef struct zifu{
	char x;
	int id;
}str;

//升序排序
bool comp_b (zifu a, zifu b) {
	if(a.x >= 'A' && a.x <= 'z' && b.x >= 'A' && b.x <= 'z')	return tolower(a.x) < tolower(b.x);
	else return 0;
}

int main () {
	char s[105];
	str s1[105];
	while(gets(s)) {
		int cnt = 0;
		int ls = strlen(s);
		for(int i = 0; i < ls; i++) {
			if(s[i] >= 'A' && s[i] <= 'z') {
				s1[cnt].x = s[i];
				s1[cnt].id = cnt;
				cnt++;
			}
		}
		stable_sort(s1, s1 + cnt, comp_b);
		int j = 0;
		for(int i = 0; i < ls; i++){
			if(s[i] >= 'A' && s[i] <= 'z')
				s[i] = s1[j++].x;
		}
		
		for(int i = 0; i < ls; i++){
			cout << s[i];
		}
		}
	
	return 0;
}
