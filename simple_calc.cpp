#include <iostream>

int main()
{
	double a, b;
	char op;
	std::cout << "Enter the Value of a : ";
	std::cin >> a;

	std::cout << "Enter The Value Of b : ";
	std::cin >> b;

	std::cout << "Enter The Operator ( + , - , * , / ): ";
	std::cin >> op;

	switch (op) {
	case '+':
		std::cout << "The Result of Addition is : " << (a + b) << std::endl;
		break;
	case '-':
		std::cout << "The Result of subtraction is : " << (a - b) << std::endl;
		break;
	case '*' :
		std::cout << "The Result Of multiplying is : " << (a * b) << std::endl;
		break;
	case '/': 
		if (b != 0) {
			std::cout << "The Result Of the division is : " << (a / b) << std::endl;
			break;
		}
		else {
			std::cout << "Error Because you Divided a By 0 !!";
				break;
		}
	default : 
		std::cout << "Invalid Operator !!";
		break;
	
	}

}

