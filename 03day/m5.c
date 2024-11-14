#include <stdio.h>

int karra(int start, int n){
	if (start > 10){
		return 0;
	}
	printf("\t%d * %d = %d\n", start, n, n*start);
	return karra(start+1,n);
}

int main(){
	int n;
	scanf("%d", &n);
	karra(1, n);
}