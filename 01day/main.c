#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void natija(char result[]){
	for (int i = strlen(result) - 1; i >= 0; i--){
		printf("%d",result[i]-48);
	}
	puts("");
}


void sum (char son1[], char son2[], int len1, int len2){
	int lanres, temp = 0;
	if (len1 > len2){
		lanres = len1;
	}else{
		lanres = len2;
	}
	char result[lanres+2];
	

	for(int i = 0; i < lanres; i++){
		if (lanres == len2){
			
			if (i < len1){
				
				result[i] = (son2[i] + son1[i] + temp-96) % 10 +48;
				
				temp = (son2[i]+son1[i]+temp-96) / 10;
				
			}
			else{
				result[i] = (son2[i]  + temp - 48) % 10 +48;
				temp = (son2[i]+temp - 48) / 10 ;
			}
		}else{
			
			if (i < len2){
				result[i] = (son2[i] + son1[i] + temp - 96) % 10 + 48 ;
				temp = (son2[i]+son1[i]+temp - 96) / 10;
			}
			else{
				result[i] = (son1[i]  + temp - 48) % 10 + 48;
				temp = (son1[i]+temp-48 ) / 10;
			}

		}
	}
	if(temp != 0){
		result[lanres] = temp+48;
	}

	natija(result);

}

void allNum(char son1[], char son2[] ){
	int l1 = (int) (strlen(son1)) , len1 = 0;
	int l2 = (int) (strlen(son2)) , len2 = 0;

	char tson1[l1];
	char tson2[l2];

	for (int i = l1-1; i >=0; i--){
		if(isdigit(son1[i])){
			tson1[len1] = son1[i];
			len1++;
		}
	}

	for (int i = l2-1; i >=0; i--){
		if(isdigit(son2[i])){
			tson2[len2] = son2[i];
			len2++;
		}
	}
	sum(tson1,tson2,len1,len2);
}

int main(){
	char son1[100];
	scanf("%s", son1);
	char son2[100];
	scanf("%s", son2);

	allNum(son1,son2);

}