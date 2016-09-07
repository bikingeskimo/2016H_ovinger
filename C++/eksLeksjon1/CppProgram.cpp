#include <cctype>   // char-behandling
#include <cstring>  // strengbehandling
#include <iostream> // innlesing/utskrift

using namespace std; // bruker standard navnerom

int main() {
  char tekst[5];            // en streng med maks lengde 5, etterhvert brukes klassen string
  cout << "Skriv et ord: "; // utskrift, bruker <iostream>
  cin >> tekst;             // innlesing, bruker <iostream>

  // size_t er som (unsigned) int, men det garanteres at en minne relatert lengde kan lagres i en size_t variabel.
  // En int variabel kan for eksempel ikke være stor nok til å lagre alle mulige verdier strlen kan returnere
  for (size_t i = 0; i < strlen(tekst); i++) {
    tekst[i] = toupper(tekst[i]); // gjør til store bokstaver, bruker <cctype>
  }
  cout << "Bare store bokstaver: " << tekst << endl;

  for (size_t j = 0; j < strlen(tekst); j++) {
    tekst[j] = tolower(tekst[j]); // gjør til små bokstaver, bruker <cctype>
  }
  cout << "Bare små bokstaver: " << tekst << endl;
  return 0; // 0 betyr at programmet avslutter vellykket
}

/* Kjøring av programmet:
Skriv et ord: test
Bare store bokstaver: TEST
Bare små bokstaver: test
*/
