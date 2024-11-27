#include <iostream>

int main() {
  // Add with       +
  // Subtract with  -
  // Multiply with  *
  // Divide with    /
  // Modulus with   %
  // you can also use + to append strings
  // always use << when appending mixed values, it's okay to use + when appending strings
  int age = 17;
  double incrementer = 1.0;
  int newAge = age + incrementer;

  std::cout << "You were " << age <<std::endl;
  std::cout << "You're now " << newAge <<std::endl;

  int decades = newAge % 10;
  
  std::cout << (10 - decades) << " more years until you reach another decade" << std::endl;

}