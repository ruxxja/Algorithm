#include <stdio.h>
int main() {
	int TestCaseCount; // 최대 1,000,000
	int SumA, SumB; // 1 <= SumA, SumB <= 1000
	scanf("%d", &TestCaseCount);
	for (int i = 0; i < TestCaseCount; i++)
	{
		scanf("%d %d", &SumA, &SumB);
		printf("%d\n", SumA + SumB);
	}
	return 0;
}