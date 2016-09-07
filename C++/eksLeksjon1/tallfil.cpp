// Programmet leser tall fra fil og skriver summen av tallene til skjermen.

#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const char filnavn[] = "tallfil.dat";
  ifstream innfil;      // definerer filvariabel
  innfil.open(filnavn); // åpner filen
  if (!innfil) {        // innfil kan brukes som et logisk uttrykk
    cout << "Feil ved åpning av innfil." << endl;
    exit(EXIT_FAILURE); // uthopp fra programmet
  }

  int tall;
  int sum = 0;
  innfil >> tall;         // leser et "ord" fra filen
  while (!innfil.eof()) { // leser fram til filslutt
    sum += tall;
    innfil >> tall;
  }
  cout << "Summen er " << sum << endl;
  innfil.close();
  return 0;
}

/* Eksempel kjøring:
Datafil:
3 4 5 5
17

Utskrift:
Summen er 34
*/
