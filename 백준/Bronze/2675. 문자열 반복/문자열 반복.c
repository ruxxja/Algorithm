#include <stdio.h>
#include <string.h>

int main() {
    int Test, i, j, k;
    int re, length;
    char reword[20];
    
    scanf("%d",&Test);
    for(i = 0; i < Test; i++)
    {
        scanf("%d %s",&re, reword);
        length = strlen(reword);
        for(j = 0; j < length; j++)
        {            
            for(k = 0; k < re; k++)
            {
                printf("%c",reword[j]);
            }
        }
        printf("\n");
    }
    return 0;
}