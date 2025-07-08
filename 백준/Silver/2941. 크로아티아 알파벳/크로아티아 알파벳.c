#include <stdio.h>

// č	c =
// š	s =
// ž	z =
// dž	dz =
// ć	c -
// đ	d -
// lj	lj
// nj	nj

// lj e s= nj a k = 6

/* 알고리즘
* 1. 입력받은 배열을 검사할 때마다 (*count)++
* 2. 매 입력을 검사할 때마다 사용자 정의 크로아티아 부조건도 같이 검사(복잡도 좀 생각해보기)
* 3. 조건 =, -, j 세개로 좁히기
*/

void checking(char word[], int* count)
{
	int i, j;
	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i + 1] == '=')
		{
			if (word[i] == 'c' || word[i] == 's' || word[i] == 'z')
			{
				if (word[i - 1] == 'd' && word[i] == 'z')
				{
					i++;
					continue;
				}
				(*count)++;
				i++;
			}
		}
		else if (word[i + 1] == '-')
		{
			if (word[i] == 'c' || word[i] == 'd')
			{
				(*count)++;
				i++;
			}
		}
		else if (word[i + 1] == 'j')
		{
			if (word[i] == 'l' || word[i] == 'n')
			{
				(*count)++;
				i++;
			}
			else
				(*count)++;
		}
		else
			(*count)++;
	}
}

int main()
{
	int count = 0;
	char input[101] = { 0 };

	scanf("%s", input);

	checking(input, &count);
	printf("%d\n", count);
	return 0;
}