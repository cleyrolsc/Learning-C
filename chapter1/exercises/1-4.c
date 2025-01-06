#include <stdio.h>

main(){
    #define LOWER 0
    #define HIGHER 300
    #define STEP 20

    float fahr = 0;
    float celsius = 0;

    for(fahr = 0; fahr <= HIGHER; fahr = fahr + STEP){
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}
