#include <iostream>
using namespace std;

int main(){
	double a, b, s;
	unsigned r;
	cout << "Dammi due numeri interi positivi e ti mostrero'la differenza" << endl;
	do {
		cout << "Cominciamo col primo: " ;
		cin >> a;
		floor (a)
		if (a>=0 and a<=10 and r!=3)
			cout << "Pare tu abbia dei problemi a contare " << endl ;
		if (a>100 and a<=10000 and r!=3)
			cout << "Wow, sei un tipo che pensa in grande! " << endl ;
		if (a>10000 and r!=3)
			cout << "I tuoi numeri sono immensi!" << endl ;
		if (a<0){
			cout << "cosa della parola POSITIVI non hai capito? Faro' finta di non aver visto quel meno" << endl;
			a = -a;
		}
		cout << "Adesso il secondo: " ;
		cin >> b;
		if (b<0){
			cout << "Sembra tu non sappia cosa vuol dire POSITIVI, ingorero' quel segno" << endl;
			b = -b;
		}
		if (a>=b){
			s = a-b;
			cout << "\nLa loro differenza e' ";
			cout << s ;
			if (s<=10)
				cout << " (non lo avresti mai detto eh?)" << endl;
			else
				cout << "\n";
			r = 1;
		}
		else if (a<b and r==0){
			cout << "\nOmmioddio! Ommioddio! Errore!! Aaaah!!!! \nSembra che il primo sia minore del secondo, e a me sta cosa non piace. \n\nRiprova" << endl;
			r = 2;
		}
		else if (a < b and r == 2){
			cout << "\nE'la fine del mondooooo!!!!!! Auuuhhh!!! \nForse non hai capito che il primo numero DEVE essere maggiore del secondo. \n\nRiprova e cerca di non farmi incazzare" << endl;
			r = 3;
		}
		else if (a < b and r == 3){
			cout << "\nErrore 404, cervello dell'utente non trovato \nBravo mi hai fatto INCAZZARE. \n\nAdesso FOTTITI" << endl;
			r = 1;
		}
	}
	while (r != 1);
	return 0;
}