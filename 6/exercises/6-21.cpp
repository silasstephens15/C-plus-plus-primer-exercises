#include <iostream>

using std::cin;
using std::cout;

int larger(const int x, const int *y) { return x > *y ? x : *y; }

int main() {
  int input1, input2;
  cin >> input1 >> input2;
  cout << larger(input1, &input2) << std::endl;
  return 0;
}