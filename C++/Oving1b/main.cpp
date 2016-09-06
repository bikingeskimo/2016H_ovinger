#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
//#include <enFil>
using namespace std;

void process(ifstream & ifile); //prototyp 
  
void lesInnTemp(double temp[],  int antall);
 
int main() {
    const char filnavn[] = "tallfil.dat";
    ifstream innfil; // definerer filvariabel
    innfil.open(filnavn); // åpner filen
    if (!innfil) { // innfil kan brukes som et logisk uttrykk
        cout << "Feil ved åpning av innfil." << endl;
        exit(EXIT_FAILURE); // uthopp fra programmet
    }
    
    lesInnTemp(temp, antall);
 
    int a, x, y ,z;
    int temp[5];
    innfil >> a; // leser et "ord" fra filen
    while (!innfil.eof()) { // leser fram til filslutt
        for (int i = 0; i < 5; ++i) {
            temp[i] = A;
            if(A < 10){
             x++;
           }else if (A >= 10 && A <= 20){
             y++;
           }else if (A > 20){
             z++;
           }else{
             cout << "Skriv inn et gyldig tall. \n";
           }
        }
    }
    cout << "Antall under 10 er " << x << std::endl;
    cout << "Antall mellom 10 og 20 er " << y << std::endl;
    cout << "Antall over 20 er " << z << std::endl;
 
 
    void lesInnTemp(double temp[], int antall) {
        lesInnTemp(temp, antall);
 
         //Funksjonen skal åpne filen, lese inn temperaturene og lagre dem i tabellen temp, og
         // endelig lukke filen
 
    }
}