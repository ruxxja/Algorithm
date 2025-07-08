#include <stdio.h>
int main() {
    int N, M = 0;
    int y;
    int int_record[1000] = { 0, };
    double record[1000] = { 0, };
    double div = 0;

    // 시험 본 과목의 개수 입력
    scanf("%d", &N);

    // 세준이의 성적 입력과 동시에 최대값 찾기
    for (y = 0; y < N; y++)
    {
        scanf("%d", &int_record[y]);
        if (int_record[y] >= M)
            M = int_record[y];        
    }

    // record 값에  (double)int_record / M * 100 차례대로 대입
    // 계산방법 ex) 10 / 30.000000 * 100 = 0.33333333
    // 10 / 30은 0이지만 10 / 30.0은 0.33333
    for (y = 0; y < N; y++)
    {
        record[y] = (double)int_record[y] / M * 100;
    }

    // 새로운 평균 구하기
    for (y = 0; y < N; y++)
    {
        div += record[y];
    }
    printf("%lf", div / N);
    return 0;
}