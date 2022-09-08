#include <stdio.h>
#include <stdlib.h>

/*

Problem 1: Multiples of 3 or 5

If we list all the natural numbers below 10 that are 
multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of 
these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Answer: 233168

*/

int main() {
    int* multiples = (int*) malloc(500 * sizeof(int));

    int j = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0|| i % 5 == 0) {
            multiples[j] = i;
            j++;
        }
    }

    int sum = 0;
    for (int i = 0; i < j; i++) {
        sum = sum + multiples[i];
    }

    printf("%d\n", sum);
    return 0;
}