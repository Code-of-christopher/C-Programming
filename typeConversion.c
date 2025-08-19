#include <stdio.h>
#include <stdlib.h>

float divide(int, int);

int main()
{

    // Implicit type conversion
    int i = 17;
    char c = 'c'; /* ascii value is 99 */

    int sum;
    sum = i + c;

    printf("Value of sum: %d\n", sum);

    char a = 'A';
    float b = a + 5.5;

    printf("Value of sum:  %f\n", b);

    // Explicit type conversion
    int u = 10, v = 4;
    float w = u / v;

    printf("%f\n", w);

    int x = 10, y = 4;
    float z = (float)x / y;

    printf("%f\n", z);

    // Typecasting Function in C

    // The atoi() Function
    // The atoi() function converts a string of characters to an integer value. The function is declared in the stdlib.h header file.
    char str[] = "123";
    int num = atoi(str);

    printf("%d\n", num);

    // The itoa() Funtion
    // The itoa() Funtion converts an integer to a null terminated string of characters. The function is declared in the stdlib.h header file.
    int num1 = 123;
    char str1[10];

    // itoa(num1, str1, 10);  //Does not exist on Linux GCC

    // Alternative is the sprintf() or snprintf() Function
    sprintf(str1, "%d", num1); // Convert int to string
    // or snprintf(str1, sizeof(str1), "%d", num1);

    printf("%s\n", str1);

    // Malloc Function
    int n = 5;
    int *ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values
    for (int i = 0; i < n; i++)
    {
        ptr[i] = (i + 1) * 10;
    }

    // Print values
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", ptr[i]);
    }

    free(ptr); // free allocated memory

    // In function arguments and return values − You can apply the typecast operator to formal arguments or to the return value of a user-defined function.
    int e = 10, f = 4;
    float g = divide(e, f);

    printf("%f\n", g);

    return 0;
}

float divide(int a, int b){
   return (float)a/b;
}
