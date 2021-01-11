#include <iostream>

int main() {
  int inputNumber;

  std::cout << "Please enter a value: ";
  std::cin >> inputNumber;

  if (inputNumber % 2 == 0){
    std::cout << inputNumber << " is an even number";
  } else {
    std::cout << inputNumber << " is an odd number";
  }
}
