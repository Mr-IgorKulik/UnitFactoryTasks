/* #include <stdio.h> */

void mx_sort_arr_int(int *arr, int size) {
    int tmp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i; j < size; j++) {
            if (arr[j] <  arr[i]) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

/* int main() {
    int arr[] = {3, 55, -11, 1, 0, 4, 22};
    for(int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    mx_sort_arr_int(arr, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
} */
