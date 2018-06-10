/*
Excercise 1-3: Modify the temperature conversion program to print a heading
above the table.

#include <stdio.h>
// print Fahrenheit-Celsius table
// for fahr = 0, 20, ..., 300; floating-point version
void main()
{
    float fahr, Celsius;
    int lower, upper, step;
    lower =0; //lower limit of temperature table
    upper = 300; // upper limit
    step =20; // step size
    fahr = lower;
    while (fahr <= upper) {
        celsius = 5.0/9.0) * (fahr-32.0);
        printf("%3.Of %6.1f\n", fahr, celsius);
        fahr = fahr + step; 
    }
}
 
// Author: Bala Krishna (prince.balakrishna@gmail.com)

*/

#include <stdio.h>

int main(){

    float fahr, celcius;
    int lower, upper, step;
    
    lower = -200;
    upper = 100;
    step = 20;

    celcius = lower;
    while (celcius <= upper){
        fahr = (celcius * (9.0/5.0)) + 32;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
    return 0;
}