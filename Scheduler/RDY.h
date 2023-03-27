#pragma once
#include "QueueADT.h"
#include "Node.h"

template <typename T>

class RDY :public QueueADT<T>
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	RDY();
	bool isEmpty() const;
	bool enqueue(const T& newEntry);
	bool dequeue(T& frntEntry);
	bool peek(T& frntEntry)  const;
	~RDY();

	//copy constructor
	RDY(const RDY<T>& LQ);

};

