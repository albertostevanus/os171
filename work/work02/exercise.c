/*
 * Name: Alberto
 * NPM: 1506757756
 * Class: B
 * Comment: I don't know
 */

#define LOOP 4

#include <stdio.h>

void main() {
	int input = 3;
	int product = 0;
	int i = 1;
	while(i != LOOP + 1) {
		product = product + input;
		printf("%d times %d equals %d\n", input, i, product);
		i++;
	}
}
