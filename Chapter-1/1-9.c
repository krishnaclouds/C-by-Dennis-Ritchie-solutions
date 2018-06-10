/*
Excercise 1-9: 1-9. Write a program to copy its input to its output, replacing each
string of one or more blanks by a single blank.

Author: Bala Krishna (prince.balakrishna@gmail.com)

*/

#include <stdio.h>

int main(void) {
    int c, previous_blank;
    previous_blank = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (!previous_blank){
                putchar(c);
                previous_blank = 1;
            }
        } else {
            previous_blank = 0;
            putchar(c);
        }
    }

    return 0;
}