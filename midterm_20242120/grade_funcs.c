#include <stdio.h>
#include "grade_funcs.h"
#define SIZE 10

int main() {
    int grades[SIZE] = { 85, 70, 55, 90, 45, 60, 78, 88, 92, 49 }; // �迭�� ����� 10���� ���� ���� 
    float average;
    int min, max;
    int pass_count = 0, fail_count = 0;

    // ��� ���
    average = calculate_average(grades, SIZE);

    // �ּ�/�ִ� ���� ã��
    find_min_max(grades, SIZE, &min, &max);

    // �հ�/���հ� ī��Ʈ
    count_pass_fail(grades, SIZE, &pass_count, &fail_count);

    // ���, �ִ�, �ּ� ���� ���
    printf("Average grade: %.1f\n", average);
    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n\n", min);


    // ��պ��� ���� ������ ���� ���� ���
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

    // �հ���, ���հ��� �� ���
    printf("\n\nNumber of students passing: %d\n", pass_count);
    printf("Number of students failing: %d\n", fail_count);

    return 0;
}