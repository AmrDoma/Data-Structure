#include "NEW.h"

template <typename T>
NEW<T>::NEW() // The constructor of the NEW class.

{
	backPtr = nullptr;
	frontPtr = nullptr;

}

template <typename T> 
bool NEW<T>::isEmpty() const //Function that checks whether the queue is empty or not
{
	return (frontPtr == nullptr);
}

template <typename T>
bool NEW<T>::enqueue(const T& newEntry)
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
bool NEW<T>::dequeue(T& frntEntry)
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
bool NEW<T>::peek(T& frntEntry) const  
{
	if (isEmpty())
		return false;

	frntEntry = frontPtr->getItem();
	return true;

}
template <typename T>
NEW<T>::~NEW()
{
	T temp;

	//Free (Dequeue) all nodes in the queue
	while (dequeue(temp));
}
/*
NEW::NEW()
{
	front, back = 0;
}

bool NEW::isEmpty()
{
	if (front == back)
		return true;
	else
		return false;
}

bool NEW::isFull()
{
	if ((back + 1) % MAX_SIZE == front)
		return true;
	else
		return false;
}

bool NEW::Enqueue()
{
	if (isFull())
		return;
	else
		arr[back] = it;
	back++;

}

bool NEW::PEnqueue()
{

}

bool NEW::Dequeue()
{

}
*/
