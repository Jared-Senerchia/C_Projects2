// Jared Senerchia, Eric Kozlowski, John Drury
#pragma once
#pragma once
#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	Node();
	int getData() const;
	void setData(int d);
	Node* getNodePtr() const;
	void setNodePtr(Node* n);
	int getSize(Node* ptrlist) const;
	Node* dividinHalf(int , Node*) const;

private:
	int data;
	Node* headptr;
	Node* nextPtr;
};

#endif