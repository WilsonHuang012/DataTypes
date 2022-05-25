#include <iostream>

int main()
{
	std::cout << "8 bits = 1 byte" << std::endl;
	std::cout << "32 bits = 4 bytes" << std::endl;
	std::cout << "64 bits = 8 bytes" << std::endl;
	std::cout << std::endl;
	std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
	std::cout << "char: " << sizeof(char) << " byte" << std::endl;
	std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
	std::cout << "double: " << sizeof(double) << " bytes" << std::endl;
	std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
	std::cout << "bool: " << sizeof(bool) << " bytes" << std::endl;
	std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
	std::cout << "long long: " << sizeof(long long) << " bytes" << std::endl;
	std::cout << "size_t: " << sizeof(size_t) << " bytes" << std::endl;
	std::cout << "unsigned int: " << sizeof(unsigned int) << " bytes" << std::endl;
	int* p;
	void* v;
	std::cout << "pointer of int: " << sizeof(p) << " bytes" << std::endl;
	std::cout << "pointer of void: " << sizeof(v) << " bytes" << std::endl;

	return 0;
}