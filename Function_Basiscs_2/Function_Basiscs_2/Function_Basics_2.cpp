#include <iostream>

void cheers(int n);
double cube(double y);


int main()
{
	cheers(5);
	std::cout << "Give me a number = ";
	double x;
	std::cin >> x;
	double volume = cube(x);
	std::cout << "A " << x << "-foot cube has a volume of " << volume << " cubic feet";
	cheers(cube(4));
	return 0;
}

void cheers(int n)
{
	for (int i = 0; i < n; i++)
	std::cout << "Cheers! ";
	std::cout << "\n";
}

double cube(double y)
{
	return y*y*y;
}


