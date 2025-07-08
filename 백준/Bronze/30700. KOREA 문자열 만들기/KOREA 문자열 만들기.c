#include <stdio.h>

int main() {
	char s[1001] = { 0 };
	char checkChar = 'K';
	int count = 0;
	scanf("%s", s);

	for (int i = 0; s[i] != '\0'; i++) {
		// printf("i: %d, checkChar: %c\n", i, checkChar);
		if (s[i] == 'K' && checkChar == 'K') {
			checkChar = 'O';
			count++;
		}
		else if (s[i] == 'O' && checkChar == 'O') {
			checkChar = 'R';
			count++;
		}
		else if (s[i] == 'R' && checkChar == 'R') {
			checkChar = 'E';
			count++;
		}
		else if (s[i] == 'E' && checkChar == 'E') {
			checkChar = 'A';
			count++;
		}
		else if(s[i] == 'A' && checkChar == 'A') {
			checkChar = 'K';
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}