#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
	//1
    srand(100);  
    //2
    int random_num = rand();
    printf("Tasodifiy son: %d\n", random_num);

    char str[] = "12345";
    //2
    int num = atoi(str); 
    printf("Konvertatsiya qilingan son: %d\n", num);
    //3
    int *arr = (int*)malloc(5 * sizeof(int)); 

    
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    //5
    printf("\n");
    free(arr); 

    return 0;
}
