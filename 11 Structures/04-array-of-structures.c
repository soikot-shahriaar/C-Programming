// Structure is a collection of values of different data types

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
    // struct thePokemon arr[3];
    pokemon arr[3];

    strcpy(arr[0].name, "Charizard");
    arr[0].attack = 50;
    arr[0].hp = 100;
    arr[0].speed = 130;
    arr[0].tier = 'A';

    strcpy(arr[1].name, "Mewtwo");
    arr[1].attack = 150;
    arr[1].hp = 100;
    arr[1].speed = 130;
    arr[1].tier = 'S';

    strcpy(arr[2].name, "Pikachu");
    arr[2].attack = 50;
    arr[2].hp = 30;
    arr[2].speed = 80;
    arr[2].tier = 'B';

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("HP: %d\n", arr[i].hp);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %c\n\n", arr[i].tier);
    }
    return 0;
}