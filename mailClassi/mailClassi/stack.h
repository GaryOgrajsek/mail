#pragma once
#define DIM 10
template <class tipo>
class stack { //equivalente stack.h

private:
	
	tipo elem[DIM]; //tipo elem[DIM];
	int iTop;
	//metodi. Cioè le funzioni. Pubbliche. Private se devono essere richiamate SOLO da quelle qua dentro.

public:
	stack(); //COSTRUTTORE: colui che inizializza la classe. Come la init. NON restituisce nulla. Ma proprio nulla. DEVE chiamarsi come la classe. Costruttore di default.
	//OVERLOADING: stesso nome funzione. Oppure "<<" o "+"
	void Push(tipo); //non serve specificare la stack in cui si mette, è automatico
	void Pop();
	tipo Top();
	bool Empty();
	bool Full();
	~stack(); //DISTRUTTORE: prova a vedere quando esce
};
