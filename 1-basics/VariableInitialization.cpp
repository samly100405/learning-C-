#include <iostream>

int main() {
  int a;  // default-initialization (no initializer)
  std::cout << a << std::endl;

  // Traditional initialization forms:
  int b = 5;  // copy-initialization (initial value after equals sign)
  int c(6);   // direct-initialization (initial value in parenthesis)
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  // Modern initialization forms (preferred):
  int d{7};  // direct-list-initialization (initial value in braces)
  int e{};   // avalue-initialization (empty braces)
  std::cout << d << std::endl;
  std::cout << e << std::endl;
}