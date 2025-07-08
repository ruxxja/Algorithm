#include <stdio.h>
int main() {
    int NowHour, NowMin, CookTime;
    scanf("%d %d", &NowHour, &NowMin);
    scanf("%d", &CookTime);
    NowMin += CookTime;
    
    while (1)
    {
        NowHour = NowMin > 59 ? ++NowHour : NowHour;
        NowMin = NowMin > 59 ? NowMin - 60 : NowMin;
        NowHour = NowHour > 23 ? NowHour % 24 : NowHour;
        if (NowMin < 60)
            break;
    }
    printf("%d %d", NowHour, NowMin);
    return 0;
}