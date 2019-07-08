// Jared Senerchia, Eric Kozlowski, John Drury
#include"Node.h"
#include<iostream>
using namespace std;

Node::Node() {
	nextPtr = NULL;
	headptr = NULL;
}
int Node::getData() const {
	return data;
}
void Node::setData(int d) {
	data = d;
}
Node* Node::getNodePtr() const {
	return nextPtr;
}
void Node::setNodePtr(Node* n) {
	nextPtr = n;
}
Node* connectlists(Node* list1, Node* list2) {

	Node* Temptr = list1;

	while(Temptr->getNodePtr() != NULL) {
			Temptr = Temptr->getNodePtr();
	}
	Temptr->setNodePtr(list2);

	return list1;
}

int Node::getSize(Node* ptrlist) const {
	Node* Ptr = ptrlist;
	int count = 0;
	while (Ptr!=NULL) {
		if (Ptr == NULL) {
			break;
		}
		else {
			Ptr = Ptr->nextPtr;
			cout << count+1 << endl;
			count = count + 1;
		}
	}

	return count;

}

Node* Node:: dividinHalf(int s, Node* list1) const {
	int d = s / 2;
	Node* Temptr = list1;

	for (int i = 0; i < d; i++) {
		Temptr = Temptr->getNodePtr();
	}
	Temptr->setNodePtr(NULL);
	if (s % 2) {
		cout << "The list is Odd" << endl;
	}
	else {
		cout << "The list is Even" << endl;


	}
	return Temptr;
}

Node* makeCircule(Node* circptr) {
	Node* Temptr = circptr;
	while (Temptr->getNodePtr() != NULL) {
		Temptr= Temptr->getNodePtr();
	}
	Temptr->setNodePtr(circptr);

	return circptr;
}