// 4. a dan b gaha bo'lan sonlarni yig'indisini topib kelish

#include <stdio.h>

int sum(int a, int b){
	if (b < a){
		return 0;
	}
	return b + sum(a,b-1);
}

int main(){
	int a,b, son;
	scanf("%d %d", &a, &b);
	son = sum(a,b);
	printf("%d\n", son);
	return 0;
}