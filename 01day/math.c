#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    double y = 2.0;
    double z = -5.0;

    // 1
    printf("sqrt: %.2f ning kvadrat ildizi: %.2f\n", x, sqrt(x));

    // 2
    printf("pow: %.2f ning %.2f-darajasi: %.2f\n", x, y, pow(x, y));

    // 3
    printf("fabs: %.2f ning absolyut qiymati: %.2f\n", z, fabs(z));

    // 4
    double a = 3.4;
    printf("ceil: %.2f ni yuqoriga yaxlitlash: %.2f\n", a, ceil(a));

    // 5
    double b = 3.9;
    printf("floor: %.2f ni pastga yaxlitlash: %.2f\n", b, floor(b));

    // 6. 
    printf("fmod: %.2f ni %.2f ga bo'lishdagi qoldiq: %.2f\n", x, y, fmod(x, y));

    return 0;
}
