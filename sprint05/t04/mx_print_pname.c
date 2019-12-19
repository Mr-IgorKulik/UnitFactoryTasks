#include "mx_printstr.c"
#include "mx_strchr.c"

int main (int argc, const char* argv[]) {
    char *res = (char*) argv[0];
    while (mx_strchr(res, '/') != NULL){
        res++;
    }
    
    mx_printstr(res);
    mx_printstr("\n");
    return argc;
}
