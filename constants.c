#include <stdio.h>

#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    const float PI = 3.14159265359;
    float radius = 5;
    float area = PI * radius * radius;
    printf("The area of the circle is: %f\n", area);
    printf("Storage size for area : %zu \n", sizeof(area));

    // Using #define to create a constant
    int area1;
    area1 = LENGTH * WIDTH;
    printf("length: %d width: %d", LENGTH, WIDTH);
    printf("%c", NEWLINE);
    printf("value of area: %d\n", area1);
    printf("Memory address of area is: %p\n", (void *)&area1);

    // Changing the value of a constant
    const int x = 10;
    printf("Initial Value of Constant: %d\n", x);

    // y is a pointer to constant x
    int *y = &x;

    // assign new value
    *y = 100;
    printf("Value of Constant after change: %d\n", x);
    return 0;
};