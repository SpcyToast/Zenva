#include <iostream>

int main() {
  int intInput;
  std::string stringInput;
  std::cout << "what is your name?" << std::endl;
  std::cin >> stringInput;
  std::cout << "Hi there, " + stringInput << std::endl;
}