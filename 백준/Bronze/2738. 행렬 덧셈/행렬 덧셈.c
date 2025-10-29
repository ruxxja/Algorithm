#include <stdio.h>

int main(){

    int a, b, i, j;
    scanf("%d %d", &a, &b);

    int matrixA[a][b];
    int matrixB[a][b];

    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            printf("%d ", matrixA[i][j] + matrixB[i][j]);
        }
        printf("\n");
    }
    return 0;
}