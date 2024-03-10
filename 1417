#include <bits/stdc++.h>
using namespace std;

int main(){
    char a[105];
    int x;
    while(cin >> x){
        int cnt = 0;
        while(x > 0){
            a[cnt++] = x % 8 + '0';
            x /= 8;
        }
        for(int i = cnt - 1; i >= 0; i--){
            printf("%c", a[i]);
        }
        printf("\n");
    }
	return 0;
}
