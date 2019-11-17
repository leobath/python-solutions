#include <iostream>
#include <string>

using std::cout; 
using std::cin;

int main() 
{
    std::string someString = "to mouni kai to balloni\n oso to travas tentwnei";
    int slices = 5;
    // cin >> someString;
    getline(cin, someString);
    cout << "srting variable\n" << someString.size() << std::endl;
    cout << "console message...\n" << slices << std::endl;
    printf("%i",slices);
    return 0;
}