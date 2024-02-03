// Structure vs Union
// Structures allow to access all members simultaneously. Unions allow to access only one member at a time.
// Structures may have more memory overhead as each member gets its own space. Unions have less memory overhead as they share the same space for all members.

#include <stdio.h>
#include <string.h>

typedef union pokemonStruct
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} pokemon;

int main()
{

    pokemon pikachu;
    pikachu.hp = 50;
    pikachu.attack = 60;
    pikachu.speed = 100;
    pikachu.tier = 'A';
    strcpy(pikachu.name, "Pikachu");

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name); // only this will print

    return 0;
}