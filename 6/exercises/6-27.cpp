#include <iostream>

using std::cin;
using std::cout;

int sum(std::initializer_list<int> li) {
  int sum = 0;
  for (auto i : li)
    sum += i;
  return sum;
}

int main() {
  cout << sum({1, 2, 3, 4}) << std::endl;
  return 0;
}