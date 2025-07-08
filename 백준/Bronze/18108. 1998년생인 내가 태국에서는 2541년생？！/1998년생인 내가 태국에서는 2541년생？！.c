#include <stdio.h>
int main()
{
    int bulki;
    scanf("%d",&bulki);
    if(bulki > 1000 && bulki < 3000)
    {
        printf("%d",bulki-543);
    }
    else
    {
        printf("입력할 불기 연도는 1000보다 작거나 3000보다 클 수 없습니다.");
    }
    return 0;
}