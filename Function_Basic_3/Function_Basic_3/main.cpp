#include <iostream>

void n_chars(char, int);

int main()
{
	int times;
	char ch;

	std::cout << "Enter the characteres ";
	std::cin >> ch;

	while (ch != 'q') // q to quit
	{

		std::cout << "Enter a integer: ";
		std::cin >> times;
		n_chars(ch, times);
		std::cout << "\nEnter  another character or press the " << "q-key to quit ";
		std::cin >> ch;
		
	}
	std::cout << "The values of times is " << times << "\n";
	std::cout << "Bye";

	std::cin.get(ch);
	return 0;

}


void n_chars(char c, int n) //display c of times
{
 
	while (n-- > 0)
		std::cout << c; //continue until n reaches 0; 

}