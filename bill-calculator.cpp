#include <iostream>
int main()
{
	double price;
	double taxRate;
	double quantity;
	double discount;
	double total;

	std::cout << "The Price : ";
	std::cin >> price;

	std::cout << "The Quantity : ";
	std::cin >> quantity;

	std::cout << "The taxes (%) : ";
	std::cin >> taxRate;

	std::cout << "The Discount : ";
	std::cin >> discount;

	total = price * quantity;
	double tax = total * (taxRate / 100);
	double FinalPrice = tax + total - discount;

	std::cout << "Your Total Price : " << total << std::endl;
	std::cout << "Your tax : " << tax << std::endl;
	std::cout << "Your FinalPrice : " << FinalPrice << std::endl;
		
	return 0;
}

