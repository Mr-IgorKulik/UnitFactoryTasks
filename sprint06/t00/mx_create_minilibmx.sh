clang -c mx_isspace.c -o mx_isspace.o
clang -c  mx_isdigit.c -o mx_isdigit.o
clang -c mx_atoi.c -o mx_atoi.o
clang -c mx_printchar.c -o mx_printchar.o
clang -c mx_printint.c -o mx_printint.o
clang -c mx_printstr.c -o mx_printstr.o
clang -c mx_strcpy.c -o mx_strcpy.o
clang -c  mx_strlen.c -o mx_strlen.o
clang -c mx_strcmp.c -o mx_strcmp.o
ar rc minilibmx.a mx_atoi.o mx_isdigit.o mx_isspace.o mx_printchar.o mx_printint.o mx_printstr.o mx_strcmp.o mx_strcpy.o mx_strlen.o
ranlib minilibmx.a
