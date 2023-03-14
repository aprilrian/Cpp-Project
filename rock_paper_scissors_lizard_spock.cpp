#include <iostream>
#include <stdlib.h>
using namespace std;

/* LOGIC
   Scissors > Paper
   Paper > Rock
   Rock > Lizard
   Lizard > Spock
   Spock > Scissors
   Scissors > Lizard
   Lizard > Paper
   Paper > Spock
   Spock > Rock
   Rock > Scissors */
 
int main(){
  srand(time(NULL));
  int computer = rand() % 5 + 1;
  int user = 0;
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  cout << "ROCK PAPER SCISSORS" << endl;
  cout << "1) ✊" << endl;
  cout << "2) ✋" << endl;
  cout << "3) ✌️" << endl;
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n\n";
  cout << "Shoot! ";

  cin >> user;

  std::cout << "Computer: " << computer << "\n\n";

  if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";
    
  } else if (user == scissors && computer == paper) {
    std::cout << "You Win!\n";
    
  } else if (user == paper && computer == rock) {
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == spock) {
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == scissors) {
    std::cout << "You Win!\n";
      
  } else if (user == scissors && computer == lizard) {
    std::cout << "You Win!\n";
      
  } else if (user == lizard && computer == paper) {
    std::cout << "You Win!\n";
      
  } else if (user == paper && computer == spock) {
    std::cout << "You Win!\n";
      
  } else if (user == spock && computer == rock) {
    std::cout << "You Win!\n";
      
  } else if (user == rock && computer == lizard) {
    std::cout << "You Win!\n";
      
  } else if (user == computer) {
    std::cout << "Tie!\n";
      
  } else {
    std::cout << "You Lose!\n";
  }




  return 0;
}
