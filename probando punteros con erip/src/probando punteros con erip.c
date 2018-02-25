/*
 ============================================================================
 Name        : probando.c
 Author      : El Nacho
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void funcion (int* a, int* b){
	printf("a + b = %i", a+b );
		printf("a + b = %i", *a + *b );
		}
int main(void) {
	int a=1;
			int b=2;
			funcion(&a,&b);
			return 0;
}
