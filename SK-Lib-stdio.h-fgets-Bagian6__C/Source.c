#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
    Source by AlphaCodingSkills (https://www.alphacodingskills.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    //open the file in read mode
    FILE* pFile = fopen("test.txt", "r");
    char mystring[16];

    //read first 15 characters from the file
    if (fgets(mystring, 16, pFile) != NULL) {
        puts(mystring);
    }

    //close the file
    fclose(pFile);

    _getch();
    return 0;
}