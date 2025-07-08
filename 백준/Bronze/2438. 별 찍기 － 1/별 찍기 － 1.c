#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int y = 0; y < N; ++y)
    {
        for(int x = 0; x < y + 1; ++x)
        {
          printf("*");
        }
       printf("\n");
    }
    return 0;
}