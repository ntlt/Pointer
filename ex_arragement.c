#include <stdio.h>

int main() {
    // Dùng con trỏ để nhập giá trị 1 mảng 10 phần tử
    // Dùng con trỏ để sắp xếp 1 mảng theo thứ tự tăng dần   
    int x[10]; // Changed char to int as you are dealing with integers
    int N = 4; // Number of elements to be entered
    int *pt;
    pt = x; // Point to the array
    int temp;

    // Input values into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", (pt + i));
    }

    // Sort the array in ascending order using bubble sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (*(pt + i) > *(pt + j)) {
                temp = *(pt + i);
                *(pt + i) = *(pt + j);
                *(pt + j) = temp;
            }
        }
    }

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(pt + i));
    }

    return 0;
}