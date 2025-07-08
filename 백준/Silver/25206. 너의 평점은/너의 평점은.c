#include <stdio.h>
#include <string.h>

/* 총 unit * 총 학점
* 학점 -> 점수로 변환 후 계산 -> 끝
*/

typedef struct stInfo {
	char subName[51];
	float unit;
	char rate[3];
} stInfo;

stInfo info[20];

float convert(int i) {
	if (strcmp(info[i].rate, "A+") == 0)
		return 4.5;
	else if (strcmp(info[i].rate, "A0") == 0)
		return 4.0;
	else if (strcmp(info[i].rate, "B+") == 0)
		return 3.5;
	else if (strcmp(info[i].rate, "B0") == 0)
		return 3.0;
	else if (strcmp(info[i].rate, "C+") == 0)
		return 2.5;
	else if (strcmp(info[i].rate, "C0") == 0)
		return 2.0;
	else if (strcmp(info[i].rate, "D+") == 0)
		return 1.5;
	else if (strcmp(info[i].rate, "D0") == 0)
		return 1.0;
	else if (strcmp(info[i].rate, "F") == 0)
		return 0.0;
}

float rating() {
	float unitSum = 0.0f;
	float result = 0.0f;

	for (int i = 0; i < 20; i++) {
		if (strcmp(info[i].rate, "P") != 0) {
			result += convert(i) * info[i].unit;
			unitSum += info[i].unit;
		}
	}
	return result /= unitSum;
}

void set() {
	for (int i = 0; i < 20; i++) {
		int ret = scanf("%s %f %s", info[i].subName, &info[i].unit, info[i].rate);
		if (ret != 3)
			exit(1);
	}
}

int main() {

	set();
	printf("%f\n", rating());
	return 0;
}