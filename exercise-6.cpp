#include <iostream>
#include <string>
#include <sstream>

bool isNumber(const std::string s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

int main() {
  int age;
  int restingHR;
  int targetHR;
  std::string ageInput;
  std::string restingHRInput;
  bool validAge = false;

  while(true){
    std::cout << "Please enter your age: ";
    getline(std::cin,ageInput);

    if (isNumber(ageInput)){
      age = std::stoi(ageInput);
      break;
    }

    std::cout << "Please enter a valid number\n";
  }

  while(true){
    std::cout << "Please enter your resting pulse: ";
    getline(std::cin,restingHRInput);

    if (isNumber(restingHRInput)){
      restingHR = std::stoi(restingHRInput);
      break;
    }
    std::cout << "Please enter a valid number\n";
  }
  
  

  std::cout << "Resting Pulse: " << restingHR << "\tAge: " << age;

  for (float percent = 0.4; percent < 1; percent += 0.05){
    targetHR = (((220 - age)-restingHR)*percent)+restingHR;


    std::cout << "\n" << percent << "%.\t\t\t" << targetHR << " bpm";
  }
}
