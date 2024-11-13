// 2. 1 dan N sonigacha bo'lgan sonlarni ko'paytamasini ekranga chiqarish

#include <stdio.h>

int sum(int n){
	if (n == 1){
		return 1;
	}
	return n * sum(n-1);
}

int main(){
	int n, son;
	scanf("%d", &n);
	son = sum(n);
	printf("%d\n", son);
	return 0;
}