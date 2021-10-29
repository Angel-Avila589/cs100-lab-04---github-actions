#include "../header/rectangle.hpp"
#include <iostream>
int main(int arg1, int arg2) 
{
	Rectangle test(arg1, arg2);
	std::cout << test.area();
	std::cout << test.perimeter();
}
