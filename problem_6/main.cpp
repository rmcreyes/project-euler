/**
 * Problem 6

 * The sum of the squares of the first ten natural numbers is,
 *		1^2 + 2^2 + ... + 10^2 = 385
 * The square of the sum of the first then natural numbers is,
 *		(1 + 2 + ... + 10)^2 = 3025
 * Hence the difference between the sum of the squares of the first ten
 * natural numbers and the square of sum is 3025 - 385 = 2640.
 * Find the difference between the sum of the squares of the first one hundred
 * natural numbers and the square of the sum.
 *
 * Answer: 25164150
 */

#include <iostream>

int main() {
	int sum_of_squares = 0, sum = 0;

	for (int i = 1; i <= 100; i++) {
		sum_of_squares += i * i;
		sum += i;
	}

	int square_of_sums = sum * sum;

	std::cout << square_of_sums - sum_of_squares << std::endl;

	system("PAUSE");
	return 0;
}