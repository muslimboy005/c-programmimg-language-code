// 3. fibbonachi sonlarini soni topish

#include <stdio.h>

int fib(int n) {

    if (n <= 0){
     return n;
    }
    int n1 = 0;
    int n2 = 1;
    int n3 = 1;

    for (int i = 2; i <= n; i++) {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
    }

    return n3;
}

int main(){
    int n, son;
    scanf("%d", &n);
    son = fib(n);
    printf("%d\n", son);
    return 0;
}