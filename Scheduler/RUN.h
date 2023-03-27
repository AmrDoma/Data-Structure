#pragma once
#include "QueueADT.h"
#include "Node.h"
template <typename T>

class RUN :public QueueADT<T>
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	RUN();
	bool isEmpty() const;
	bool enqueue(const T& newEntry);
	bool dequeue(T& frntEntry);
	bool peek(T& frntEntry)  const;
	~RUN();

	//copy constructor
	RUN(const RUN<T>& LQ);

};

