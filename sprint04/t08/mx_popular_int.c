/* #include <stdio.h> */

int mx_popular_int(const int *arr, int size) {
    int res = 0;
    int curCount = 0;
    int count = 0;
    for (int i = 0; i < size - 1; i++){
        for (int j = i + 1; j < size; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count > curCount) {
            curCount = count;
            res = arr[i];
        }
        count = 0;
    }
    return res;
}

/* int main() {
    int arr[] = {2, 2, 4, 4};
    printf("%d\n", mx_popular_int(arr, 4));
} */
