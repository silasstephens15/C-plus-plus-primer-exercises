#include <iostream>
#include <string>

using std::string;

struct Person {
  Person() = default;
  Person(const string &n, const string &a) : name(n), address(a){};
  string name;
  string address;
  string getName() const { return name; };
  string getAddress() const { return address; };
};

std::ostream &print(std::ostream &, const Person &);
std::istream &read(std::istream &, Person &);