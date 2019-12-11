#include <unistd.h>
#include "mx_printchar.c"

void mx_str_separate(const char *str, char delim) {
    int i = 0;
    while (str[i])
    {
        if (str[i] != delim)
        {
            mx_printchar(str[i]);
        }
        else
        {
            mx_printchar('\n');
        }
        i++;
        
    }
    
    mx_printchar('\n');
}

/* int main() {
    const char s[] = "game over";
    mx_str_separate(s, ' ');
    mx_str_separate(s, 'm'); 
} */
