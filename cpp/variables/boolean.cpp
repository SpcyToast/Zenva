#include <iostream>

int main() {
  // variable declaration, use camelcase
  // type name;
  
  // variable assignment
  // name = value;
  
  // or combine both steps
  // type name = value;

  // a boolean are either true or false
  bool isOn = true; 
  bool isGameOver;
  isGameOver = false;

  // Can output variables
  // << std::endl; to end line. displays % at the end of the line if not present
  std::cout << isOn << std::endl;
  std::cout << isGameOver << std::endl;

  // can reassign varibles 
  isGameOver = true;
  std::cout << "Game is Over? " << isGameOver << std::endl; // attempt at double output
}