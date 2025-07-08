#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int arr[100] = { 0 };
    int length = 0;
    int i, j;

    scanf("%s",word);
    length = strlen(word);
    
    for(i = 0; i < 26; i++)
    {
        for(j = 0; j < length; j++)
        {
            if(i + 97 == word[j]){
                arr[i] = j;
                break;
            }
            else
                arr[i] = -1;
        }
    }
    for(i = 0; i < 26; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}