#include <stdio.h>

void set() {
	int n = 0;
	char sentence[14] = "WelcomeToSMUPC";
	scanf("%d", &n);
	n -= 1;
	n %= 14;
	printf("%c", sentence[n]);
}
int main() {

	set();
	return 0;
}