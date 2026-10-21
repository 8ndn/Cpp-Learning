#include <iostream>
#include <string>
#include <thread>
#include <chrono>
void delay(int seconds) {
	std::this_thread::sleep_for(std::chrono::seconds(seconds));
}
int main()
{
	std::string Password;
	std::cout << "Give Me The Password : ";
	std::cin >> Password;
	std::cout << "Checking the Lenght..." << std::endl;
	delay(3);
	std::string passlen = (Password.length() >= 15) ? "Valid Password Length !\n" : "Not Valid Password Length ( 15 char required )\n";
	std::cout << passlen << std::endl;
	int count = 0;

	std::cout << "Checkling Password Content!" << std::endl;

	for (char i : Password) {

		if (std::string("0123456789!@#$%^&*_+-~`").find(i) != std::string::npos) {
			count++;
		
		}

	}
	delay(3);

	bool passcont = (count >= 3);

	if (passcont) {
	
		std::cout << "Strong Password Content !!" << std::endl;
	}
	else {
	
		std::cout << "Weak Password Content !!" << std::endl;
	
	}


} 
