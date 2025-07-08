#include <stdio.h>

int main(){
    int a, b;
    double div;
    scanf("%d %d",&a , &b);
    div = (double)a/(double)b;
    printf("%.12lf",div);
    return 0;
}