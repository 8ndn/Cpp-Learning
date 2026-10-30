#include <iostream>
#include <cstring>
#include <string>
#include <vector>
void scanDir(std::vector<std::string> dirs , int index) {

	if (index >= dirs.size()) return;

	std::cout << "Scanning Directory : " << dirs[index] << std::endl;
	scanDir(dirs, index + 1);

}
 
 
int main()
{
	std::vector<std::string> fakeDir = { "C:\\Windows" , "C:\\Users" , "C:\\Apps" , "C:\\Program Files" };

	scanDir(fakeDir , 0 );




	return 0;
}
