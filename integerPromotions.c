#include <stdio.h>

int main(){

   char a = 251;
   unsigned char b = a;

   printf("a = %c", a);
   printf("\nb = %c", b);

   if (a == b)
      printf("\n Same");
   else
      printf("\n Not Same\n");

   char d = 'h', e = '2', f = 'M';
   char g = (d * e) / f;
   
   printf("\ng as int: %d as char: %c\n", g, g);

   char h = 50;
   int i = h << 2;
   
   printf ("\ni as int: %d as char: %c\n", i, i);
   
   return 0;
}
