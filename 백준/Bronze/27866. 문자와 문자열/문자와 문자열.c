#include <stdio.h>

int main() {
    char word[1000];
    int Count, Word, i;

    scanf("%s",word);
    scanf("%d",&Count);

    Word = word[Count - 1];
    printf("%c",Word);
    return 0;
}