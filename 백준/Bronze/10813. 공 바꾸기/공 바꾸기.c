#include <stdio.h>
int main(){
	int n, m;
	int i, j;
	int temp, arr[100];
	scanf("%d %d", &n, &m);
	for (int x = 0; x < n; x++)
	{
		arr[x] = x + 1;
	}
	for (int x = 0; x < m; x++)
	{
		scanf("%d %d", &i, &j);
		temp = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = temp;
	}
	for(int x = 0; x < n; x++)
	{
		printf("%d ", arr[x]);
	}
	return 0;
}