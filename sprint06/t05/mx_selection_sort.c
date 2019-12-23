/* #include <stdio.h> */
#include "mx_strlen.c"
#include "mx_strcmp.c"

int mx_selection_sort(char **arr, int size) {
    int count = 0;

    for (int i = 0; i <= size - 1; i++) {
        char *tmp = arr[i];
        int min = i;

        for(int j = i + 1; j < size; j++) {
            if((mx_strlen(arr[min]) == mx_strlen(arr[j]))) {
                if(mx_strcmp(arr[min], arr[j]) > 0) {
                    min = j;
                }
            }

            if(mx_strlen(arr[min]) > mx_strlen(arr[j])) {
                    min = j;
            }
        }
        if (min != i) {
            count++;
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }

    return count;
}

/* int main() {
    char *arr[] = {"Abcd", "a", "aBc", "abc", "Z", "z", "AbCd"};
    char *arr1[] = {"Z", "Abcd", "a", "aBc", "z", "abc", "AbCd"};

    printf("%d\n", mx_selection_sort(arr, 7));
    printf("%d\n", mx_selection_sort(arr1, 7));
} */
