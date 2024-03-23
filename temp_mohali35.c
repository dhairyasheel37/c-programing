#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* If the temperature is strictly higher than 35 our friend Ayush will go to Manali. otherwisise he won't tell us how much more degrees temperature has to go hight so that Ayush can go to Manali.  Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a;
    float t;
    scanf("%f",&t);
        if(0<=t<=50)
        {
            if(35>t){
            a=36-t;
        printf("%d\n",a);
        }
       else
        printf("0\n");

        }
    return 0;
}

