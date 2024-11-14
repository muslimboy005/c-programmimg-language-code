#include <stdio.h>

int printNun(int start, int n){
	if (start > n){
		return 0;
	}
	
	printf("%d ",  start);
	
	return printNun(start+1, n);
}

int main(){
	int n, start;
	scanf("%d", &start);
	scanf("%d", &n);
	printNun(start,n);
	puts("");
}
