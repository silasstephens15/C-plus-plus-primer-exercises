#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto sum = accumulate(v.cbegin(), v.cend(), 0);
  std::cout << sum << std::endl;
  return 0;
}