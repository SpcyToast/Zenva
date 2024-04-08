#include <iostream>

int main() {
  // integers are positive, negative, or 0
  // can be signed or unsigned
  // can replace with short, longs, or long longs
  int health; // assigns default value of 0
  std::cout << health << std::endl;
  health = 50;
  std::cout << health << std::endl;
  health = -50;
  std::cout << health << std::endl;

  // unsigned integer (only positive values assigned here) used for comunicating better intent
  uint age; 
  age = 23;
  std::cout << age << std::endl;
  uint nAge = -23;
  std::cout << nAge << std::endl; // returns 4294967268, 

  // short for short range of values
  short shortInt = 65535; // short limit

  // long for long range of values
  long longInt = 9223372155555555555;

  // long long for really long range of values
  long long  longLongInt = 5000000000000000000;
  
 
  std::cout << "short " << shortInt << std::endl;
  std::cout << "long " << longInt << std::endl;
  std::cout << "long long " << longLongInt << std::endl;
}