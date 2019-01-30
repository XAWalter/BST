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

	//setters
	void SetData(string);
	void SetLeft(Node*);
	void SetRight(Node*);

private:
	string data;
	Node* left;
	Node* right;

};

#endif // !NODE_H
