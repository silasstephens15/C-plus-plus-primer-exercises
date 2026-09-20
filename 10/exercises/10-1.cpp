#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> v{0, 1, 1, 2, 3, 4, 4, 5, 6, 1};
  auto amount = count(v.begin(), v.end(), 4);
  std::cout << amount << std::endl;
  return 0;
}