// Jared Senerchia, Eric Kozlowski, John Drury
#include"Node.h"
#include<iostream>
#include<random>

using namespace std;
Node* connectlists(Node*, Node*);
Node* makeCircule(Node*);

int main() {


	Node* ndPtr[5];

	for (int i = 0; i < 5; i++) {

		ndPtr[i] = new Node();
		ndPtr[i]->setData(rand() % 100 + 1);

	}

	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			ndPtr[i]->setNodePtr(NULL);
		}
		else
		{
			ndPtr[i]->setNodePtr(ndPtr[i + 1]);
		}
		cout << ndPtr[i] << endl;
	}

	Node* nd2Ptr[5];

	for (int i = 0; i < 5; i++) {
		nd2Ptr[i] = new Node();
		nd2Ptr[i]->setData(rand() % 100 + 1);
	}
	for (int i = 0; i < 5; i++) {
		if (i == 4) {
			nd2Ptr[i]->setNodePtr(NULL);
		}
		else
		{
			nd2Ptr[i]->setNodePtr(nd2Ptr[i + 1]);
		}
	}
	Node lists;
	Node* connectedlist;
	connectedlist = connectlists(ndPtr[0], nd2Ptr[0]);

	Node size;
	int size1;
	size1 = size.getSize(ndPtr[0]);
	cout << "The size of this list is " << size1 << endl;
	int size2;
	size2 = size.getSize(nd2Ptr[0]);
	cout << "The size of this list is " << size2 << endl;
	cout << endl;
	Node* CirclePtr;
	CirclePtr = makeCircule(nd2Ptr[0]);
	size.dividinHalf(size1, ndPtr[0]);

	system("pause");

	
	return 0;
}