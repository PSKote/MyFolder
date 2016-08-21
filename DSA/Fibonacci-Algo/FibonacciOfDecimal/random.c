/*Program to generate random number of size 10^6*/

#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int c, n;
 
  for (c = 1; c <= 1000000; c++) {
    n = rand() % 10;
    printf("%d", n);
  }
 
  return 0;
}
