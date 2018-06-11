#include <stdio.h>


int main(int argc, char const *argv[])
{
    int i;
    int arr1[10] = {0};
    printf("-----------------Array 1--------\n");
    for (i =0; i< 10; i++){
        printf("%d", arr1[i]);
    }
    printf("\n");
    
    int arr2[10];
    printf("-----------------Array 2--------\n");
    for (i=0; i< 10; i++){
        printf("%d", arr2[i]);
    }

        printf("\n");
    
    int arr3[10] = {1, 2};
    printf("-----------------Array 3--------\n");
    for (i=0; i< 10; i++){
        printf("%d", arr3[i]);
    }

    // int arr4[10];
    // arr4[10] = {1, 2};
    return 0;
}
