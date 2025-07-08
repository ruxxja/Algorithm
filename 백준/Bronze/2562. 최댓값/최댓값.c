#include <stdio.h>

int main() {
    int Seq[9] = {0};
    int Max = 0, num = 0, i;
    for(i = 0; i < 9; i++)
        scanf("%d",&Seq[i]);
    for(i = 0; i < 9; i++)
    {
        if(Max < Seq[i])
        {
            Max = Seq[i];
            num = i + 1;
        }
        if(i == 8)
        {
            printf("%d\n",Max);
            printf("%d",num);
            break;
        }
    }
    return 0;
}