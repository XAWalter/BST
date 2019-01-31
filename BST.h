#ifndef BST_H
#define	BST_H

#include <iostream>
#include <string>

#include "Node.h"

using namespace std;

class BST {
public:
	BST();
	BST(string);

	void insert(string);
	void remove(string);
	Node* search(string);
	string largest();
	string smallest();
	int height(string);

private:
	Node* top;
	Node* curr;
	Node* tmp;
	int depth;

};
#endif // !BST_H
