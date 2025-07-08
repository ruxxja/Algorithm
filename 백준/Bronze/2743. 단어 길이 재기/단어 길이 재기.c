#include <stdio.h>
#include <string.h>
int main() {
    char word[100];
    int res = 0;
    scanf("%s",word);
    res = strlen(word);
    printf("%d",res);
    return 0;
}