#include <iostream>
#include <Windows.h>

int main(){
 // CreateFileW(); UTF-16
 // CreateFileA(); ASCII 
LPCWSTR FilePath = L"C:\\Users\\D2D\\Documents\\c++_dev\\test.txt";
HANDLE hFile = NULL;
hFile = CreateFileW(
     FilePath,
     GENERIC_ALL,
     0,
     NULL,
     CREATE_ALWAYS,
     FILE_ATTRIBUTE_NORMAL,
     NULL
    );

    if (hFile == INVALID_HANDLE_VALUE){
            std::cout << "The File is not created With the error Number : " << GetLastError() <<std::endl;
            return -1;

    }else {
        std::cout << "File Created" << std::endl;

    }

}
