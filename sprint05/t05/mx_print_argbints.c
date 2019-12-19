#include "mx_atoi.c"
#include "mx_printint.c"

int main (int argc, const char* argv[]) {
    int arr[argc - 1];

    for (int i = 1, j = 0; j < argc - 1; i++, j++) {
        arr[j] = mx_atoi(argv[i]);
    }

    int binaryV[32];

    for (int k = 0; k < argc - 1; k++) {
        
        if(arr[k] >= 0) {
            for(int i = 0; i < 32; i++) {
                if((arr[k] / 2) == 1 && arr[k] == 3) {
                    binaryV[i] = 1;
                    arr[k] /= 2;
                } else if((arr[k] % 2) == 1) {
                    binaryV[i] = 1;
                    arr[k] /= 2;
                } else if((arr[k] % 2) == 0) {
                    binaryV[i] = 0;
                    arr[k] /= 2;
                } else {
                    binaryV[i] = 0;
                }
            }

            for (int i = 31; i >= 0; i--) {
                mx_printint(binaryV[i]);
            }
            mx_printchar('\n');
        } else {
            arr[k] = 0 - arr[k];
            arr[k]--;

            for(int i = 0; i < 32; i++) {
                if((arr[k] / 2) == 1 && arr[k] == 3) {
                    binaryV[i] = 0;
                    arr[k] /= 2;
                } else if((arr[k] % 2) == 1) {
                    binaryV[i] = 0;
                    arr[k] /= 2;
                } else if((arr[k] % 2) == 0) {
                    binaryV[i] = 1;
                    arr[k] /= 2;
                } else {
                    binaryV[i] = 1;
                }
            }

            for (int i = 31; i >= 0; i--) {
                mx_printint(binaryV[i]);
            }
            mx_printchar('\n');

        }
    }
}
