#include <stdio.h>

main(){
    #define LOWER 0
    #define HIGHER 300
    #define STEP 20

    float celsius;
    int fahr;
    printf("Here's the table inverted!\n");
    for(fahr = HIGHER; fahr >= LOWER; fahr = fahr - STEP){
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3d %6.1f\n", fahr, celsius);
    }
}