#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define limit 100 

int main(void) {
  int i;
  srand(time(0)); 
  for(i = 1; i <= 10; ++i){
    int randomNumber = rand();
    printf("%d - random number: %d\n", i, randomNumber % limit);
}
  return 0;
}
