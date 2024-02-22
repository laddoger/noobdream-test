#include <stdio.h>
int add(int n){
	if (n>=1){
	return n + add(n-1);
	}
	else {
		return 0;
	}
}
int main(){
	int b;
	scanf("%d",&b);
	printf("%d",add(b));
	return 0;
}
