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
	int i,product;
	for(i=0; i<LOOP; i++) {
		product = input*i;
		printf("%d times %d equals %d\n", input, i, product);
	}
}
