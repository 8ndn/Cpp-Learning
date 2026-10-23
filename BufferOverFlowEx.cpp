#include <iostream>
#include <cstring>

void vulnerable() {
/* We can get a buffer overflow because the array has a capacity of 5 bytes (indices 0–4), but we haven't implemented any input size limits.
A Hacker could enter more characters than the buffer can hold, potentially causing memory corruption or exploiting the vulnerability */
	char buffer[5];
	std::cout << "Enter your name : ";
	std::cin >> buffer; // unsafe
	std::cout << "Your name is : " << buffer << std::endl;

}
void solution() {
	char buffer[5];
	std::cout << "Enter your name : ";
	std::cin.getline(buffer, sizeof(buffer)); // safe
	std::cout << "Your name is : " << buffer << std::endl;

}
int main()
{

	vulnerable();
	good(); // we have a buffer input limits inside this function, so the Hacker can't bypass it.
	return 0;
}

