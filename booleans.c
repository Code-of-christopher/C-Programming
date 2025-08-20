#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// int main()
// {
//     bool a = true;
//     bool b = false;

//     printf("True: %d\n", a);
//     printf("False: %d\n", b);

//     bool x;
//     x = 10 > 5;

//     if (x)
//         printf("x is True\n");
//     else
//         printf("x is False\n");

//     bool y;
//     int marks = 40;
//     y = marks > 50;

//     if (y)
//         printf("Result: Pass\n");
//     else
//         printf("Result: Fail\n");

//     return 0;
// }

int main(void){

   bool loop = true;
   int i = 0;
    
   while(loop){
      i++;
      printf("i: %d \n", i);
    
      if (i >= 5)
         loop = false;
   }
   printf("Loop stopped!\n");
   return EXIT_SUCCESS;
}