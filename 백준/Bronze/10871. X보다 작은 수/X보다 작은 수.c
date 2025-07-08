#include <stdio.h>
int main() {
	int arrLength, arrSeq[10000], num;
	int tempArrSeq[10000];
	int i, j, k = 0;
	
	scanf("%d %d",&arrLength, &num); // 첫 번째 scanf는 N과 X를 입력 받음

	for (i = 0; i < arrLength; i++)	// 첫 번째 for 루프는 배열 A를 입력 받음
		scanf("%d ",&arrSeq[i]); 

	for (j = 0; j < arrLength; j++) // 두 번째 for 루프는 X보다 작은 수를 tempArrSeq에 저장
	{
		if (num > arrSeq[j])
		{
			tempArrSeq[k] = arrSeq[j];
			k++;
		}
	}
	for (i = 0; i < k; i++) // 세 번째 for 루프는 tempArrSeq를 차례대로 출력함
		printf("%d ", tempArrSeq[i]);
	return 0;
}