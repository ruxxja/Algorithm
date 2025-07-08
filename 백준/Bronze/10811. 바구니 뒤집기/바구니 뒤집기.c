#include <stdio.h>
int main() {
    int N, M, i, j, temp, temp2, a = 0;
    int res[100];

    scanf("%d %d", &N, &M);
    while (a < 100)
    {
        res[a] = a + 1;
        a++;
    }
    for (int x = 0; x < M; x++)
    {
        scanf("%d %d", &i, &j);
        if (i + 1 == j || i == j)
        {
            temp = 0;
            temp = res[i - 1];

            res[i - 1] = res[j - 1];

            res[j - 1] = temp;
        }
        else
            for (int y = 0; y < (j-i+1) / 2; y++)
            {
                temp2 = 0;
                temp2 = res[i - 1 + y];

                res[i - 1 + y] = res[j - 1 - y];

                res[j - 1 - y] = temp2;
            }
    }
    for (int x = 0; x < N; x++)
    {
        printf("%d ", res[x]);
    }
    return 0;
}