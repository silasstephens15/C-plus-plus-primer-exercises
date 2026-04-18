#include <iostream>

using std::cin;
using std::cout;

int fact(int n) {
  int val = n;
  for (int i = n; i != 0; --i)
    val *= i;
  return val;
}

int main() {
  int input;
  int result;
  cin >> input;
  result = fact(input);
  cout << "Result of " << input << "! is: " << result << std::endl;
  return 0;
}