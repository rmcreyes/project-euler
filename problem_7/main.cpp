/**
 * Problem 8
 *
 * By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
 * we can see that the 6th prime number is 13.
 * What is the 10001st prime number?
 *
 * Answer: 104743
 */

#include <iostream>

#define N 10001

bool isPrime(int);

int main() {
	int count = 1;
	int i = 1;

	while (count < N) {
		i += 2;

		if (isPrime(i))
			count++;
	}

	std::cout << i << std::endl;

	system("PAUSE");
	return 0;
}

bool isPrime(int n) {
	if (n <= 1)
		return false;
	else if (n <= 3)
		return true;
	else if (n % 2 == 0 || n % 3 == 0) {
		return false;
	}

	int i = 5;

	while (i * i <= n) {
		if (n % i == 0 || n % (i + 2) == 0) {
			return false;
		}
		i += 6;
	}
	return true;
}