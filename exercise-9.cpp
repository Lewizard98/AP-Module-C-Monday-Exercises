#include <iostream>
#include <string>

int main() {
  char inputChar;
  char tryAgain;
  std::string inputCharStr;
  std::string tryAgainStr;
  bool play = true;
  bool repeatTryAgain;

  while(play == true){
    std::cout << "\nPlease enter a character: ";
    getline(std::cin, inputCharStr);
    inputChar = inputCharStr[0];


    if (isalpha(inputChar)){
      std::cout << "Alphabetic Character detected";
    } else if (isdigit(inputChar)){
       std::cout << "Digit detected";
    } else{
      std::cout << "Special Character detected";
    }

    do{
      std::cout << "\nTry again? (Y/N): ";
      getline(std::cin, tryAgainStr);
      tryAgain = toupper(tryAgainStr[0]);

      repeatTryAgain = true;
      if(tryAgain == 'N'){
        play = false;
        repeatTryAgain = false;
        std::cout << "\nThank you, good bye.";
      } else if(tryAgain == 'Y'){
        repeatTryAgain = false;
      } else{
        std::cout << "Invalid value, try again (Y/N): ";
      }


    }while(repeatTryAgain == true);
  }
}
