/* #include <stdio.h> */
#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size) {
    int *res = (int *) malloc(size);
    if(!res || !src) return NULL;

    for (int i = 0; i < size; i++) {
        res[i] = src[i];
    }

    return res;
}

/* int main() {
    int arr[] = {1, 2, 3};
    int *arr1 = NULL;

    int *resArr = mx_copy_int_arr(arr, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d ", resArr[i]);
    }
    printf("\n");
    free(resArr);

    int *resArr1 = mx_copy_int_arr(arr1, 3);
    if (resArr1 == NULL) printf("NULL\n");
} */
