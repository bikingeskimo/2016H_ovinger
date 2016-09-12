#include <iostream>
#include <string.h>

using namespace std;

int main() {
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;
  
  cout <<"i=" << i << " adr: " << &i << endl;
  cout <<"j=" << j << " adr: " << &j << endl;
  cout <<"p=" << p << " adr: " << &p << endl;
  cout <<"q=" << q << " adr: " << &q << endl;
  
  *p = 7;
  *q += 4;
  *q = *p + 1;
  p = q;
  
  cout << *p << " " << *q << endl;
}

int oppg2(){
  /*
  Teorioppgave.
  Hva vil skje hvis du skriver
  */
  char *linje = nullptr; // eller char *linje = 0;
  strcpy(linje, "Dette er en tekst");
  
  return 0;
}

int oppg3(){
  /*
  Teorioppgave.
  Finn ting som kan gå galt i følgende programbit
  */
  char tekst[5];
  char *pekeren = tekst;
  char letEtter = 'e';
  cin >> tekst;
  while (*pekeren != letEtter) {
   *pekeren = letEtter;
   pekeren++;
  }
  
  return 0;
}


int oppg4(){
  int a = 5;
  int &b;
  int *c;
  c = &b;
  *a = *b + *c;
  &b = 2;
  /*
  Hvorfor blir det kompileringsfeil?
  -
  */
}

int oppg5(){
  double tall;
  /*
  Definer en peker som skal peke til tall.
  Definer en referanse som skal referere til tall.
  Vis tre måter å få tilordnet verdi til tall på.
  */
}

void oppg6(){
  /*
  Oppgave 6
  Du skal lage en funksjon og et hovedprogram som bruker denne funksjonen. Du skal bruke
  metoden som er beskrevet i eksempel 1 i kapittel 1.7.1.
  Lag en funksjon som finner summen av elementene i en tabell. Funksjonen skal ha følgende
  hode:
  int finnSum(const int *tabell, int antElementer)
  I hovedprogrammet skal du opprette en tabell med 20 elementer, fyll tabellen med tallene 1,
  2, 3, osv. og bruk funksjonen til å finne summen av
  a) De 10 første tallene
  b) De 5 neste tallene
  c) De 5 siste tallene
  */
}


