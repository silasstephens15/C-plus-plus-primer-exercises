#include "screen.h"
#include <iostream>

using std::cout;

int main() {
  Screen myScreen(5, 5, 'X');
  myScreen.display(cout);
  cout << "\n";
  myScreen.move(4, 0).set('#').display(cout);
  cout << "\n";
  return 0;
}