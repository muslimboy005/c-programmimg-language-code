#include <stdio.h>

int main(){
	FILE *file;
	file = fopen("m1.c", "r");

	char s[100];
	fgets(s, 100, file);
	printf("%s\n", s);
}