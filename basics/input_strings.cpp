/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number.
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/

#include <iostream>
#include <string>

int main() {
  std::string userName1;
  std::string userAddress1;
  std::string userPhone1;
  std::string userName2;
  std::string userAddress2;
  std::string userPhone2;  

  // Get user1 name
  std::cout << "What is your name? ";
  std::getline(std::cin, userName1);
  std::cout << "\n";

  // Get user1 address
  std::cout << "What is your address? ";
  std::getline(std::cin, userAddress1);
  std::cout << "\n";

  // Get user1 phone number
  std::cout << "What is your phone number? ";
  std::getline(std::cin, userPhone1);
  std::cout << "\n";

  // Get user2 name
  std::cout << "What is your name? ";
  std::getline(std::cin, userName2);
  std::cout << "\n";

  // Get user2 address
  std::cout << "What is your address? ";
  std::getline(std::cin, userAddress2);
  std::cout << "\n";

  // Get user2 phone number
  std::cout << "What is your phone number? ";
  std::getline(std::cin, userPhone2);
  std::cout << "\n";

  // Print out info for user1
  std::cout << "Okay, here's your information... \n";
  std::cout << userName1 << "\n";
  std::cout << "\t\t" << userAddress1 << "\n";
  std::cout << "\t\t" << userPhone1 << "\n";

  // Print out info for user2
  std::cout << "Okay, here's your information... \n";
  std::cout << userName2 << "\n";
  std::cout << "\t\t" << userAddress2 << "\n";
  std::cout << "\t\t" << userPhone2 << "\n";

  return 0;
}
