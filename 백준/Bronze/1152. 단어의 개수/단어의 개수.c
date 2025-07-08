#include <stdio.h>
#include <string.h>

int main() {
	char sentence[1000000];
	int length = 0, result = 0, i;

	while (scanf("%s", sentence) != EOF)
	{
		result += 1;
	}
	printf("%d", result);
	return 0;
}