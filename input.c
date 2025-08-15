#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  // scanf
   int num1;
   float num2;

  printf("Enter two numbers: ");
  scanf("%d %f", &num1, &num2);

  printf("You entered an integer: %d and a floating-point number: %6.2f\n", num1, num2);

  // getchar();
   char ch;

  printf("Enter a character: ");
  ch = getchar();

  puts("You entered: ");
  putchar(ch);

  printf("\nYou entered character: %c\n", ch);

  // Character sequence
   char chr;
    char word[10];

   int i = 0;
   printf("Enter characters. End by pressing the Enter key: ");

   while(1){
      chr = getchar();
      word[i] = chr;
      if (chr == '\n')
         break;
      i++;
   }
   printf("\nYou entered the word: %s", word);

  // String input using fgets()
  char name[20];

  printf("Enter your name: ");
  fgets(name, sizeof(name), stdin); // All the characters till you press Enter are stored in the variable.

  // Remove trailing newline character if present
  size_t len = strlen(name);
  if (len > 0 && name[len - 1] == '\n')
  {
    name[len - 1] = '\0';
  }

  printf("You entered the name: %s\n", name);
  return 0;
}
