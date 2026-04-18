#include <iostream>

using std::cin;
using std::cout;

int absolute(int n) { return (n < 0) ? n * -1 : n; }
int main() {
  int input;
  cin >> input;
  int result = absolute(input);
  cout << result << std::endl;
  return 0;
}