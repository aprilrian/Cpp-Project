#include <iostream>
#include <vector>
#include <string>

int main(){
  std::string phrase = "a whale of a deal!";
  std::vector<char> vowel = {'a', 'e', 'i', 'o', 'u'};
  std::vector<char> result;
  int i, j;

  for (i = 0; i < phrase.size(); i++){
    for (j = 0; j < vowel.size(); j++){
      if (phrase[i] == vowel[j]){
        if (phrase[i] == 'e' || phrase[i] == 'u'){
          result.push_back(phrase[i]);
          result.push_back(phrase[i]);
        }
        else {
          result.push_back(phrase[i]);
        }
      }
    } 
  }

  for (i = 0; i < result.size(); i++){
    std::cout << result[i];
  }
  std::cout << std::endl;



  return 0;
}
