#include <stdio.h>
int main() {
	int a, b, c;
	int res;
	scanf("%d %d %d",&a,&b,&c);
	if (a == b && a == c)
		res = 10000 + a * 1000;
	else if (a == b || b == c || c == a)
	{
		if (a == b)
			res = 1000 + a * 100;
		else if (b == c)
			res = 1000 + b * 100;
		else
			res = 1000 + c * 100;
	}
	else
	{
		if (a > b && a > c)
			res = a * 100;
		else if (b > c && b > a)
			res = b * 100;
		else
			res = c * 100;
	}
	printf("%d", res);
	return 0;
}