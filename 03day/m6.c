#include <stdio.h>
#include <string.h>

int teskari(char soz[],int len){
	if (len < 0){
		return 0;
	}
	printf("%c", soz[len]);
	return teskari(soz,len-1);
}

int main(){
	char soz[32];
	scanf("%s", soz);
	int len =strlen(soz);
	teskari(soz, len-1);
	puts("");

}