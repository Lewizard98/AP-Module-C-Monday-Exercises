#include <iostream>
#include <string>

int main() {
  std::string quote;
  std::string author;

  std::cout << "What is the quote?\n";
  getline(std::cin,quote);

  std::cout << "Who said it?\n";
  getline(std::cin, author);

  std::cout << author << " says: " << "\"" << quote + "\"";
}
