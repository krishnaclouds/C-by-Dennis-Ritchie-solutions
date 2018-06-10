/*
Excercise 1-6: Verify that the expression getchar () != EOF is 0 or 1.

Author: Bala Krishna (prince.balakrishna@gmail.com)

*/
#include <stdio.h>

int main(void) {
    printf("%d", (getchar() != EOF));
}