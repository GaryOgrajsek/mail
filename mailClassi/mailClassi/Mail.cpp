#include "Mail.h"
Mail::Mail() {}

Mail::Mail(string m, string o, string d, string t) {
	mittente = m;
	oggetto = o;
	dataOra = d;
	testo = t;
}

istream & operator>>(istream & cin, Mail & miaMail){//no mail:: perché no della classse
	cout << "Mittente: ";
	getline(cin, miaMail.mittente); //devo mettere .mittente perché, non essendo della classe, non è sottinteso
	cout << "Oggetto: ";
	getline(cin, miaMail.oggetto);
	cout << "Data e ora: ";
	getline(cin, miaMail.dataOra);
	cout << "Testo: ";
	getline(cin, miaMail.testo);
	return cin; //stream input
}
//nel cout si lavora con ostream. Mail no modificata quindi no "&".

ostream & operator<<(ostream & cout, Mail miaMail) {
	//string temp = (miaMail.mittente + "\n" + miaMail.oggetto + "\n" + miaMail.dataOra + "\n" + miaMail.testo);
	//cout << temp;
	cout << miaMail.toString();
	return cout;
}

bool operator ==(Mail m1, Mail m2) {
	return (m1.oggetto == m2.oggetto && m1.mittente == m2.mittente);
}

string Mail::getMittente() {
	return mittente;
}

string Mail::getOggetto() {
	return oggetto;
}

string Mail::getDataOra() {
	return dataOra;
}

string Mail::getTesto() {
	return testo;
}

string Mail::toString() {
	return ("Mittente: " + mittente + "\nOggetto: " + oggetto + "\nDataOra: " + dataOra + "\nTesto: " + testo);
}

Mail::~Mail() {}
