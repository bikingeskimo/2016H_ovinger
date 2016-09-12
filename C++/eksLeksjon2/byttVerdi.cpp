#include <iostream>

using namespace std;

void byttVerdi(int &tallA, int &tallB) {
  int hjelp = tallA;
  tallA = tallB;
  tallB = hjelp;
}

int main() {
  int tallEn;
  int tallTo;
  cout << "Skriv to tall: ";
  cin >> tallEn >> tallTo;
  if (tallEn > tallTo) {
    byttVerdi(tallEn, tallTo);
  }
  cout << "I rekkefølge " << tallEn << " " << tallTo;
  cout << endl;
  return 0;
}
