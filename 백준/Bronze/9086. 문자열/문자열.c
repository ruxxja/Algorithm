#include <stdio.h>
#include <string.h>
int main() {
    int test, i;
    char word[1000];
    char first, last;

    scanf("%d", &test);
    for (i = 0; i < test; i++)
    {
        scanf("%s", word);
        first = word[0];
        last = word[strlen(word) - 1];
        printf("%c%c\n", first, last);
    }
    return 0;
}
