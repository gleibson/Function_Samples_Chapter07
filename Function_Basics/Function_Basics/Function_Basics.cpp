#include <iostream>

//prototype
void cheers(int n);  //no return value
double cube(double y);

int main()
{
	int x;
	double n;
	std::cout << "insert the value = ";
	std::cin >> x;
	cheers(x); // calling
	std::cout << std::endl;
	std::cout << "Insert the value to output the cube = ";
	std::cin >> n;
	std::cout << cube(n) << std::endl;

	return 0;

}

void cheers(int n) //definition
{
	for(int i = 0; i < n; i++)
	std::cout << "cheers ";
}

double cube(double y)
{
	return y*y*y;
}