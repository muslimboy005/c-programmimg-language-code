#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include <stdio.h>
#include <stdlib.h>

int main() {
    srand(100);  
    int random_num = rand();
    printf("Tasodifiy son: %d\n", random_num);

    char str[] = "12345";
    int num = atoi(str); 
    printf("Konvertatsiya qilingan son: %d\n", num);

    int *arr = (int*)malloc(0 * sizeof(int)); 
    if (arr == NULL) {
        printf("Xotira ajratishda xatolik yuz berdi.\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);  // Ajratilgan xotirani bo'shatish

    return 0;
}
