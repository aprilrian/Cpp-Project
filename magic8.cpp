#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
  srand(time(NULL));
  int answer = rand() % 9;
  cout << "MAGIC 8-BALL:" << endl;

  if (answer == 0){
    cout << "It is certain." << endl;
  }
  else if (answer == 1){
    cout << "It is decidedly so." << endl;
  }
  else if (answer == 2){
    cout << "Without a doubt." << endl;
  }
  else if (answer == 3){
    cout << "Yes - definitely." << endl;
  }
  else if (answer == 4){
    cout << "You may rely on it." << endl;
  }
  else if (answer == 5){
    cout << "As I see it, yes." << endl;
  }
  else if (answer == 6){
    cout << "Most likely." << endl;
  }
  else if (answer == 7){
    cout << "Yes." << endl;
  }
  else if (answer == 8){
    cout << "Signs point to yes." << endl;
  }
  else if (answer == 9){
    cout << "Don't count on it." << endl;
  }
  else {
    cout << "Very doubtful." << endl;
  }

  return 0;
}
