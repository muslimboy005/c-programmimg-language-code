#include <stdio.h>

int xona(int sum, int son){
	if (son == 0){
		return sum;
	}
	return xona(sum + (son % 10),son/10);

}

int main(){
	int son, l;
	scanf("%d", &son);
	l = xona(0,son);
	printf("%d\n", l);

}