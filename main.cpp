#include <iostream> //preprocessor statement
//includes all the contents of iostream into this file
//iostream is a header file, declaration for function cout

//first compiler preprocceses all your preprocessor statements
//cpp files get compiled but not the header files

int main() //main function is the entrypoint for the application
{
    //statements get excuted in order - line by line
    //there flow/order can be changed by control-flow statements
    
    std::cout << "Hello World!" << std::endl;
    
    // << is an operator here
    // operators are functions only
    
    //we are pushing string into cout and then pushing endline 
    //endline tells console to move to next line
    
    std::cin.get();
    
    //program execution will stop on this line until we press enter
    //next line is nothing so it will execute noting and return zero
}

//this file is a source file

//every cpp file gets individually compiled into an obj file
//"linker" takes all the obj files and stitches them all together
