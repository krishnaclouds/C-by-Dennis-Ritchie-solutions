/*

Playgound: Write a program to copy input to output. :) 

Use ^Z (ctrl + Z) in windows and ^D in linux like systems to simulate
EOF. 

Author: Bala Krishna (prince.balakrishna@gmail.com)

*/
#include <stdio.h>

int main(void) {
    int c;
    while((c = getchar()) != EOF) {
        putchar(c);
    }
}