#include "power.h"
#include <stdio.h>

int main(int argc, char** argv){
	int a = power(2, 3);
	int b = power(2, 4);
	int c = b - a;
	printf("%d", c - 8);
	return (c - 8);
}
//TOTEST
