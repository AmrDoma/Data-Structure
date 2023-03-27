#pragma once
#include "QueueADT.h"
#include "Node.h"
template <typename T>
class BLK :public QueueADT<T>
{
private:

	Node<T>* backPtr;
	Node<T>* frontPtr;
public:
	BLK();
	bool isEmpty() const;
	bool enqueue(const T & newEntry);
	bool dequeue(T & frntEntry);
	bool peek(T & frntEntry)  const;
	~BLK();

	//copy constructor
	BLK(const BLK<T>&LQ);
	
};

