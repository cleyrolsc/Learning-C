#include <stdio.h>

main(){
    #define LOWER 0
    #define HIGHER 300
    #define STEP 20

    float fahr, celsius;
    fahr = 0;
    printf("Here's a fahr to cel converter\n");
    while(fahr <= HIGHER){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}