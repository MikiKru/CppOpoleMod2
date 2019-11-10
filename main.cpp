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
    // sprawdz metoda find czy ala ma kota
    cout << sentence.find('a') << endl;
    cout << sentence.find("kot") << endl;
    cout << sentence.find("gitar") << endl;
}

void ex20(){
    string name;
    cout << "Podaj imie: " << endl;
    getline(cin, name);

    if((name[name.length()-1] == 'a') || (name[name.length()-1] == 'A')){
        cout << "Szanowna Pani " + name.replace(name.length()-1,1,"o") << endl;
    } else {
        cout << "Szanowny Panie "+name + "ie" << endl;
    }
}
void ex21(){
    cout << "Wpisz zdanie" << endl;
    string sentence;
    getline(cin,sentence);

    // petle zmieniająca wszystkie znaki w zdaniu na małe
    for (int i = 0; i < sentence.length() ; i++) {
        sentence[i] = tolower(sentence[i]);
    }
    // zmiana pierwszego znaku na wielką literę
    sentence[0] = toupper(sentence[0]);
    // sprawdzenie czy jest kropka -> jeśli nie to dodanie . do zdania
    if(sentence[sentence.length()-1] != '.'){
       sentence += ".";
    }
    cout << "Twoje zdanie: " << sentence << endl;

    // tablica słow - pust
    string words[100];
    // zmienna przechowująca słowo
    string word;
    // indeks zliczający słowa dodane do tablicy words
    int index = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if(sentence[i] == ' '){
            // jeżeli wystąpiła spacja
            // słowo zapisuje w tablicy słów na określonym indeksie
            words[index] = word;
            // inkrementacja indeksu by dalej zapisywać w kojlejnych komórkach
            index++;
            // czyszczynie słowa
            word = "";
        } else {
            // jeżeli nie ma spacji
            // do słowa dodaje kolejne literki
            word += sentence[i];
        }
    }
    // na koniec dodajemy pozostałą zawartość przechowywaną w zmiennej word
    words[index] = word;

    for (int j = 0; j <= index; j++) {
        cout << words[j] << endl;
    }

}
// funkcja przyjmuje dwa argumenty i zwraca wynik działania
double addNumbers(double num1, double num2){
    double result = num1 + num2;
    return result;
}
string naZdrowie(bool czyKtosKichnal){
    if(czyKtosKichnal){
        return "Na zdrowie!";
    } else {
        return "Nikt nie kichnal";
    }
}
bool generatorKichania(){
    srand(time(NULL));
    return rand() % 2;
}
int sumAllElements(int tab[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + tab[i];
    }
    return sum;
}
double getAvg(int sum, int size){
    return (double)sum/size;
}

int factorial(int n){
    int result = 1;
    while(n > 1){
        result = result * n;
        // dekrementacja n
        n--;
    }
    return result;
}


int main() {
    int n = 5;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}