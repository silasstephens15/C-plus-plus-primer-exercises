#include <iostream>

int main() {
  int a = 10;
  auto dec = [&a]() -> bool {
    if (a > 0) {
      --a;
      return false;
    } else if (a == 0) {
      return true;
    } else {
      return false;
    }
  };
  dec();
  std::cout << a << std::endl;
  while (!dec()) {
  }
  std::cout << a << std::endl;
  return 0;
}