// Tower of Hanoi
// Object of the game is to move all the disks over to last tower (tower C). But you cannot place a larger disk onto a smaller disk.
// Calculate how many minimum moves are needed.

#include <stdio.h>

void towerHanoi(int n, char s, char h, char d)
{
    if (n == 0)
        return;

    towerHanoi(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    towerHanoi(n - 1, h, s, d);
    return;
}

int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    towerHanoi(n, 'A', 'B', 'C');
    return 0;
}