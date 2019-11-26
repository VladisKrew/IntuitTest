#include <iostream>
#include "task2.h"
#include "task3.h"

using namespace std;
int main()
{
	unsigned int userInput;
	cout << "Please enter the number to calculate all prime numbers sum within this range: " << endl;
	cin >> userInput;
	cout << "The sum of the prime numbers is: " << endl;
	cout << sumPrime(userInput) << endl;
	return 0;
} 