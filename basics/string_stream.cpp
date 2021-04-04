/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */


#include <iostream>
#include <string>
#include <sstream>

int main ()
{
  std::string roomLength;
  std::string roomWidth;
  float length = 0;
  float width = 0;
  float area = 0;

  std::cout << "Enter the length of the room: ";
  std::getline (std::cin,roomLength);
  std::stringstream(roomLength) >> length;
  std::cout << "Enter the width of the room: ";
  std::getline (std::cin,roomWidth);
  std::stringstream(roomWidth) >> width;
  area = length * width;
  std::cout << "Area is " << area << std::endl;
  return 0;
}
