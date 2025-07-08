#include <stdio.h>
int main() {
	int N;
	scanf("%d", &N);
	if (N % 4 == 0)
		for (int j = 0; j < N / 4; j++)
			printf("long ");
	printf("int");
	return 0;
}