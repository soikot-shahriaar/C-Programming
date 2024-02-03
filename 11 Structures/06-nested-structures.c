// Nesting one structure within another structure

// Assigning the value of one structure variable to another of the same type

#include <stdio.h>
#include <string.h>

typedef struct normalPokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[20];
} pokemon;

typedef struct legendaryPokemon
{
    pokemon normal;
    char ability[100];
} legendPok;

typedef struct godPokemon
{
    legendPok legend;
    int specialAttack;
} godPok;

int main()
{
    legendPok mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.hp = 180;
    strcpy(mewtwo.normal.name, "MewTwo");
    mewtwo.normal.speed = 180;
    mewtwo.normal.tier = 180;

    godPok arceus;
    arceus.specialAttack = 300;
    strcpy(arceus.legend.ability, "TurnIntoStone");
    arceus.legend.normal.attack = 500;
    return 0;
}
