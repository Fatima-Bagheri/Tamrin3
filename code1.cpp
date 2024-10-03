#include <iostream>
#include <string>

int main()
{
  float score, score2, score3;
  int unit, unit2, unit3;
  std::cout << "Enter Scores: ";
  std::cin >> score >> score2 >> score3;
  std::cout << "Enter Units: ";
  std::cin >> unit >> unit2 >> unit3;
  
  float scores = (score * unit) + (score2 * unit2) + (score3 * unit3);
  int units = unit + unit2 + unit3;
  float gpa = scores / units;
  
  std::cout << "GPA: " << gpa;
}
