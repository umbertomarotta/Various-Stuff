#include <iostream>

using namespace std;

int main(){
    int a;
    cout << "Salve, benvenuti ad Umbertolandia, inserire la propria eta' per usufruire di un fantastico sconto!" << endl;
    cin >> a;
    if (a<=10)
    cout << "Per i giovanissimi, il biglietto costa solo 4 euro invece di 21452 euro!" << endl;
    else if (a>60 and a<=150)
    cout << "Per i piu viussuti, il biglietto costa solo 5 euro invece di svariati di euro!" << endl;
    else if (a>150)
    cout << "Per gli highlander e per i morti, il biglietto e'gratis!" << endl;
    else
    cout << "Per i grandi, il biglietto costa solo 10 euro invece di infiniti euri di euro!" << endl;
    return 0;
}

