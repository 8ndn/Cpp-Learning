#include <iostream>
#include <iomanip>
int main() {
	unsigned char shellcode[]{
	0x90,0x90,0x90,0xCC,0xC2,0x0C
	};

	unsigned char* ptr = shellcode;
	unsigned char*& ref = ptr;

	std::cout << "[+] ShellCode Stored At Address : " << static_cast<void*>(ref) << std::endl;

	std::cout << "[+] ShellCode Bytes : ";

	for (std::size_t i = 0; i < sizeof(shellcode); i++) {
		std::cout << std::hex << std::uppercase << "0x" << std::setw(2) << std::setfill('0') << static_cast<int>(ref[i]) << " ";
	
	}
	std::cout << std::endl;

	std::size_t size = sizeof(shellcode);
	unsigned char* dynamicMem = new unsigned char[size];
	for (std::size_t i = 0; i < size; i++) {
		dynamicMem[i] = shellcode[i];
	}

	std::cout << "[+] The ShellCode Copied To HEAP at address : " << static_cast<void*>(dynamicMem) << std::endl;

	std::cout << "[+] HEAP bytes : ";
	for (std::size_t i = 0; i < size; i++) {
	
		std::cout << std::hex << std::uppercase << "0x" << std::setw(2) << std::setfill('0') << static_cast<int>(dynamicMem[i]) << "";
	}
	delete[] dynamicMem;
	return 0;
}
