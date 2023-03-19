#include <iostream>
#include "ufo_functions.hpp"
#include <vector>
#include <string>

int main() {
  greet();

  std::string codeword = "codecademy";
  std::string answer = "__________";
  char letter;
  std::vector<char> incorrect;
  bool guess = false;
  int misses = 0;
  int i;

  while (answer != codeword && misses < 7){
    display_misses(misses);
    display_status(incorrect, answer);
    std::cout << "\nPlease enter your guess: ";
    std::cin >> letter;

    for (i = 0; i < codeword.size(); i++){
      if (letter == codeword[i]){
        answer[i] = letter;
        guess = true;
      }
    }

    if (guess == true){
      std::cout << "Correct!";
    }
    else{
      std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  
  end_game(answer, codeword);
}
