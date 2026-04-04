#include <iostream>
#include <vector>

int main() {
  int arr[4] = {};
  std::vector<int> vec{0, 1, 2, 3};
  for (auto i : vec)
    arr[i] = i;
  for (auto i : arr)
    std::cout << i << " ";
  return 0;
}