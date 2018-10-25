#pragma once
#include "Mail.h"
#include "stack.h"
#include "stack.cpp"

class MailBox {

private:
	stack<Mail> pila;
	int numMail;

public:
	MailBox();
	void add(Mail m);
	Mail get(int pos);
	MailBox CercaEmailMittente(string nome);
	bool IsEmpty();
	~MailBox();
};