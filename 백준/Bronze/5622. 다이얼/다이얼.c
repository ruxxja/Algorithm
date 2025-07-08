#include <stdio.h>
#include <string.h>

int main() {
    char word[15];
    int i, length = 0, times = 0;
    scanf("%s", word);
    length = strlen(word);

    for (i = 0; i < length; i++) {
        if (word[i] == 'A' || word[i] == 'B' || word[i] == 'C')
            times += 3;
        else if (word[i] == 'D' || word[i] == 'E' || word[i] == 'F')
            times += 4;
        else if (word[i] == 'G' || word[i] == 'H' || word[i] == 'I')
            times += 5;
        else if (word[i] == 'J' || word[i] == 'K' || word[i] == 'L')
            times += 6;
        else if (word[i] == 'M' || word[i] == 'N' || word[i] == 'O')
            times += 7;
        else if (word[i] == 'P' || word[i] == 'Q' || word[i] == 'R' || word[i] == 'S')
            times += 8;
        else if (word[i] == 'T' || word[i] == 'U' || word[i] == 'V')
            times += 9;
        else if (word[i] == 'W' || word[i] == 'X' || word[i] == 'Y' || word[i] == 'Z')
            times += 10;
        else
            times += 11;
    }
    printf("%d", times);
    return 0;
}
