#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[1000001];
	char al_pa [26] ;
	char word;
	int i, j;
	int len;
	int count = 0, res = 0, same = 0;

	scanf("%s", sentence);

	len = strlen(sentence); 
	// abcd알파벳이 입력받은 것과 같으면 빈도수를 1 늘림
	// 예시: a: 0 b: 0 c: 1 d: 4 여기서 최대 빈도수는 d여서 d를 대문자로 출력

	for (i = 0; i < 26; i++)
		al_pa[i] = 'a' + i;

	// sentence[] = b a a a, M i s s i s s i p i
	// al_ph[] = a b c d e f g h i j k l n m o p q r s t u v w x y z

	for (i = 0; i < 26; i++)
	{
		count = 0;
		for (j = 0; j < len; j++)
		{
			if (al_pa[i] == sentence[j])
				count += 1;

			else if (al_pa[i] - 32 == sentence[j])
				count += 1;
		}
		/*printf("res: %d ", res);
		printf("count: %d ", count);
		printf("same: %d ", same);
		printf("i: %d\n", i);*/

		if (count == 0)
			continue;

		if (count > res)
		{
			word = al_pa[i];
			res = count;
		}

		else if (count == res)
			same = res;

		//else if (count == res)
		//{
		//	printf("word: %c\n", word);
		//	printf("alpa: %c\n", al_pa[i]);
		//	if (word == al_pa[i])
		//	{
		//		printf("?");
		//		return 0;
		//	}
		//}
	}

	if(same == res)
		printf("?");
	else if ('z' >= word)
	{
		printf("%c", word - 32);
	}
	else
	{
		printf("%c", word);
	}
	return 0;
}