#include <stdio.h>
int main() {
	int total, count, res = 0;
	int price, thingCount;
	int i;

	scanf("%d", &total);
	scanf("%d",&count);

	for (i = 0; i < count; i++)
	{
		scanf("%d %d",&price, &thingCount);
		res += price * thingCount;
	}

	if (res == total)
		printf("Yes");
	else
		printf("No");

	return 0;
}