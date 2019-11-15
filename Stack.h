#include "Node.h"

template <class T>
class Stack {
private:
	Node<T>* tope;
	int length;

public:
	Stack();
	~Stack();

	bool empty();
	int size();
	void push(T data);
	//void emplace();
	T top();
	void pop();
	void swap(Stack<T> stack);

};

template <class T>
Stack<T>::Stack() {
	length = 0;
	tope = NULL;
}

template <class T>
Stack<T>::~Stack() {
	Node<T>* aux = tope;
	while(tope != NULL){
		tope = tope->getNext();
		delete aux;
		aux = tope;
	}
}

template <class T>
bool Stack<T>::empty() {
	return tope == NULL;
	//return length==0;
}

template <class T>
int Stack<T>::size() {
	return length;
}

template <class T>
void Stack<T>::push(T data) {
	tope = new Node<T>(data, tope);
	length++;
}

template <class T>
T Stack<T>::top() {
	return tope->getData();
}

template <class T>
void Stack<T>::pop() {
	if(length > 0) {
		Node<T>* aux = tope;
		tope = tope->getNext();
		delete aux;
		length--;
	}
}

template <class T>
void Stack<T>::swap(Stack<T> stack) {

}

