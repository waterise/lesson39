#include <iostream>
#include <string>
using namespace std;

bool isPrimeNumber(int number) {	

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			return false;
		}
	}

	return true;
}