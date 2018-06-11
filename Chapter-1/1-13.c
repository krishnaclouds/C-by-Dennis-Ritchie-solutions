/*

Excercise 1-13: Write a program to print a histogram of the lengths of words in
its input. It is easy to draw the histogram with the bars horizontal; a vertical
orientation is more challenging.

Author : Bala Krishna(prince.balakrishna@gmail.com)

*/

#include <stdio.h>

#define YES 1
#define NO 0
#define MAX_WORDS 10

int main(int argc, char const *argv[])
{
    int i, c, index, inside_word;
    inside_word = YES;

    int word_length[MAX_WORDS];

    for (i = 0; i < MAX_WORDS; ++i){
        word_length[i] = 0;
    }

    index = 0;
    while((c = getchar()) != EOF){
        printf("index: %d", index);
        if (c == ' ' || '\t' || '\n'){
            printf("if statement");
            if(inside_word){
                inside_word = NO;
                ++index;
            }
        } else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
            printf("Here");
            if (index < MAX_WORDS){
                inside_word = YES;
                ++word_length[index];
                printf("debug word_length: %d", word_length[index]);
            } else {
                break;
            }
        }
    }

    for (i = 0; i < MAX_WORDS; ++i){
        printf("%d", word_length[i]);
    }
    return 0;
}
