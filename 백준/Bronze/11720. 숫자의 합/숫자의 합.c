#include <stdio.h>

int main() {
    int Count, res = 0, i;
    char arr[100];
    
     scanf("%d",&Count);
    for(i = 0; i < Count; i++)
         scanf(" %c",&arr[i]);
    
    for(i = 0; i < Count; i++)
    {
       // printf("%d ",arr[i] - 48);
        res += arr[i] - 48;
    }
    printf("%d",res);
    return 0;
}