#include <iostream>

int main(){
  int age = 24;
  std::cout << "current age is " << age << std::endl;
  age++;
  std::cout << "next year age is " << age << std::endl;
  age--;
  std::cout << "This year age is " << age << std::endl;
  int addAge;
  std::cout << "Input number to find out how old you'll be after all those years" << std::endl;
  std::cin >> addAge;
  std::cout << "You will be " <<  (age += addAge) << " after " << addAge << " years" << std::endl;
}