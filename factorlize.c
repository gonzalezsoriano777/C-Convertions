#include <stdio.h>
#include <cs50.h>

int main(void)
{

   int numb = get_int("Number: ");
   long long v = 1;
   if(numb == 1 || numb == 0)
   {
       printf("%lli\n", v);
   }
   else
   {
       for(int i = 1; i < numb; i++)
       {
           v = v * 1;
       }
       printf("%lli\n", numb * v);
   }
}