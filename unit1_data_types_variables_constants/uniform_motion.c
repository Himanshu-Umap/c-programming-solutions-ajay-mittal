#include <stdio.h>

void main(){
    float u, v, a, t;

    printf("Enter the initial velocity u in m/s: ");
    scanf("%f", &u);
    printf("Enter the acceleration a in m/s^2: ");
    scanf("%f", &a);
    printf("Enter the time t in seconds: ");
    scanf("%f", &t);

    // v = u + a*t
    v = u + a*t;
    printf("The final velocity v after %6.2f seconds at acceleration %6.2fm/s^2 is %6.2f\n", t, a, v);
}