#include <stdio.h>

int main() {
    int T, X, Y;
    
    
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        
        scanf("%d %d", &X, &Y);
        
        
        int max_distance = X * 5;
        
        
        if (max_distance >= Y) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}
