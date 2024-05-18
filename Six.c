#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int X, Y; 
        scanf("%d %d", &X, &Y);
        
        int costDoubleRooms = 3 * X;
        int costTripleRooms = 2 * Y; 
        int minCost = costDoubleRooms < costTripleRooms ? costDoubleRooms : costTripleRooms;
        
        printf("%d\n", minCost);
    }
    
    return 0;
}
