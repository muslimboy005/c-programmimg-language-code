#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'a';
    char num = '5';
    char space = ' ';
    
    // 1
    if (isalpha(ch)) {
        printf("%c harf\n", ch);
    } else {
        printf("%c harf emas\n", ch);
    }
    
    // 2
    if (isdigit(num)) {
        printf("%c raqam\n", num);
    } else {
        printf("%c raqam emas\n", num);
    }
    
    // 3
    if (isspace(space)) {
        printf("'%c' bo'shliq belgisi\n", space);
    } else {
        printf("'%c' bo'shliq belgisi emas\n", space);
    }
    
    // 4
    if (islower(ch)) {
        printf("4 %c kichik harf\n", ch);
    } else {
        printf(" %c kichik harf emas\n", ch);
    }
    
    // 5
    char upper = 'A';
    if (isupper(upper)) {
        printf(" %c katta harf\n", upper);
    } else {
        printf(" %c katta harf emas\n", upper);
    }
    
    // 6
    char upper_ch = 'Z';
    printf(" %c ni kichik harfga o'zgartirish: %c\n", upper_ch, tolower(upper_ch));

    return 0;
}
