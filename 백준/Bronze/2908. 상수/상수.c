#include <stdio.h>
#include <stdlib.h>

int main() {
    char arr1[10], arr2[10];
    int i, res1, res2, temp1 = 0, temp2 = 0;

    scanf("%s %s",arr1, arr2);

    temp1 = arr1[0];
    arr1[0] = arr1[2];
    arr1[2] = temp1;
    
    temp2 = arr2[0];
    arr2[0] = arr2[2];
    arr2[2] = temp2;

    res1 = atoi(arr1);
    res2 = atoi(arr2);

    if(res1 > res2)
        printf("%d",res1);
    else
        printf("%d",res2);
    return 0;
}