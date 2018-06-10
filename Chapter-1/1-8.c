/*
Excerise 1-8: Write a program to count blanks, tabs and newlines

Author: Bala Krishna(prince.balakrishna@gmail.com)
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c, newlines, blanks, tabs;
    newlines = 0;
    blanks = 0;
    tabs = 0;
    while((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        } else if (c == '\t'){
            ++tabs;
        } else if (c == '\n'){
            ++newlines;
        }
    }

    printf("%d %d %d", newlines, tabs, blanks);
    return 0;
}
