#include "mx_printstr.c"
#include "mx_strcmp.c"

int main(int argc, const char* argv[]){
    char *tmp [argc];
    char *t = NULL;
    for(int i = 1, k = 0; i < argc; i++, k++) {
        tmp[k] = (char*)argv[i];
        for (int j = i; j < argc; j++) {
            if(mx_strcmp(tmp[k], argv[j]) <= 0) {
                t = tmp[k];
                tmp[k] = (char*)argv[j];
                argv[j] = t;
            }
        }
    }

    for(int i = 0; i < argc - 1; i++) {
        mx_printstr(tmp[i]);
        mx_printstr("\n");
    }
}
