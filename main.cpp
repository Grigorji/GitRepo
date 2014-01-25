#include <iostream>
#include "add.h"
#include "multiply.h"
#include "pow.h"

int main() {
	std::cout << pow(add(multiply(2, 2), 4), 3) << std::endl;

	system("pause");
	return 0;
}