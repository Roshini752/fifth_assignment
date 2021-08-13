
#include <stdio.h>
 int main()
{
   int x=9, y=7, *a, *b, temp;
   printf("Before Swapping\nx = %d  y = %d\n", x, y);
   a = &x;//a is pointer storing the address of x
   b = &y;//b is pointer storing the address of y
 
   temp = *b;   //by using b pointer storing data to temp which is pointed by b
   *b = *a;    // a to b
   *a = temp;  //temp to a 
 
   printf("After Swapping\nx = %d  y = %d\n", x, y);
   return 0;
}