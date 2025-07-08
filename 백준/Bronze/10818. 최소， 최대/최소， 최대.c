#include <stdio.h>
int main() {
	int Count;
    int Seq[1000000] = { 0 };
	int Max = 0, Min = 0;
	int i;
	scanf("%d",&Count);
	for (i = 0; i < Count; i++) // Count의 크기에 맞는 배열을 입력
		scanf("%d",&Seq[i]);

	Max = Seq[0]; // Max와 Min 초기화
	Min = Seq[0];

	for (i = 0; i < Count; i++)
	{
		if (Max < Seq[i]) // Max보다 크면 Max에 Seq배열 대입
			Max = Seq[i];

		if (Min > Seq[i]) //Min보다 작으면 Min에 Seq배열 대입
			Min = Seq[i];
	}
	printf("%d %d", Min, Max); // 마지막 출력
	return 0;
}