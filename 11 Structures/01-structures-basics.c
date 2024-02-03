// Structure is a collection of values of different data types

#include <stdio.h>
int main()
{
    struct pokemon // user defined datatype
    {
        int hp;
        int speed;
        int attack;
        char tier;
    };

    struct pokemon pikachu;
    pikachu.hp = 50; // attributes are accessed using dot operator
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    printf("Speed of pikachu: %d\n", pikachu.speed);

    struct pokemon charicard;
    printf("Enter hp of charizard: ");
    scanf("%d", &charicard.hp);
    // charicard.hp = 80;
    charicard.attack = 130;
    charicard.speed = 80;
    charicard.tier = 'S';
    printf("hp of charizard: %d", charicard.hp);

    return 0;
}
