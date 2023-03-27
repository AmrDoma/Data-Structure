#pragma once
#define MAX_SIZE 100
#include "QueueADT.h"
#include "Node.h"
template <typename T>
class NEW:public QueueADT<T>
{
private:

	Node<T>*backPtr;
	Node<T>* frontPtr;
public:
	NEW();
	bool isFull();                    //Checking if the queue is full or not
	bool isEmpty() const;             //Checking if the queue is empty or not
	bool enqueue(const T& newEntry);  //Inserts a process into the queue (queue,datain)
	bool dequeue(T& frntEntry);       //Removes a process from the queue (queue, datain&)
	bool peek(T& frntEntry)  const;   //Puts an item from the queue to the front (Itemtype)
	~NEW();

	//copy constructor
	NEW(const NEW<T>& LQ);

};
