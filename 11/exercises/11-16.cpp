#include <iostream>
#include <map>

int main() {
  std::map<int, int> m{{1, 10}, {2, 5}};
  auto map_it = m.begin();
  while (map_it != m.end()) {
    map_it->second = 0;
    ++map_it;
  }
  for (const auto &i : m)
    std::cout << i.first << ": " << i.second << std::endl;
  return 0;
}