#include <stdio.h>
#include <math.h>

int main() {
    float radius, area, circumference;
    float PI = 3.142;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    if (radius < 0) {
        printf("Error: Radius cannot be negative.\n");
        return 1;
    }

    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    
    printf("Area: %.2f\n", area);
    printf("Circumference: %.2f\n", circumference);
    
    return 0;
}