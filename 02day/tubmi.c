
#include <stdio.h>

int sum(int n){
	if (n == 1){
		return 0;
	}
	return n+ (int)n % sum(n-1);
}

int main(){
	int n, son;
	scanf("%d", &n);
	son = sum(n);
	printf("%d\n", son);
	return 0;
}