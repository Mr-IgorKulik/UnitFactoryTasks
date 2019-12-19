#include "mx_atoi.c"
#include "mx_printint.c"
#include <stdbool.h>

int main (int argc, const char* argv[]) {
    int res = 0;
    int j = 0;
    bool flag = true;
    for(int i = 1; i < argc; i++) {
        if(argv[i][0] == '+' || argv[i][0] == '-') {
            j++;
        }

        while (argv[i][j])
        {
            if(!mx_isdigit(argv[i][j])) {
                flag = false;
            }
            j++;
        }

        if(flag) {
            res += mx_atoi(argv[i]);
        }

        flag = true;
        j = 0;
    }

    mx_printint(res);
    mx_printchar('\n');
}
