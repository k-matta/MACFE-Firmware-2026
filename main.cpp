#include <iostream>

int main() {
  std::string name;
  std::cout << "Please enter your name:\n> ";
  std::cin >> name;
  std::cout << "\nHello " << name << std::endl;
  return 0;
}
