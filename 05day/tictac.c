#include <stdio.h>
#include <stdlib.h>

void clear(){
	system("clear");
}

void front(char b[3][3], int x,int y, int oyin){
	if (oyin % 2 != 0){
		b[x-1][y-1] = 'x';
	}else{
		b[x-1][y-1] = '0';
	}
	puts("    1   2   3");
	puts("  |---|---|---|");
  printf("1 | %c | %c | %c |\n",b[0][0], b[0][1], b[0][2]);
	puts("  |---|---|---|");
  printf("2 | %c | %c | %c |\n",b[1][0], b[1][1], b[1][2]);
	puts("  |---|---|---|");
  printf("3 | %c | %c | %c |\n",b[2][0], b[2][1], b[2][2]);
	puts("  |---|---|---|");
}
int tugat(char b[3][3]){
	int sumTogriDiaganal = 0;
	int sumTeskariDiaganal = 0;
	for(int i = 0; i < 3; i++){
		int sumQator = 0;
		int sumUstun = 0;
		for(int j = 0; j < 3; j++){
			if (b[i][j] == b[i][0]  && b[i][0] != ' '){
				sumQator ++;
			}
			if (b[j][i] == b[0][i]  && b[0][i] != ' '){
				sumUstun ++;
			}
		}
		if (b[i][2-i] == b[0][2] && b[0][2] != ' '){
			sumTeskariDiaganal++;
		}
		if (b[i][i] == b[0][0]  && b[0][0] != ' '){
			sumTogriDiaganal++;
		}


		if (sumQator == 3 || sumUstun == 3){
			return 1;
		}
	}
	if (sumTogriDiaganal == 3 || sumTeskariDiaganal == 3){
			return 1;

		}else{
			return 0;
		}
}

int input(){
	char b[3][3]={
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '},
	};
	int x,y,oyin = 1;

	puts("    1   2   3");
	puts("  |---|---|---|");
  printf("1 | %c | %c | %c |\n",b[0][0], b[0][1], b[0][2]);
	puts("  |---|---|---|");
  printf("2 | %c | %c | %c |\n",b[1][0], b[1][1], b[1][2]);
	puts("  |---|---|---|");
  printf("3 | %c | %c | %c |\n",b[2][0], b[2][1], b[2][2]);
	puts("  |---|---|---|");

	while (oyin < 10){
		if (tugat(b) == 1){
			printf("O'yin tugadi %c kamanda yengdi\n", b[x-1][y-1]);
			break;
		}
		puts("\n belgi qoymoqchi bo'lgan yacheyka adresini kiriting!!!");
		scanf("%d%d", &x, &y);
		if (b[x-1][y-1] == ' '){
			clear();
			front(b, x , y,oyin);
			oyin++;
		}else {
			puts("siz yozmoqchi bo'lgan katakcha bant iltinmos boshqa katakni tanlang!!!\n"); 
		}

	}
}
int main(){
	input();
	return 0;
} 
