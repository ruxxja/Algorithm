#include <stdio.h>
int main() {
	int input;
	int integer[100];
	int find;
	int i, j, res = 0;

	scanf("%d",&input);

	for (i = 0; i < input; i++)
	{
		scanf("%d ", &integer[i]);
	}

	scanf("%d", &find);

	for (j = 0; j < input; j++)
	{
		if (integer[j] == find)
			res += 1;
	}

	printf("%d", res);
	return 0;
}