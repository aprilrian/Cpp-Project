#include <iostream>
using namespace std;

int main() {
  int pesos, reais, soles, dollars;
  cout << "Enter number of Columbian Pesos: " << endl;
  cin >> pesos;
  cout << "Enter number of Reais Pesos: " << endl;
  cin >> reais;
  cout << "Enter number of Soles Pesos: " << endl;
  cin >> soles;
  
  /*CONVERSION RATES
  1 Peso  = 0,056 USD
  1 Real  = 0,19 USD
  1 Sol   = 0,26 USD */

  dollars = (0.056 * pesos) + (0.19 * reais) + (0.26 * soles);
  cout << "US Dollars = $" << dollars << endl;
  
  return 0;
}
