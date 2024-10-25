#include <stdio.h>
#include "grade_funcs.h"
#define SIZE 10

int main() {
    int grades[SIZE] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 }; // 배열에 저장된 10개의 힉셍 성적 
    float average;
    int min, max;
    int pass_count = 0, fail_count = 0;

    // 평균 계산
    average = calculate_average(grades, SIZE);

    // 최소/최대 성적 찾기
    find_min_max(grades, SIZE, &min, &max);

    // 합격/불합격 카운트
    count_pass_fail(grades, SIZE, &pass_count, &fail_count);

    // 평균, 최대, 최소 성적 출력
    printf("Average grade: %.1f\n", average);
    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n\n", min);


    // 평균보다 높은 성적과 낮은 성적 출력
    printf("Grades above average: ");
    for (int i = 0; i < SIZE; i++) {
        if (grades[i] > average) {
            printf("%d ", grades[i]);
        }
    }

    printf("\nGrades below average: ");
    for (int i = 0; i < SIZE; i++) {
        if (grades[i] < average) {
            printf("%d ", grades[i]);
        }
    }

    // 합격자, 불합격자 수 출력
    printf("\n\nNumber of students passing: %d\n", pass_count);
    printf("Number of students failing: %d\n", fail_count);

    return 0;
}