#include <stdio.h>
int main() {
	int SumA, SumB;
	while (1)
	{
		scanf("%d %d", &SumA, &SumB);
		if (SumA == 0 && SumB == 0)
			break;
		printf("%d\n", SumA + SumB);
	}
	return 0;
}