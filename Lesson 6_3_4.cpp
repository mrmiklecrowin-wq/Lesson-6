#include <iostream>
#include <windows.h>

size_t output_result (int number)
{
	int i = 0;
	size_t first_number = 0;
	size_t second_number = 1;
	size_t result = 0;
	
	if ( number > 2 ){
	
	std::cout<< " Числа Фибоначчи: " << first_number << " " << second_number << " ";
	
	while ( i < number - 2 && number > 2 )
		{
			result = first_number + second_number;
			first_number = second_number;
			second_number = result;	
			std::cout << result << " ";
			i++;
		}	
	}
	else if( number == 2 ){
		std::cout<< " Числа Фибоначчи: " << first_number << " " << second_number;
	}
	else {
		std::cout<< " Числа Фибоначчи: " << first_number;
	}
	return 0;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	
	int number = 0;
	size_t result = 0;
	
	
	std::cout << " Введите число: ";
	std::cin >> number;
	
	output_result(number);
	
	
return 0;
}
