#include <iostream>

size_t call_counter() {
  static size_t ctr = 0;
  return ctr++;
}

int main() {
  for (size_t i = 0; i != 10; ++i)
    std::cout << call_counter() << std::endl;
  return 0;
}