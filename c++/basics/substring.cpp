#include <iostream>
#include <string>
 
int main()
{
    std::string a = "0123456789abcdefghij";
 
    // count is npos, returns [pos, size())
    std::string sub1 = a.substr(9);
    std::cout << sub1 << '\n';
}