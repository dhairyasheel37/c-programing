#include <stdio.h>
#include <string.h>
 
int main () {

    char x[] = "Hello";
    
    // declare string y with "World"
    char y[] = "World";
    // concatenate the two strings
    strcat(x, y);
    // print the final string
    printf("%s", x);

}
