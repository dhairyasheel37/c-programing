#include <stdio.h>

#define PLAYERS 22

struct Player {
    int runs;
    int wickets;
    int totalPoints;
};

int main() {
    int T;
    scanf("%d", &T); // Number of test cases

    while (T--) {
        struct Player players[PLAYERS];
        int maxPoints = 0;
        int manOfTheMatch = 0;

        // Input runs and wickets for each player
        for (int i = 0; i < PLAYERS; i++) {
            scanf("%d %d", &players[i].runs, &players[i].wickets);
            players[i].totalPoints = players[i].runs + (players[i].wickets * 20);
            if (players[i].totalPoints > maxPoints) {
                maxPoints = players[i].totalPoints;
                manOfTheMatch = i + 1; // Adding 1 since players are indexed from 1
            }
        }

        printf("%d\n", manOfTheMatch);
    }

    return 0;
}
