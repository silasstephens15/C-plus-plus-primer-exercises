#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;

bool fiveOrMore(const string &s) { return s.size() >= 5; }

int main() {
  vector<string> unsorted{"Hello", "There", "A", "Ball"};
  auto end = partition(unsorted.begin(), unsorted.end(), fiveOrMore);
  vector<string> v(unsorted.begin(), end);
  for (const auto &s : v)
    std::cout << s << " ";
  return 0;
}