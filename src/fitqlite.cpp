#include <cstdlib>
#include <iomanip>
#include <iostream>
 
int main(int argc, char *argv[])
{
    std::cout << "argc == " << argc << '\n';
 
    for (int ndx = 0; ndx != argc; ++ndx) {
        std::cout << "argv[" << ndx << "] == " << std::quoted(argv[ndx]) << '\n';
    }
    /*...*/
 
    return EXIT_SUCCESS;
}