#include <iostream>

int main() {
  // initialise variables before taking in inputs
  // inputs are primative, spaces break inputs into multiple inputs
  int intInput;
  std::string stringInput;
  std::cout << "what is your name?" << std::endl;
  std::cin >> stringInput;
  std::cout << "Hi there, " + stringInput << std::endl;
}