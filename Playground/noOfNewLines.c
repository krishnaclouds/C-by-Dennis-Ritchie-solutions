#include <stdio.h>


int main(int argc, char const *argv[])
{
    int c, nl;
    nl = 0;
    while((c = getchar()) != EOF){
        if (c == '\n'){
            ++nl;
        }
    }

    printf("%d", nl);

    return 0;
}
