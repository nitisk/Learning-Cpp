#include <iostream>

void Log(const char* message);

int main() //calls log which is defined inside log.cpp file
{
    Log("Hello World! ");
    std::cin.get();
}

//g++ -Wall main.cpp log.cpp -o main - to compile the codes into main.exe which is ./main in linux