#include <stdio.h>
int main() {
    int i, j, n, k ,res = 0;
    int su[42] = { 0 };
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        k = n % 42;
        su[k] = 1;
    }
    for (i = 0, j = 0; i < 42; i++)
    {
        if (su[i] != 0)
            res += 1;
    }
    printf("%d", res);
    return 0;
}