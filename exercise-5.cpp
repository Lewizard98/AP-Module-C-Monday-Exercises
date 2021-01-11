#include <iostream>

int main() {
  int inputAge;
  int retirementAge;
  int untilRetirement;
  int retirementYear;
  const int currentYear = 2021;

  std::cout << "Please enter your current age: ";
  std::cin >> inputAge;
  std::cout << "At what age would you like to retire: ";
  std::cin >> retirementAge;

  untilRetirement = retirementAge - inputAge;
  retirementYear = currentYear + untilRetirement;

  std::cout << "The current year is " << currentYear << ", you can retire in " << retirementYear << " you have " << untilRetirement << " years remaining";
}
