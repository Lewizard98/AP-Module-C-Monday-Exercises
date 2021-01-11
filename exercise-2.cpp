#include <iostream>
#include <string>

int main() {
  float inputTemp;
  float outputTemp;
  char inputMesure;
  std::string mesurement;

  std::cout << "Please enter the starting temperature: ";
  std::cin >> inputTemp;
  
  std::cout << "Press \'C\' to convert from Fahrenheit to Centigrade.\nPress \'F\' to convert from Centigrade to Fahrenheit.";

  std::cout << "\nYour choice: ";
  std::cin >> inputMesure;
  inputMesure = toupper(inputMesure);

  if (inputMesure == 'C'){
    outputTemp = (inputTemp-32)*5/9;
    mesurement = "Fahrenheit";
  } else if (inputMesure == 'F'){
    outputTemp = (inputTemp*9/5)+32;
    mesurement = "Centigrade";
  }

  std::cout << inputTemp << " degrees " << mesurement << " is " << outputTemp;
}
