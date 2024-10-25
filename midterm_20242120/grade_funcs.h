#pragma once
// grade_funcs.h

#define GRADE_FUNCS_H

float calculate_average(int grades[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    return (float)sum / size;
}

void find_min_max(int grades[], int size, int* min, int* max) {
    *min = grades[0];
    *max = grades[0];
    for (int i = 1; i < size; i++) {
        if (grades[i] < *min) {
            *min = grades[i];
        }
        if (grades[i] > *max) {
            *max = grades[i];
        }
    }
}

void count_pass_fail(int grades[], int size, int* pass_count, int* fail_count) {
    *pass_count = 0;
    *fail_count = 0;
    for (int i = 0; i < size; i++) {
        if (grades[i] >= 60) {
            (*pass_count)++;
        }
        else {
            (*fail_count)++;
        }
    }
}