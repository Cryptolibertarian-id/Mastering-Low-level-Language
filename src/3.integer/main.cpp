#include <iostream>

int func(int size)
{
    int array[size]; // size is not determined at compile time
}

int main() {
	int x = 8;
	int y = 5;
	std::cout << x / y;
	return 0;
}

