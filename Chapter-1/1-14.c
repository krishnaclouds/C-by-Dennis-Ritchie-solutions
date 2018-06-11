/*
Excercise 1-14: Write a program to print a histogram of the frequencies of dif-
different characters in its input.

Author: Bala Krishna (prince.balakrishna@gmail.com)

*/

#include <stdio.h>

#define CHARS 128

int main(int argc, char const *argv[])
{
    int i, c, j, char_frequencies[CHARS];

    for (i=0; i< CHARS; i++){
        char_frequencies[i] = 0;
    }

    while ((c = getchar()) != EOF){
        ++char_frequencies[c];
    }

    for (i=0; i<CHARS; i++){
        if (char_frequencies[i] > 0){
            printf("%5d : ", i);
            for (j=0; j < char_frequencies[i]; j++){
                printf("||");
            }
            printf("\n");
        }
    }
    return 0;
}
