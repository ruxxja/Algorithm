#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
	int N, res = 0;
	int i, j, k, l;
	char word[101];

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		bool b1 = true;

		scanf("%s", word); // 단어 한 줄 입력 후 그룹 단어인지 체크

		for (j = 0; j < strlen(word); j++) // 단어 최대 배열 길이만큼 비교
		{
			if (word[j] == word[j + 1]) // 단어의 j번째 글자와 j+1(다음 글자)를 비교하고 맞다면 b1 true로 초기화
			{
				b1 = true;
			}
			else
				for (k = j + 1, l = 1; k < strlen(word); k++,l++) 
				// 위의 조건이 아닐 경우 위의 조건이 아니었던 j번째 글자를 가져와 순서대로 글자의 끝까지 비교하며 만약 하나라도 같은 게 있으면 false 후 종료
				// 예를 들어 입력이 aba라면 위의 if조건의 ab가 맞지 않기 때문에 a를 가져와 a와 a의 다음 글자부터 차례대로 쭉 비교한다 (aba는 분리된 a를 만나 종료
				// 조건은 k가 j이기 때문에 j의 값이 word의 배열을 넘어가지 않게 함
				{
					if (word[j] == word[j + l])
						b1 = false;
					if (!b1)
						break;
				}
			if (!b1 || word[j + 1] == '\0')
				break;
		}
		if (b1)
			res++; // b1이 true면 res + 1 (그룹 단어가 있으면 값 1 증가)
	}
	printf("%d", res);
	return 0;
}