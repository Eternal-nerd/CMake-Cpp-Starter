#include <cstdlib>
#include <iostream>

int main() {
  try {
    std::cout << "Example Program. \n";
    // DO STUFF HERE
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
