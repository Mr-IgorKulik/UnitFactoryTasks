/* #include <stdio.h> */
#include "mx_strcmp.c"

int mx_bubble_sort(char **arr, int size) {
    char *tmp = NULL;
    int count = 0;

    for(int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if(mx_strcmp(arr[i], arr[j]) > 0) {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
                count++;
            }
        }
    }

    return count;
}

/* int main() {
    char *arr[] = {"abc", "xyz", "ghi", "def"};
    char *arr1[] = {"abc", "acb", "a"};

    printf("%d\n", mx_bubble_sort(arr, 4));
    for(int i = 0; i < 4; i++) {
        printf("%s  ", arr[i]);
    }
    printf("\n");
    printf("%d\n", mx_bubble_sort(arr1, 3));
    for (int i = 0; i < 3; i++) {
        printf("%s  ", arr1[i]);
    }
}  */
