#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;

enum work_days{
    poniedzialek,
    wtorek,
    sroda,
    czwartek,
    piatek
};

void enumTest(){
    work_days today = piatek;
    work_days nextDay = wtorek;
//    work_days strangeDay = sobota;
    cout << "Dzis jest " << today << " musze isc do szkoly :-(" << endl;
    cout << "Jutro jest " << nextDay << " rowniez musze isc do szkoly :-(" << endl;

    cout << "Index: " << today << " wartosc: " << work_days::poniedzialek << endl;
    if(work_days::piatek == today){
        cout << "jest piatek! " << endl;
    } else {
        cout << "jeszcze nie ma piatku " << endl;
    }
}

int main() {
    enumTest();
    return 0;
}