#include <stdio.h>

unsigned long factorial(unsigned long n) {
   //base case
   if(n == 0) {
      return 1;
   } else {
      return n * factorial(n-1);
   }
}

void main() {

   printf("%ld\n", factorial(20));

}
