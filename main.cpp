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
void stringTest(){
    string name1 = "alan";
    string name2 = "ala z";
    // długość napisu
    cout << name1 << " zawiera " << name1.length() << " znaki" << endl;
    cout << name2 << " zawiera " << name2.length() << " znaki" << endl;

    cout << "Dodaje Ale do ali: " << (name1 +" "+ name2) << endl;
    // \n - newline
    // \t - tab
    cout << "Dodaje Ale do ali: " << (name1 +"\n"+ name2) << endl;
    cout << "Dodaje Ale do ali: " << (name1 +"\t"+ name2) << endl;

    if(name1 < name2){
        cout << "TAK" << endl;
    } else {
        cout << "NIE" << endl;
    }
    string newName = name1.insert(2,"xxx");
    cout << newName << endl;
    name1.replace(2,3, "");
    cout << name1 << endl;

    string sentence = "Ala ma kota";
    // wyświetl kota z zdania
    string kot = sentence.substr(7,3);
    cout << kot << endl;
    cout << sentence << endl;
    // zabierz Ali kota i wyświetl zdanie
    sentence.replace(7,4,"");
    cout << sentence << endl;
    // dodaj Ali gitare w zamian za utraconego kota
    sentence = sentence + "gitare";
    cout << sentence << endl;
}


int main() {
    stringTest();
    return 0;
}