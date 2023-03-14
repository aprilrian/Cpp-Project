#include <iostream>
using namespace std;

int main(){
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1, answer2, answer3, answer4, max;
  string house;

  cout << "The Sorting Hat Quiz!" << endl;
  cout << "Q1) When I'm dead, I want people to remember me as:" << endl;
  cout << "    1) The Good" << endl;
  cout << "    2) The Great" << endl;
  cout << "    3) The Wise" << endl;
  cout << "    4) The Bold" << endl;
  cout << "\n    Your answer: ";
  cin >> answer1;
  switch(answer1){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      while (answer1 < 1 || answer1 > 4){
        cout << "    Invalid answer. Please answer correctly : ";
        cin >> answer1;
      }
      break;
  }

  cout << "\n";
  cout << "Q2) Dawn or Dusk?" << endl;
  cout << "    1) Dawn" << endl;
  cout << "    2) Dusk" << endl;
  cout << "\n    Your answer: ";
  cin >> answer2;
  if (answer2 == 1){
    gryffindor++;
    ravenclaw++;
  }
  else if (answer2 == 2){
    hufflepuff++;
    slytherin++;
  }
  else {
    while (answer2 < 1 || answer2 > 2){
      cout << "    Invalid answer. Please answer correctly: ";
      cin >> answer2;
    }
  }

  cout << "\n";
  cout << "Q3) Which kind of instrument most pleases your ear?" << endl;
  cout << "    1) The violin" << endl;
  cout << "    2) The trumpet" << endl;
  cout << "    3) The piano" << endl;
  cout << "    2) The drum" << endl;
  cout << "\n    Your answer: ";
  cin >> answer3;
  if (answer3 == 1){
    slytherin++;
  }
  else if (answer3 == 2){
    hufflepuff++;
  }
  else if (answer3 == 3){
    ravenclaw++;
  }
  else if (answer3 == 4){
    gryffindor++;
  }
  else {
    while (answer3 < 1 || answer3 > 4){
      cout << "    Invalid answer. Please answer correctly: ";
      cin >> answer3;
    }
  }

  cout << "\n";
  cout << "Q4) Which road tempts you most?" << endl;
  cout << "    1) The wide, sunny grassy lane" << endl;
  cout << "    2) The narrow, dark, lantern-lit alley" << endl;
  cout << "    3) The twisting, leaf-strewn path through woods" << endl;
  cout << "    4) The cobbled street lined (ancient buildings)" << endl;
  cout << "\n    Your answer: ";
  cin >> answer4;
  if (answer4 == 1){
    hufflepuff++;
  }
  else if (answer4 == 2){
    slytherin++;
  }
  else if (answer4 == 3){
    gryffindor++;
  }
  else if(answer4 == 4){
    ravenclaw++;
  }
  else {
    while (answer4 < 1 || answer4 > 4){
      cout << "    Invalid answer. Please answer correctly: ";
      cin >> answer4;
    }
  }
  
  max = 0;
  if (gryffindor > max){
    max = gryffindor;
    house = "Gryffindor";
  }

  if (hufflepuff > max){
    max = hufflepuff;
    house = "Hufflepuff";
  }

  if (ravenclaw > max){
    max = ravenclaw;
    house = "Ravenclaw";
  }

  if (slytherin > max){
    max = slytherin;
    house = "Slytherin";
  }

  cout << "\n";
  cout << house << "!\n";
  
  return 0;
}
