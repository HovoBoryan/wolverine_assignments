#include <iostream>
#include <map>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int Div(int a, int b);

int main()
{
	int num1;
	int num2;
	char op;
	std::cout <<"Please enter two numbers for arithmetic operations :"<<std::endl;
	std::cin >> num1 >> num2 ;
	std::cout <<"Please enter the operation :"<<std::endl;
	std::cin >> op;
	
	std::map<char, int(*)(int, int)> calculator;
	calculator['+'] = &sum;
	calculator['-'] = &sub;
	calculator['*'] = &mul;
	calculator['/'] = &Div;
	
	std::cout << calculator[op](num1, num2);
}

int sum(int a, int b)
 {
	return a + b;
 }

int sub(int a, int b)
 {
	return a - b;
 }

int mul(int a, int b)
 {
	return a * b;
 }

int Div(int a, int b)
 {
	return a / b;
 }
