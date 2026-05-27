#include<iostream>
#include<windows.h>

	int output_result(int value, int power, int result)
	{	
	for(int i = 0; i < power; i++)
	{
	result *= value;
	}		
	std::cout << value << " в степени " << power << " = " << result << std::endl;		
	return result;	
	}


int main(int argc,char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int value = 5;
	int power = 2;
	int result = 1;
	
	result = output_result(value,power,result);

	value = 3;
	power = 3;
	result = 1;
	
	result = output_result(value,power,result);	

	value = 4;
	power = 4;
	result = 1;
	
	result = output_result(value,power,result);
	
	return 0;
}
