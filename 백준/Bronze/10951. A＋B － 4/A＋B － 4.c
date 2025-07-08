#include <stdio.h>
int main() {
	int inputA, inputB;
	while (scanf("%d %d", &inputA, &inputB) != EOF)
	{
		printf("%d\n", inputA + inputB);
	}
	return 0;
}