#include <iostream>
#include <string>
//Program to demonstrate personalized "Hello World" 
int main() {
  std::string name; // Variable to store user's name
  // Prompt user for their name
  std::cout << "Enter your name: ";
  std::cin >> name; // Read the input
  // Display personalized greeting
  std::cout << "Hello world from " << name << std::endl;
  return 0; // Program executed successfully}
>>>>>>> 0a4306a (Apply Google code style with clang-format)
