/* #include <stdio.h> */

int mx_strncmp(const char *s1, const char *s2, int n) {
    int count = 0;
    while (s1[count] && s2[count] && s1[count] == s2[count] && count < n)
    {
        count++;
    }

    if (count == 0) {
        return s1[0] - s2[0];
    } else if (s1[count] == '\0' || s2[count] == '\0') {
        return 0;
    } else
    {
        return s1[count] - s2[count];
    }
    
}

/* int main() {
    char str1[] = "Hello! It's me!";
    char str2[] = "Hello!";
    printf("%d\n", mx_strncmp(str1, str2, 8));
} */
