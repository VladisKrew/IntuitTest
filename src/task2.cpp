#include <math.h>
bool checkPrime(unsigned int value) {

	for (int i = 2; i <= sqrt(value); i++) {
		if (value % i == 0) {
			return 0;
		}
	}
	return 1;
}


unsigned long long nPrime(unsigned n)
{
	unsigned long long counter = 0;
	unsigned long long j = 2;

	for (unsigned int i = 2; n != counter; i++)
	{
		if (checkPrime(i) == 1) counter++;
		j = i;
	}

	return j;

}

unsigned long long nextPrime(unsigned long long value)
{
	value++;
	unsigned long long j = value;
	for (unsigned int i = 0; i <= j; i++)
	{
		if (checkPrime(value) == 1) {
			return value;
		}
		else value++;
	}

} 