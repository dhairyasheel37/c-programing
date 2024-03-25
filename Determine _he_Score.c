#include <stdio.h>

int main() {
    int total_problems, attempted_problems;
    
   
    scanf("%d %d", &total_problems, &attempted_problems);
    
   
    int unattempted_problems = total_problems - attempted_problems;
    
   
    printf("%d\n", unattempted_problems);
    
    return 0;
}
