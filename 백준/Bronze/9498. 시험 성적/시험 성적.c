#include <stdio.h>
int main(){
    int jum;
    scanf("%d",&jum);
    if(jum >= 90)
        printf("A");
    else if(jum >= 80)
        printf("B");
    else if(jum >= 70)
        printf("C");
    else if(jum >= 60)
        printf("D");
    else
        printf("F");
    return 0;
}