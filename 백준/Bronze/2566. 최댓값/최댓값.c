#include <stdio.h>
#define INDEX 9

int main(){
    int max = 0, i, j;
    int maxRow = 0, maxColunm = 0;
    int matrix[INDEX][INDEX];

    for(i = 0; i < INDEX; i++)
    {
        for(j = 0; j < INDEX; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < INDEX; i++)
    {
        for(j = 0; j < INDEX; j++)
        {
            if(matrix[i][j] >= max)
            {
                max = matrix[i][j];
                maxRow = i + 1;
                maxColunm = j + 1;
            }
        }
    }
    printf("%d\n%d %d\n", max, maxRow, maxColunm);
    return 0;
}