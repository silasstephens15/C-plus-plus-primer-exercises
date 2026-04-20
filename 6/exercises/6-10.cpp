#include <iostream>

using std::cin;
using std::cout;

void swap(int *x, int *y) {
  int placeholder = *x;
  *x = *y;
  *y = placeholder;
  return;
}

int main() {
  int x;
  int y;
  cin >> x >> y;
  swap(&x, &y);
  cout << "value of x: " << x << std::endl << "value of y: " << y << std::endl;
  return 0;
}