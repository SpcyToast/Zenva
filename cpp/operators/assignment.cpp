#include <iostream>

int main() {
  // this is just the equal sign =

  int age = 24;
  int newAge = 25;
  newAge = age;
  age = 25;

  // these 2 lines do the same thing
  age = age + 1;
  age += 1;

  // this appends the string
  std::string name = "Spcy";
  name += "Toast";
  std::cout << name << std::endl;
}