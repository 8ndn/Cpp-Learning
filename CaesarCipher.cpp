#include <iostream>
#include <string>
#include <cstring>
#include <vector>

int main() {

	// encryption part
	std::cout << "Give me a text you want to encrypt : ";
	std::string text;
	std::getline(std::cin >> std::ws, text);
	int ShiftingN;
	std::cout << "Give me A shifting Key as a number : ";
	std::cin >> ShiftingN;
	std::cout << "Your Shifting Number Key Is : " << ShiftingN << std::endl;
	char op;
	std::cout << "Give Me the operator (+ or -) : ";
	std::cin >> op;

	for (char& c : text) {
		if (op == '+') {
			c = c + ShiftingN;
		}
		else if (op == '-') {
			c = c - ShiftingN;

		}
		else {
			std::cout << "Enter a valid operator please." << std::endl;
			break;
		}
	}

	std::cout << "Your Encrypted Text Is : " << text << std::endl;

	// decryption part

	for (char &p : text) {
		if (op == '+') {
		
			p = p - ShiftingN;
		}
		else if (op == '-') {
			p = p + ShiftingN;
		
		}
		else {
			break;
		
		}
	
	}
	std::cout << "Your text After Decryption again : " << text << std::endl;

	return 0;
}
