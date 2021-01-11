#include <iostream>
#include<string>
#include<regex>
#include<vector>

bool isNumber(std::string s){

    std::regex e ("[-+]?([0-9]*[0-9]+|[0-9]+)");

    if (regex_match (s,e))
        return true;

    return false;
}

int main() {
  std::string inputValue;
  int count = 0;
  int inputNum = 0;
  int lowestNum;
  int highestNum;
  std::vector <int> numbers;

  std::cout << "Please enter a valid value, or \"Q\" to finish: \n";

  while(true){
    getline(std::cin,inputValue);
    if (inputValue == "Q" || inputValue == "q"){
      break;
    }
    if (!isNumber(inputValue)){
      std::cout << "Invalid value, please try again: \n";
    } else {
      count++;
      inputNum = std::stoi(inputValue);
      numbers.push_back(inputNum);
    }
  }

  lowestNum = inputNum;
  highestNum = inputNum;

  for(int i = 1; i < count; i++){
    if (numbers[i-1] < lowestNum){
      lowestNum = numbers[i-1];
    }
    if (numbers[i-1] > highestNum){
      highestNum = numbers[i-1];
    }
  }

  std::cout << "Total number of values entered: " << count << "\nLowest Value: " << lowestNum << "\nHighest Value: " << highestNum;
}
