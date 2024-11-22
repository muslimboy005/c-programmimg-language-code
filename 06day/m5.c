#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("text2.txt", "w");

    if (file == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return 1;
    }

    int raqamlar[5];

    printf("Iltimos, 5 ta raqam kiriting:\n");
    for (int i = 0; i < 5; i++) {
        printf("Raqam %d: ", i + 1);
        scanf("%d", &raqamlar[i]);
    }

    for (int i = 0; i < 5; i++) {
        fprintf(file, "%d\n", raqamlar[i]);
    }

    // Faylni yopish
    fclose(file);

    printf("Raqamlar fayliga muvaffaqiyatli yozildi.\n");

    return 0;
}
