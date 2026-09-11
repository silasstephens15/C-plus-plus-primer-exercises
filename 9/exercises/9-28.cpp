#include <forward_list>
#include <iostream>
#include <string>

int main() {
  std::string insert = "World";
  std::string key = "";
  std::forward_list<std::string> l{"Hello", "Everybody"};
  auto i = l.begin();
  auto prev = i;
  bool inserted = false;
  while (i != l.end()) {
    if (key == *i) {
      l.insert_after(i, insert);
      inserted = true;
      break;
    }
    prev = i;
    i++;
  }
  if (!inserted) {
    l.insert_after(prev, insert);
  }
  for (auto i = l.begin(); i != l.end(); i++) {
    std::cout << *i << " ";
  }
  std::cout << std::endl;
  return 0;
}