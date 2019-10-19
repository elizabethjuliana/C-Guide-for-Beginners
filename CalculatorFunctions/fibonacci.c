#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* After the 48 fibonacci sequence we need to use a bigger variable, that because the int that is usually used only goes until the number
2147483647. A way to fix it is using a larger variable, the one we will use is the 'long long int' but instead using %d when showing
these variables in prints, we need to use %llu.  */

int main() {
	
 long long int first = 0;
 long long int second = 1;
 long long int next;
 /* Fibonacci starts with 0 + 1 = 1, so how we can't get the third number without the first and the second, i gave values to them, 
 so we can get until the third, and then the third will become the second, and the second will be the first, so 1 + 1 = 2. */
  int c, n;
	
	printf("Fibonacci sequence, give a positive number:");
	scanf("%d", &n);
  /*For is a counter, so he will start in 0 and will go until n (n is the sequence from fibonacci). Everytime it finishes the sequence
  is inside the brackets he will add +1 to the counter, so will be 0+1, then 0+1+1. Until c be more or equal to n, if n be a negative
  number we would be on an infinite loop.*/
	for (c=0; c<n; c++) {
      if (c<=1) 
        next = c;
      else {
			next = (first + second);
			first = second;
			second = next;
      }
		}
				
  printf("%d fibonacci sequence is %llu", n, next);
			
	return 0;
}
