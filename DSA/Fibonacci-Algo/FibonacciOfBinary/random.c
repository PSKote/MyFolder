/*Program to generate random number of size 10^6 and then convert it to binary*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int c, n;
  unsigned long int num=0, i=1;
//Generate random number of size 10^6 
  for (c = 1; c <= 1000000; c++) {
    n = rand() % 2;
    printf("%d", n);
  }
  return 0;
}
