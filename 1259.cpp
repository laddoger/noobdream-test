#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[105];
    while(cin >> s){//题目要求有多组输入
        int l = strlen(s), ans = 0;
        for(int i = 2; i < l; i++){
            if(s[i] >= '0' && s[i] <= '9') ans = ans * 16 + (s[i] - '0');
            else ans = ans * 16 + s[i] - 'A' + 10;
            }
        printf("%d\n", ans);
        }
	return 0;
}
