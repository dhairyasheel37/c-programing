#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0')
        return 0;
    else
        return 1 + stringLength(str + 1);
}

int main() {
    char str[] = "Recursion";
    printf("Length of string \"%s\" is %d\n", str, stringLength(str));
    return 0;
}
