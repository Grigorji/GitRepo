#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"

void areEquals(double expected, double got) {
	if (expected != got) {
		std::cout << "Expected:" << expected << "but got value: " << got << "\n";
	}
	else {
		std::cout << "Test passed!\n";
	}
}

int main() {
	areEquals(64, pow(8, 2));
	areEquals(1, pow(8, 0));
	areEquals(16, multiply(4,4));
	areEquals(4, add(2, 2));
	std::cout << "End of tests!" << std::endl;
	system("pause");
	return 0;
}