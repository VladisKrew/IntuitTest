#include <iostream>
#include "task2.h"
using namespace std;

int main() {
	unsigned int userInput;
	cin >> userInput;
	cout << "Please enter the number to check if it's a prime number or not: " <<endl;
	cout << checkPrime(userInput) << endl;
	cout << "Please enter the row number to get the corresponding prime: " <<endl;
	cout << nPrime(userInput) << endl;
	cout << "Let's find the closest prime number to the number you enter: " << endl;
	cout << nextPrime(userInput) << endl;
	return 0;
}