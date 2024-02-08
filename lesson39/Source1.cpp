#include <iostream>
#include <ctime>

using namespace std;

bool isPrimeNumber(int number);

int main() {
	int num;
	cout << "enter number: ";
	cin >> num;

	cout << (isPrimeNumber(num) ? "Yes" : "No") << endl;

	return 0;
}