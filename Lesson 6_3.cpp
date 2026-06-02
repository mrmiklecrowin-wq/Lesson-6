#include <iostream>
#include <windows.h>

size_t output_result (size_t number)
{
	size_t result = 0;
	if( number == 1 )
	{
	return 0;
	}
	else if( number == 2 ){	
	return 1;
	}
	else{	
	return output_result(number - 1) + output_result(number - 2) ;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	size_t number = 0;
	
	std::cout << " Введите число: ";
	std::cin >> number;
	
	std::cout<< " Числа Фибоначчи: ";	
	
	for(int i = 1;i < number && number > 2;i++){
	int result = output_result(i);	
	std::cout << result << " ";	
	}	
	
	return 0;
}
