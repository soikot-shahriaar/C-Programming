// Assigning the value of one structure variable to another of the same type

#include <stdio.h>
#include <string.h>

typedef struct thePokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
} pokemon;

int main()
{
    pokemon a, b, c;

    strcpy(a.name, "Charizard");
    a.attack = 50;
    a.hp = 100;
    a.speed = 130;
    a.tier = 'A';

    // deep copy
    b = a;
    c = a;

    printf("Speed of C : %d\n", c.speed);

    c.speed = 200;

    printf("HP of B : %d\n", b.hp);
    printf("Speed of C : %d\n", c.speed);
    return 0;
}
