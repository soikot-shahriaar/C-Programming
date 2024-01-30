// 1. Read a date in the DD/MM/YY format;
// 2. Print the date in MM/DD/YY format;
// 3. Print the date in the YY/MM/DD format ;
// 4. Print the date in DD-MM-YY format.

// Input
// The input consists of several test files. In each test file there is one line. The line has the following DD/MM/YY format where DD, MM and YY are integers. As shown in the following input example.

// Output
// For each file in the entry, you have an output file. The output file has three lines according to procedures 2, 3, and 4. As shown in the following output example.

#include <stdio.h>

int main()
{
    int DD, MM, YY;
    scanf("%d%d%d", &DD, &MM, &YY);
    printf("%02d/%02d/%02d\n", MM, DD, YY);
    printf("%02d/%02d/%02d\n", YY, MM, DD);
    printf("%02d-%02d-%02d\n", DD, MM, YY);
    return 0;
}