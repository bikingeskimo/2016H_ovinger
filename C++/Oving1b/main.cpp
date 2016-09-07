#include <iostream>
#include <fstream>

using namespace std;

void lesInnTemp(double temp[], int antall);

int main() {
    const int antall = 10; //antall temperaturer som blir lest
    double temp[antall]; //tabell med størrelse tilsvarende antallet som skal leses.
 
    lesInnTemp(temp, antall);
    
    int x=0,y=0,z=0;
    for (int i = 0; i < antall; i++) {
     if(temp[i] < 10){
        x++;
      }else if (temp[i] >= 10 && temp[i] <= 20){
        y++;
      }else if (temp[i] > 20){
        z++;
      }else{
       cout<<"En feil oppsto. \n" <<endl;
      }
    }
    cout << "Antall under 10 er " << x << std::endl;
    cout << "Antall mellom 10 og 20 er " << y << std::endl;
    cout << "Antall over 20 er " << z << std::endl;
}

void lesInnTemp(double temp[],  int antall){
    //Funksjonen skal åpne filen, lese inn temperaturene og lagre dem i tabellen temp, og
    // endelig lukke filen
    const char filnavn[] = "tallfil.dat";
    ifstream innfil; // definerer filvariabel
    innfil.open(filnavn); // åpner filen
    if (!innfil) { // innfil kan brukes som et logisk uttrykk
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE); // uthopp fra programmet
    }
    
    double tall;
    int x = 0;
    
    innfil >> tall; //leser et ord fra filen
    
    while (!innfil.eof()) { // leser fram til filslutt
      temp[x] = tall;
      innfil >> tall;
      x++;
    }
    innfil.close();  //stenger ned filen
}

/*
Tallfilen er
  3 4 5 5
  17 25 10 15 0 5

Forventer <10 = 6
Forventer 10-20 = 3
Forventer >20 = 1


*/