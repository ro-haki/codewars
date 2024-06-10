#include <stdio.h>
#include <stdlib.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z);

int main() {
    const int arr1[] = {1, 2, 3, 4, 5};
    const int arr2[] = {3, 4, 5, 6, 7};
    size_t n1 = sizeof(arr1) / sizeof(arr1[0]);
    size_t n2 = sizeof(arr2) / sizeof(arr2[0]);
    size_t z;

    int *result = array_diff(arr1, n1, arr2, n2, &z);

    for (size_t i = 0; i < z; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result);
    return 0;
}

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z) {
    printf("In function\n");
}

