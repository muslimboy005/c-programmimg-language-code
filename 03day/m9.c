#include <stdio.h>

int zgacha(char belgi){
	if (belgi > 'z'){
		return 0;
	}
	printf("%c ", belgi);
	return zgacha(belgi+1);
} 

int main(){
	char belgi;
	scanf("%c", &belgi);
	zgacha(belgi);
	puts("");
}