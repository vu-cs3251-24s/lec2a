/* @author G. Hemingway, copyright @2024 - All rights reserved */
#include <iostream>

// Global variable - accessible from anywhere
int testGlobal = 10;

/**
 * Simple function to explore basic program structure
 * @param value
 */
void simpleFunction(int value) {
  value = 10;
  std::cout << value << std::endl;
}

/**
 * Entry point for all programs
 * @param argc - number of command line arguments
 * @param argv - space separated command line arguments
 * @return return code
 */
int main(int argc, char **argv) {
  // Local variable - only visible within this function
  const std::string localString = "This is a simple string";
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Global is: " << testGlobal << std::endl;
  std::cout << "Program name is: " << argv[0] << std::endl;

  // Call to function - pass the number of command line arguments
  simpleFunction(argc);
  return 0;
}
