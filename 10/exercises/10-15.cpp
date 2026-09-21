#include <iostream>

int main() {
  int a = 1;
  auto fn = [a](int p) { return a + p; };
  std::cout << fn(3) << std::endl;
  return 0;
}