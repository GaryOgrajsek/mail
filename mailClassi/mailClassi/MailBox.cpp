#include "MailBox.h"

MailBox::MailBox(){
	numMail = 0;
}

void MailBox::add(Mail m) {
	pila.Push(m);
	numMail++;
}

Mail MailBox::get(int pos) {
	MailBox tmpMB;
	if (pos > 0) {
		for (int i = 0; i <= pos, !pila.Empty(); i++) {
			pila.Pop();
		}
	}
	return pila.Top();
}

MailBox MailBox::CercaEmailMittente(string nome) {
	MailBox tmpMB;
	Mail temp;
	while (!IsEmpty()) {
		temp = pila.Top();
		if (temp.getMittente() == nome) {
			tmpMB.add(temp);
		}
		pila.Pop();
	}
	return tmpMB;
}

bool MailBox::IsEmpty() {
	return (pila.Empty());
}
MailBox::~MailBox(){}

