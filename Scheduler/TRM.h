#pragma once
#include "QueueADT.h"
#include "Node.h"
template <typename T>

class TRM :public QueueADT<T>
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	TRM();
	bool isEmpty() const;
	bool enqueue(const T& newEntry);
	bool dequeue(T& frntEntry);
	bool peek(T& frntEntry)  const;
	~TRM();

	//copy constructor
	TRM(const TRM<T>& LQ);

};

