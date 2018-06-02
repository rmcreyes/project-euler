/**
 * Problem 3
 *
 * The prime factors of 13195 are 5, 7, 13 and 29.
 * What is the largest prime factor of 600851475143?
 *
 * Answer: 6857
 */

#include <iostream>
#include <cmath>

#define NUM 600851475143

int main() {
	double n = NUM;

	for (double d = 2; d*d < n; d++) {
		while (fmod(n, d) == 0)
			n /= d;
	}

	std::cout << n << std::endl;

	system("PAUSE");
	return 0;
}