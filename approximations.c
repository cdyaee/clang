#include <stdio.h>
#include "approximations.h"


int main(void){
    float a,b;
    printf("Enter interval(a,b) :");
    scanf(" %f%f",&a,&b);
    printf("Midpoint: %f\nTrapezoidal: %f\nSimpson: %f",midpoint_N(a,b),trapezoidal_N(a,b),simpson_N(a,b));

    return 0;
}
