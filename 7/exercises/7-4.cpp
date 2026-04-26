#include <iostream>
#include <string>

using std::string;

class Person {
  string name;
  string address;
  string getName() const { return name; };
  string getAddress() const { return address; };
};