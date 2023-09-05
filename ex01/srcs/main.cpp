
#include <iostream>

#include "iter.hpp"

void	test_add_3_int() {
	std::cout << "--- Add 3 int ---" << std::endl;
	int		array[5] = { 1, 2, 3, 4, 5 };
	iter<int>(array, 5, add_3<int>);
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;
}

void	test_add_3_float() {
	std::cout << "--- Add 3 float ---" << std::endl;
	float	array[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	iter<float>(array, 5, add_3<float>);
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;
}

void	test_add_3_char() {
	std::cout << "--- Add 3 char ---" << std::endl;
	char	array[5] = { 'a', 'b', 'c', 'd', 'e' };
	iter<char>(array, 5, add_3<char>);
	for (int i = 0; i < 5; i++) {
		std::cout << "[" << i << "] = " << array[i] << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	test_add_3_int();
	test_add_3_float();
	test_add_3_char();

	return 0;
}
