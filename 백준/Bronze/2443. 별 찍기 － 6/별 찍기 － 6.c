#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int y = 0; y < N; y++)
    {
        for(int x = 0; x < y; x++)
            printf(" ");
        for(int x = 0; x < N * 2 - y * 2 - 1 ; x++)
            printf("*");
        printf("\n");
    }    
    return 0;
}