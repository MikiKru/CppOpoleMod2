#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "time.h"

using namespace std;

enum work_days{
    poniedzialek,wtorek,sroda,czwartek,piatek
};
enum months{
    STYCZEN = 1,LUTY,MARZEC,KWIECIEN,MAJ,CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN
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
void classifyMonths(){
    months wiosna [] = {MARZEC,KWIECIEN,MAJ,CZERIWEC};
    months lato [] = {CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN};
    months jesien [] = {WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN};
    months zima [] = {GRUDZIEN,STYCZEN,LUTY,MARZEC};

    months pory_roku [4][4] =   {
                            {MARZEC,KWIECIEN,MAJ,CZERIWEC},
                            {CZERIWEC,LIPIEC,SIERPIEN,WRZESIEN},
                            {WRZESIEN,PAZDZIERNIK,LISTOPAD,GRUDZIEN},
                            {GRUDZIEN,STYCZEN,LUTY,MARZEC}
                                };
}

int main() {
    enumTest();
    return 0;
}