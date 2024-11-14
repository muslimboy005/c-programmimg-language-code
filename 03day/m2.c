#include <stdio.h>

int toq(int start, int n){
	if (start > n){
		return 0;
	}
	if (start % 2 != 0){
		printf("%d\n",  start);
	}
	return toq(start+1, n);
}

int main(){
	int n;
	scanf("%d", &n);
	toq(0,n);
}
