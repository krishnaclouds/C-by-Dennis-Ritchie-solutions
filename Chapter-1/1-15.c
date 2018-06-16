/*
Excercise 1-15: Rewrite Temperature conversion program to make use of a function for conversion

Author: Bala Krishna (prince.balakrishna@gmail.com)

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;
    printf("%4s %8s\n", "fahr", "celsius");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

*/

#include <stdio.h>

float convertToCelsius(float);
int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahr =lower;
    printf("%4s %8s\n", "fahr", "celsius");
    while(fahr <= upper){
        celsius = convertToCelsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

float convertToCelsius(float fahr){
    float celsius;
    celsius = (5.0/9.0) * (fahr-32.0);
    return celsius;
}
