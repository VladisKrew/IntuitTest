#include "task2.h"
#include <iostream>


unsigned long long sumPrime(unsigned int hbound)
{
	unsigned long long total = 0;
	for (unsigned long long i = 2; i < hbound; i++)
	{
		if (checkPrime(i) == 1) {
			total = total + i;
		}
	}
	return total;
} 