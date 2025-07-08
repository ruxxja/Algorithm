#include<stdio.h>
#define LEN 100
int main()
{
    char word[LEN];
    while (fgets(word, LEN, stdin) != NULL)
    {
        printf("%s", word);
    }
    return 0;
}