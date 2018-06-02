/**
 * Problem 5
 * 2520 is the smallest number that can be divided by each of
 * the numbers from 1 to 10 without any remainder.
 * What is the positive number that is evenly divisible by all
 * of the numbers from 1 to 20?
 *
 * Answer: 232792560
 */

#include <iostream>

int main() {
	for (int i = 20;; i += 20) {
		if (!(i % 11) && !(i % 12) && !(i % 13)&& !(i % 14)  && !(i % 15)
			&& !(i % 16) && !(i % 17) && !(i % 18) && !(i % 19)) {
			std::cout << i << std::endl;
			break;
		}
	}

	system("PAUSE");
	return 0;
}