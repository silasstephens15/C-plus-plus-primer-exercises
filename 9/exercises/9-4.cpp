#include <iostream>
#include <vector>

using std::vector;

bool find(vector<int>::const_iterator start, vector<int>::const_iterator end,
          int value) {
  while (start != end) {
    if (*start == value) {
      return true;
    }
    ++start;
  }
  return false;
}

int main() {
  vector<int> v1{1, 2, 3, 4};
  bool result1 = find(v1.begin(), v1.end(), 5);
  bool result2 = find(v1.begin(), v1.end(), 3);
  std::cout << result1 << " " << result2 << std::endl;
  return 0;
}