#include <stdio.h>

int main()
{
   char usr;
   scanf("%c", &usr);

   printf("%c", usr & 0x5f);

   return 0;
}
