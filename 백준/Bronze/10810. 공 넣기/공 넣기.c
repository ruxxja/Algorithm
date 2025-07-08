#include <stdio.h>
int main(){
	int n, m;
	int i, j, k;
	scanf("%d %d", &n, &m);
	int arr[100] = {0,};

	for(int y = 0; y < m; y++)
	{
		scanf("%d %d %d", &i, &j, &k);
		for(; i <= j; i++)
			arr[i] = k;
	}
	for(int x = 1; x < n + 1; x++)
	{
		printf("%d ", arr[x]);
	}
	return 0;
}