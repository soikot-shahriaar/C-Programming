#include <stdio.h>

void england()
{
    printf("He is in England\n"); //6
    return; //7
}
void australia()
{
    printf("He is in Australia\n"); //4
    england(); //5
    return; //8
}
void canada()
{
    printf("He is in Canada\n"); //2 
    australia(); //3
    return; //9
}
int main()
{
    canada(); //1
    return 0; //10
}