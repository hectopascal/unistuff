//
//  main.c
//  memory
//
//  Created by Richard Buckland on 20/11/12.
//
 
#include <stdio.h>
#include <stdlib.h>
 
long add (int x, int y);
 
int main(int argc, const char * argv[]) {
   printf("size of int is %d\n",sizeof(int));
   printf("size of long is %d\n",sizeof(long));
   //printf("size of signed long is %d\n",sizeof(signed long));
   //printf("size of unsigned long is %d\n",sizeof(unsigned long));
   printf("size of short is %d\n",sizeof(short));
   printf("size of char is %d\n",sizeof(char));
   printf("size of double is %d\n",sizeof(double));
   printf("size of float is %d\n",sizeof(float));
   
   int x;
   int y;
   long total;
 
   x = 40;
   y = 2;
 
   total = add (x, y);
 
   printf("the sum of %d and %d is %ld\n", x, y, total);
   printf("the address of x is %p\n",&x);
   printf("the address of y is %p\n",&y);
   printf("the address of total is %p\n",&total);
   char c ='a';
 
   unsigned long ul       = 0;
   unsigned int ui        = 1;
   unsigned long long ull = 2;
   unsigned short us      = 3;
 
   signed long sl       = -23543;
   signed int si        = 5;
   signed long long sll = 6;
   signed short ss      = 7;
    printf("%ld\n",sl);
 
 printf("the address of sl is %p\n",&sl);
   long l       = 2147483647;
   int i        = 9;
   long long ll = 10;
   short s      = 11;
   
   float f = 3.1;
   double d = 3.14;
 
   // add them all together just to make use of them so the compiler
   // doesn't grumble that they are unused in the program
 
   double grandTotal;
   grandTotal =  c +
                 ul + ui + ull + us +
                 sl + si + sll + ss +
                  l +  i +  ll +  s +
                  f + d;
 
   printf ("all these things added together make %f\n", grandTotal);
 
   return EXIT_SUCCESS;
}
 
long add (int x, int y) {
   long answer;
   answer = x + y;
 
   return answer;
}
