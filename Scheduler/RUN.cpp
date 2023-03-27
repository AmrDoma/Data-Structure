#include "RUN.h"

template <typename T>
RUN<T>::RUN() // The constructor of the RUN class.

{
	backPtr = nullptr;
	frontPtr = nullptr;

}

template <typename T>
bool RUN<T>::isEmpty() const //Function that checks whether the queue is empty or not
{
	return (frontPtr == nullptr);
}

template <typename T>
bool RUN<T>::enqueue(const T& newEntry)
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
bool RUN<T>::dequeue(T& frntEntry)
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
bool RUN<T>::peek(T& frntEntry) const
{
	if (isEmpty())
		return false;

	frntEntry = frontPtr->getItem();
	return true;

}

template <typename T>
RUN<T>::~RUN()
{
	T temp;

	//Free (Dequeue) all nodes in the queue
	while (dequeue(temp));
}