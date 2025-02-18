#include <iostream>
#include <string>

int main() {
    std::cout << "Enter a number: ";

    int x{};        // good practice to always initialize variables
    std::cin >> x;  // same as say "x = whatever is in buffer"
    std::cout << "You entered " << x << '\n';  // std::endl is not needed here

    // fully invalid input causes sets an error flag std::ios::failbit
    // and further input is stoped.
    // the data is still in the buffer, but it can not be read into s
    // due to the error state.
    std::string s;  // if you type a fraction, it is left in buffer
    std::cin >> s;

    std::cout << "left over in buffer: " << s << '\n';

    return 0;
}