#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::string> grades = {"F", "D", "C", "B", "A", "A++"};
  std::string letterGrade;
  int grade;
  std::cin >> grade;
  (grade < 60) ? letterGrade = grades[0]
               : letterGrade = grades[(grade - 50) / 10];
  std::cout << letterGrade << std::endl;
  return 0;
}