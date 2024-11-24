#include <iostream>

int main() {
  // integers are positive, negative, or 0
  // can be signed or unsigned
  // a signed integer is when the integer can be positive or negative
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
  long longInt = 9223372036854775807; 

  // long long for really long range of values
  long long  longLongInt = 9223372036854775807;
  
 
  std::cout << "short " << shortInt << std::endl;
  std::cout << "long " << longInt << std::endl;
  std::cout << "long long " << longLongInt << std::endl;

  // doubles represent decimal numbers
  // range of double is 2.3E-308 to 1.7E+308
  double price = 19.99;

  double balance;
  std::cout << "Default double values are really small and close to 0 but not 0: " << balance << std::endl;

  balance = balance + price;
  std::cout << balance << std::endl;
  balance = balance - 20;
  std::cout << balance << std::endl;

  // floats are similar to doubles but less precise
  // range of float is 1.2E-38 to 3.4E+38
  float bankBalance = 29.99;
  
  // long doubles are used for larger values similar to a long integer
  // range of long double is 3.4E-4932 to 1.1E+4932
  float largeBalance = 21213;

}