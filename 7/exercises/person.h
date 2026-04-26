#include <iostream>
#include <string>

using std::string;

class Person {
public:
  string name;
  string address;
  string getName() const { return name; };
  string getAddress() const { return address; };
};

std::ostream &print(std::ostream &, const Person &);
std::istream &read(std::istream &, Person &);