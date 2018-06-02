/**
 * Problem 4
 *
 * A palindromic number reads the same both ways. The largest
 * palindrome made from the product of two 2-digit numbers is
 * 9009 = 91 * 99.
 * Find the largest palindrome made from the product of two
 * 3-digit numbers.
 *
 * Answer: 906609
 */

#include <iostream>

bool isPalindrome(int);

int main() {
	int num = 0;

	for (int num1 = 100; num1 <= 999; num1++) {
		for (int num2 = 100; num2 <= 999; num2++) {
			if (isPalindrome(num1 * num2) && (num < num1 * num2)) {
				num = num1 * num2;
			}
		}
	}

	std::cout << num << std::endl;

	system("PAUSE");
	return 0;
}

bool isPalindrome(int n) {
	int digits[6];
	int size = 0;

	while (n > 0) {
		digits[size] = n % 10;
		n /= 10;
		size++;
	}

	for (int i = 0; i < size; i++) {
		if (digits[i] != digits[size - 1 - i])
			return false;
	}

	return true;
}