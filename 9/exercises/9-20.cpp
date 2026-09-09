#include <deque>
#include <iostream>
#include <list>

int main() {
  std::list<int> l{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::deque<int> evens;
  std::deque<int> odds;
  for (auto i : l) {
    if (i % 2) {
      odds.push_back(i);
    } else {
      evens.push_back(i);
    }
  }
  for (auto i : evens)
    std::cout << i << " ";
  std::cout << std::endl;
  for (auto i : odds)
    std::cout << i << " ";
  return 0;
}