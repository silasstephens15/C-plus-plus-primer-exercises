#include <algorithm>
#include <iostream>
#include <list>
#include <vector>

int main() {
  std::vector<int> v{1, 1, 2, 3, 4, 5};
  std::list<int> l;
  unique_copy(v.cbegin(), v.cend(), back_inserter(l));
  for (auto i : l)
    std::cout << i << " ";
  std::cout << std::endl;
  return 0;
}