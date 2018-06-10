/*
Excercise 1-12: Write a program that prints its input one word per line. 

Author: Bala Krishna (prince.balakrishna@gmail.com)

*/

#include <stdio.h>

#define YES 1
#define NO 0

int main(int argc, char const *argv[])
{   
    int c, has_line_started;
    has_line_started = NO;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == ' ' || c == '\t'){
            if(!has_line_started){
                has_line_started = YES;
                putchar('\n');
            }
        } else {
            has_line_started = NO;
            putchar(c);
        }
    }
    return 0;
}
