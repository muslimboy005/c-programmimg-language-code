#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

 srand(time(NULL));
 
 int len;
 printf("enter yout array len:"); scanf("%d", &len);

 int *numbers =  (int *)malloc(len * sizeof(int));
 if (numbers == NULL) {
  printf("error on allocate memory\n");
 }

 for (int i = 0; i<len ; i++ ) {
  numbers[i] = rand() % 38 - 12;
   
 }

 for (int i = 0; i<len ; i++ ) {
     if (numbers[i] % 2 == 0){
        printf("+ ");
    }else{
        printf("%d\n", numbers[i]);
    }
    
 }
}
