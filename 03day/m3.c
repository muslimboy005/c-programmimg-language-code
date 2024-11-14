#include <stdio.h>

int juft(int n){
	if (n == 0){
		return 0;
	}
	if (n % 2 == 0){
		printf("%d\n", n);
	}
	return juft(n-1);
}

int main(){
	int n;
	scanf("%d", &n);
	juft(n);
}