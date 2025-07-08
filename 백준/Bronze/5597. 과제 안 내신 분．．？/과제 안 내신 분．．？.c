#include <stdio.h>
int main()
{
    int st[30] = { 0 };
    int n = 0, i = 0;
    for (i = 0; i < 28; i++)
    {
        scanf("%d", &n);
        st[n - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (st[i] != 1)
        {
            printf("%d\n", i + 1);
        }
    }
    return 0;
}