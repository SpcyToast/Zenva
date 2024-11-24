#include <iostream>

int main(){

  // Strings are a assortment of strings in between ""
  // they are part of the standard library and require std::

  std::string mixedString = "ABCdef123%&^,.;";
  std::cout << mixedString << std::endl;

  int number = 1;
  // char 1 and string 1 are different
  char one = '1';
  std::string stringOne = "1";
}