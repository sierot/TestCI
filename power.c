#include "power.h"

int power(int a, int n) {
	if (n == 0) return 1;
	int i = 0;
	int base = a;
	for (; i < n - 1; i++) {
		a *= base;
	}
	return a;
}
