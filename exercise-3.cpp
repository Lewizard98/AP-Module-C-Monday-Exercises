#include <iostream>

int main() {
  int length;
  int width;
  int squaredFoot;
  float squaredMeters;
  const float sqFootToSqMeters = 0.092903; // This is because 1 square foot is 0.092903  square meters

  std::cout << "What is the length of the room in feet? ";
  std::cin >> length;
  std::cout << "What is the width of the room in feet? ";
  std::cin >> width;

  squaredFoot = length * width;
  squaredMeters = squaredFoot * sqFootToSqMeters; 

  std::cout << "Your room's dimension is " << length << " by " << width << " feet, the area is: \n" << squaredFoot << " square foot\n" << squaredMeters << " squared meters";
}
