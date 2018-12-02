#include <stdio.h>
#include "approximations.h"


int main(void){
    float a,b;
    printf("Enter interval(a,b) :");
    scanf(" %f%f",&a,&b);
    printf("Midpoint: %f\nTrapezoidal: %f\nSimpson: %f",midpoint_10000(a,b),trapezoidal_10000(a,b),simpson_10000(a,b));

    return 0;
}
