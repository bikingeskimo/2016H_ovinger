#include <iostream>

using namespace std;

int main() {
  const int m = 5;
  int heltall[m];
  double flyttall[m];

  cout << "heltallsadresser:\n";
  // Adressene skrives ut i heksadesimale tall
  for (int i = 0; i < m; i++)
    cout << (heltall + i) << endl;

  cout << "\nflyttallsadresser:\n";
  for (int j = 0; j < m; j++)
    cout << (flyttall + j) << endl;
  return 0;
}
