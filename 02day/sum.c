
// 1. kiritilgan N sonigacha bo'lgan sonlarni yig'indisini topish
// 5. tub sonni topuvchi topish
// 6. kiritilgan sonni raqamlarini teskari tartibidagi yangi sonni aniqlovchi dastur tuzish


#include <stdio.h>

int sum(int n){
	if (n == 0){
		return 0;
	}
	return n+ sum(n-1);
}

int main(){
	int n, son;
	scanf("%d", &n);
	son = sum(n);
	printf("%d\n", son);
	return 0;
}