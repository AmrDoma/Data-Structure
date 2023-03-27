#include "BLK.h"

template <typename T>
BLK<T>::BLK() // The constructor of the BLK class.

{
	backPtr = nullptr;
	frontPtr = nullptr;

}

template <typename T>
bool BLK<T>::isEmpty() const //Function that checks whether the queue is empty or not
{
	return (frontPtr == nullptr);
}

template <typename T>
bool BLK<T>::enqueue(const T& newEntry)
{
	Node<T>* newNodePtr = new Node<T>(newEntry);
	// Insert the new node
	if (isEmpty())	//special case if this is the first node to insert
		frontPtr = newNodePtr; // The queue is empty
	else
		backPtr->setNext(newNodePtr); // The queue was not empty

	backPtr = newNodePtr; // New node is the last node now
	return true;
} // end enqueue

template <typename T>
bool BLK<T>::dequeue(T& frntEntry)
{
	if (isEmpty())
		return false;

	Node<T>* nodeToDeletePtr = frontPtr;
	frntEntry = frontPtr->getItem();
	frontPtr = frontPtr->getNext();
	// Queue is not empty; remove front
	if (nodeToDeletePtr == backPtr)	 // Special case: last node in the queue
		backPtr = nullptr;

	// Free memory reserved for the dequeued node
	delete nodeToDeletePtr;

	return true;
}

template <typename T>
bool BLK<T>::peek(T& frntEntry) const //Function: peek copies the front of this queue to the passed param.The operation does not modify the queue.Input: None.Output : The front of the queue.
{
	if (isEmpty())
		return false;

	frntEntry = frontPtr->getItem();
	return true;

}

template <typename T>
BLK<T>::~BLK()
{
	T temp;

	//Free (Dequeue) all nodes in the queue
	while (dequeue(temp));
}