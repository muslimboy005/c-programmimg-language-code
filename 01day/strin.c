#include <stdio.h>
#include <string.h>

int main() {
    // 1
    char str1[20] = "Salom";
    char str2[20];
    strcpy(str2, str1);
    printf("copy varyanti: %s\n", str2);

    // 2
    char str3[20] = "Dunyo";
    strcat(str2, " ");
    strcat(str2, str3);
    printf("strcat qilingan soz: %s\n", str2);

    // 3
    printf("string uzunligi: %lu\n", strlen(str2));

    // 4
    char str4[20] = "Salom Dunyo";
    if (strcmp(str2, str4) == 0) {
        printf("So'zlar teng\n");
    } else {
        printf("So'zlar teng emas\n");
    }

    // 5
    char *pos = strchr(str2, 'D');
    if (pos != NULL) {
        printf("'D' belgisi topildi, o'rni: %ld\n", pos - str2);
    } else {
        printf("'D' belgisi topilmadi\n");
    }

   

    return 0;
}
