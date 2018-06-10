#include <stdio.h>
#define IN 1
#define OUT 0

int main(void){
    int c, nl, nw, nc, STATE;
    nl = nw = nc = 0;

    STATE = OUT;

    while ((c = getchar()) != EOF){
        ++nc;
        if (c == '\n'){
            ++nl;
        } 

        if (c == '\n' || c == '\t' || c == ' '){
            STATE = OUT;
        } else if ( STATE == OUT){
            STATE = IN;
            ++nw;
        }
    }

    printf ("%d %d %d", nl, nw, nc);

    return 0;
}