#include <stdio.h>
int j = 0;
int Pow(int son, int daraja){
	if (daraja == 0){
		return j;
	}
	j += son;
	return Pow(son, daraja-1);
}

int main(){
	int son,daraja;
	scanf("%d%d", &son, &daraja);
	printf("%d\n", Pow(son,daraja));

}