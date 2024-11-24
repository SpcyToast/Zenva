#include <iostream>

int main() {

  // characters represent single letters, numbers or symbols
  // each charater must be in between '' and has a unique unicode representation

  char comma = ',';
  std::cout << comma << std::endl;
  char a = 'a';
  std::cout << a << std::endl;
  char space = ' ';
  std::cout << space << std::endl;

  // char 1 is different to int 1 but they look the same in the output
  char one = '1';
  std::cout << one << std::endl;
  int numOne = 1;
  std::cout << numOne << std::endl;

}