// David Ramirez
// Daviduramirez@csu.fullerton.edu
// @Davidram
// Partners: @jastralogy

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() - 1 != 3) {
    std::cerr << "error: you must apply three arguments" << std::endl;
    return 1;
  }

  std::string protein = arguments[1];
  std::string bread = arguments[2];
  std::string condiment = arguments[3];

  std::cout << "Your order:" << std::endl;
  std::cout << "A " << protein << " sandwich on " << bread << " with ";
  std::cout << condiment << "." << std::endl;

  return 0;
}
