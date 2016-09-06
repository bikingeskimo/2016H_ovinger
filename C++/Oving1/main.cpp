#include <iostream>
 
/*
 *  leser inn temperaturer for en periode og teller opp antallet
 *  i tre intervaller: under 10 grader, mellom 10 og 20 grader (inkludert 10 og 20 grader), og over
 *  20 grader
 */
 
using namespace std;
 
int main() {
 
    int x=0, y=0, z=0;
 
    cout << "Du skal skrive inn 5 temperaturer " << std::endl;
    for (int i = 1; i < 6; i++) {
       int A;
       cout << "Temperatur nr " << i << ": " << std::endl;
       cin >> A; //Innlesing, bruker <iostream>
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
    cout << "Antall under 10 er " << x << std::endl;
    cout << "Antall mellom 10 og 20 er " << y << std::endl;
    cout << "Antall over 20 er " << z << std::endl;
 
    return 0;
}