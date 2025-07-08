#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool condition(char Palindrome[], int length);

int main() {
	char Palindrome[100];
	int length;

	scanf("%s", Palindrome);
	length = strlen(Palindrome);

	if (condition(Palindrome, length))
		printf("1");
	else
		printf("0");
	return 0;
}

bool condition(char Palindrome[], int length) {

	for (int i = 0; i < length / 2; i++)
	{
		if (Palindrome[i] != Palindrome[length - 1 - i])
			return false;
	}
	return true;
}