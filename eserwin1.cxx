#include <cstdlib>
#include <iostream>

using namespace std;

int main(){
    double a, b, c;
    cout << "Dimmi le misure dei tre lati di un triangolo e te ne indechero il tipo" << endl;
    cout << "Il primo lato: ";
    cin >> a;
    cout << "Ora il secondo: ";
    cin >> b;
    cout << "E il terzo: ";
    cin >> c;
    cout << endl;
    if (a==b and b==c and c==a)
    cout << "Grande! Il triangolo e' equilatero!" << endl;
    else if (a==b or b==c or c==a)
    cout << "Bene, il triangolo e' isoscele" << endl;
    else
    cout << "A quanto pare il triangolo e' scaleno" <<endl;
    return 0;
}

