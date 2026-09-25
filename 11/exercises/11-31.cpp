#include <iostream>
#include <map>
#include <string>

using std::string;

int main() {
  std::multimap<string, string> authors{
      {"J.R.R. Tolkein", "The Hobbit"},
      {"J.R.R. Tolkein", "The Lord of the Rings: Fellowship of the Ring"},
      {"J.K. Rowling", "Harry Potter and the Sorcerer's Stone"},
      {"J.K. Rowling", "Harry Potter and the Goblet of Fire"},
      {"George Orwell", "1984"}};
  const string item_to_erase = "";
  auto iter = authors.find(item_to_erase);
  auto entries = authors.count(item_to_erase);
  while (entries) {
    authors.erase(iter++);
    --entries;
  }
  for (const auto &i : authors)
    std::cout << i.first << ", " << i.second << std::endl;
  return 0;
}