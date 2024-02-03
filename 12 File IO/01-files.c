/*
Operation on Files
    Create a File
    Open a File
    Close a File
    Read from a File
    Write in a File
*/

#include <stdio.h>
int main()
{
    FILE *fptr; // file pointer
    // fptr = fopen("filename", mode);
    fptr = fopen("Test.txt", "w"); // opening a file
    fclose(fptr);                  // closing a file
    return 0;
}

// File Opening Modes
//     open to read "r"
//     open to read in binary "rb"
//     open to write "w"
//     open to write in binary "wb"
//     open to append "a"