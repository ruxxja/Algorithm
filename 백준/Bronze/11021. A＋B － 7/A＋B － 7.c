#include <stdio.h>
int main() {
	int TestCaseCount;
	int SumA, SumB;
	scanf("%d",&TestCaseCount);
	for (int i = 0; i < TestCaseCount; i++)
	{
		scanf("%d %d", &SumA, &SumB);
		printf("Case #%d: %d\n", i + 1, SumA + SumB);
	}
	return 0;
}