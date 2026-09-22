#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
  std::istream_iterator<int> in_iter(std::cin), eof;
  std::vector<int> v(in_iter, eof);
  sort(v.begin(), v.end());
  std::ostream_iterator<int> out_iter(std::cout, " ");
  for (auto e : v)
    *out_iter++ = e;
  std::cout << std::endl;
  return 0;
}