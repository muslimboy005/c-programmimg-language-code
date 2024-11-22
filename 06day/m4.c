#include <stdio.h>

void yozFaylga(const char *ism, float ortacha) {
    FILE *fayl = fopen("text.txt", "a");
    if (fayl == NULL) {
        printf("Faylni ochishda xatolik yuz berdi.\n");
        return;
    }
    fprintf(fayl, "%s: %.2f\n", ism, ortacha);
    fclose(fayl);
}

float hisoblaOrtacha(int ballar[], int soni) {
    int jami = 0;
    for (int i = 0; i < soni; i++) {
        jami += ballar[i];
    }
    return (float)jami / soni;
}

int main() {
    char ismlar[3][20] = {"Ali", "Vali", "Sami"};
    int ballar[3][3] = {{90, 85, 88}, {75, 80, 70}, {95, 100, 92}};
    
    // Faylni bo'shatish (agar mavjud bo'lsa)
    FILE *fayl = fopen("ballar.txt", "w");
    if (fayl != NULL) fclose(fayl);

    for (int i = 0; i < 3; i++) {
        float ortacha = hisoblaOrtacha(ballar[i], 3);
        yozFaylga(ismlar[i], ortacha);
    }

    printf("Natijalar 'ballar.txt' fayliga yozildi.\n");
    return 0;
}
