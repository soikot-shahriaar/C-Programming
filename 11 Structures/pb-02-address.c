// Store and Print address (house no, block, city, state) of 5 people and print them using a function

#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address adrs)
{
    printf("Stored addresses are: House: %d, Block: %d, City: %s, State: %s\n", adrs.houseNo, adrs.block, adrs.city, adrs.state);
}

int main()
{
    struct address add[5];
    // input
    printf("Enter info for Person 1\n(House No, Block No, State Name, City Name): \n");
    scanf("%d", &add[0].houseNo);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    printf("Enter info for Person 2\n(House No, Block No, State Name, City Name): \n");
    scanf("%d", &add[1].houseNo);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    printf("Enter info for Person 3\n(House No, Block No, State Name, City Name): \n");
    scanf("%d", &add[2].houseNo);
    scanf("%d", &add[2].block);
    scanf("%s", add[2].city);
    scanf("%s", add[2].state);

    printf("Enter info for Person 4\n(House No, Block No, State Name, City Name): \n");
    scanf("%d", &add[3].houseNo);
    scanf("%d", &add[3].block);
    scanf("%s", add[3].city);
    scanf("%s", add[3].state);

    printf("Enter info for Person 5\n(House No, Block No, State Name, City Name): \n");
    scanf("%d", &add[4].houseNo);
    scanf("%d", &add[4].block);
    scanf("%s", add[4].city);
    scanf("%s", add[4].state);

    printAdd(add[0]);
    printAdd(add[1]);
    printAdd(add[2]);
    printAdd(add[3]);
    printAdd(add[4]);
}