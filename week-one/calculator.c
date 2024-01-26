#include <stdio.h>


int main(void) {
    long x;
    long y;
    printf("x: ");
    scanf("%lii", &x);
    printf("y: ");
    scanf("%li", &y);

    // type casting
    float z = (float) x / (float) y; //division.... double uses twice the number of a float to handle floating point impreccision
    printf("x / y = %f\n", z);

    printf("x + y = %li\n", x + y); // addition
}
