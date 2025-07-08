#include <stdio.h>
int main() {
    int a, b;
    scanf("%d\n", &a);
    scanf("%d\n\n", &b);
    printf("%d\n", a * (b % 10));
    printf("%d\n", a * (b / 10 % 10));
    printf("%d\n", a * (b / 100 % 10));
    printf("%d\n", a * b);
    return 0;
}