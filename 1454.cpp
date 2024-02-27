#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans, x, y;
	for(int i=1000;i<9999;i++){
	    ans = 0;
        x = i;
        while(x>0){
        ans = ans*10 + x%10;
        x = x/10;
        }
        if(ans == i*9)
        {printf("%d\n",ans);}
    }
	return 0;
}
