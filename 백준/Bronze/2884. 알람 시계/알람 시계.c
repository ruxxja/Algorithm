#include <stdio.h>
int main() {
    int H, M;
    scanf("%d %d", &H, &M);
    if (M < 45)
    {
        --H;
        if (H < 0)
            H = 23;
        if (M - 45 < 0 && M < 30)
            M += 15;
        else
            M = M + 15;
    }
    else
        M -= 45;
    printf("%d %d", H, M);
    return 0;
}