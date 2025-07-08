#include <stdio.h>
#define len 6

int main()
{
    int OriginalArr[len] = { 1, 1, 2, 2, 2, 8 }, Arr[len] = { 0 }, ShowArr[len] = { 0 };
    int i;
    for (i = 0; i < len; i++)
        scanf("%d", &Arr[i]);
    for (i = 0; i < len; i++)
    {
        while (OriginalArr[i] != Arr[i])
        {
            if (Arr[i] > OriginalArr[i])
            {
                Arr[i]--;
                ShowArr[i]--;
            }
            else
            {
                Arr[i]++;
                ShowArr[i]++;
            }
        }
    }
    for (i = 0; i < len; i++)
        printf("%d ", ShowArr[i]);
    return 0;
}