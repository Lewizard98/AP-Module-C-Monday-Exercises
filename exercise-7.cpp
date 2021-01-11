#include <iostream>
#include<string>
#include<regex>

bool isNumber(std::string s){

    std::regex e ("[-+]?([0-9]*[0-9]+|[0-9]+)");

    if (regex_match (s,e))
        return true;

    return false;
}

int main() {
  std::string inputValue;
  int zeros = 0;
  int positives = 0;
  int negatives = 0;
  int total = 0;

  std::cout << "Please enter a valid value, or \"Q\" to finish: \n";

  while(true){
    getline(std::cin,inputValue);
    if (inputValue == "Q" || inputValue == "q"){
      break;
    }
    if (!isNumber(inputValue)){
      std::cout << "Invalid value, please try again: \n";
    } else {
      if(std::stoi(inputValue) > 0){
        positives++;
      } else if(std::stoi(inputValue) < 0){
        negatives++;
      } else {
        zeros++;
      }
      total++;
    }
  }

  std::cout << "Total number of values entered: " << total << "\nZeros: " << zeros << "\nPositives: " << positives << "\nNegatives: " << negatives;
}
