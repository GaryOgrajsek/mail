#include<iostream>
#include<string>
#include "Mail.h"
#include "MailBox.h"


int Menu() {
	int scelta;
	cout << "1 metti 2 trova: ";
	cin >> scelta;
	return scelta;
}



int main() {
	MailBox miaMailBox;
	Mail gallo;
	int pos;
	do {
		switch (Menu()) {
		case 1:
			cin.ignore();
			cin >> gallo;
			cout << gallo<<endl;
			miaMailBox.add(gallo);
			break;
		case 2:
			cout << "In che posizione? ";
			cin >> pos;
			cout << miaMailBox.get(pos);
			break;
		case 3:
			return 0;
		}
		system("PAUSE");
	} while (1);

}
//fai menu con scelta e se metto mail la mette da solo WOWO