#include "mx_printint.c"
#include "mx_atoi.c"
#include "mx_strlen.c"

int main(int argc, const char* argv[]) {
    if(argc == 3 
    && mx_isdigit(mx_atoi(argv[1]) + 48) 
    && mx_isdigit(mx_atoi(argv[2]) + 48) 
    && mx_strlen(argv[1]) == 1
    && mx_strlen(argv[2]) == 1) 
    {
        int x = mx_atoi(argv[1]);
        int y = mx_atoi(argv[2]);

        if ((x - y) > 0) {
            int tmp = x;
            x = y;
            y = tmp;
        } else if (x == y)
        {
            mx_printint(x * y);
            mx_printchar('\n');
            return 0;
        } 
        
        for (int i = x; i <= y; i++) {
            for (int j = x; j <= y; j++) {
                mx_printint(j * i);
                if(j != y) {
                    mx_printchar('\t');
                } else {
                    mx_printchar('\n');
                }
            }
        }
    }
}
