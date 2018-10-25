#pragma once
#include <string>
#include <iostream>
using namespace std;

class Mail {
	friend istream & operator >>(istream&cin, Mail&miaMail); //metodo "amico" della classe. no classe ma accede a tutte le cose della classe
	friend ostream & operator <<(ostream&cout, Mail miaMail);
	friend bool operator ==(Mail, Mail);

private:
	string mittente, oggetto, dataOra, testo;
	string toString();

public:
	Mail();
	Mail(string m, string o, string d, string t);
	string getMittente();
	string getOggetto();
	string getDataOra();
	string getTesto();
	~Mail();
};
