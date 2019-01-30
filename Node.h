#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

//Node that points to two other nodes and carries a payload of type string
class Node {
public:
	//default constructor
	Node();
	//constructor for setting data
	Node(string);

	//getters
	string GetData();
	Node* GetLeft();
	Node* GetRight();
	Node* GetPrev();

	//setters
	void SetData(string);
	void SetLeft(Node*);
	void SetRight(Node*);
	void SetPrev(Node*);
private:
	string data;
	Node* left;
	Node* right;
	Node* prev;

};

#endif // !NODE_H
