#include <iostream>
#include <string>

#include "BST.h"

using namespace std;

BST::BST() {
	top = NULL;
	curr = NULL;
	depth = -1;
}

BST::BST(string nVal) {
	Node* nTop = new Node(nVal);
	top = nTop;
	curr = NULL;
	depth = 0;
}


//insert passed string into the BST in alphabetical order
void BST::insert(string nVal) {
	Node* nNode = new Node(nVal);
	curr = top;

	//counter for how from head insert will go
	int dCount = 0;

	//if empty BST
	if (top == NULL) {
		top = nNode;
	}
	else {
		do {
			//remeber prev
			tmp = curr;
			if (curr->GetData() <= nNode->GetData()) {
				curr = curr->GetLeft();
				if (curr == NULL) {
					tmp->SetLeft(nNode);
				}
				dCount++;
			}
			else {
				curr = curr->GetRight();
				if (curr == NULL) {
					tmp->SetRight(nNode);
				}
				dCount++;
			}
		} while (curr != NULL);
	}
	nNode->SetPrev(tmp);
	if (dCount > depth) {
		depth++;
	}
}

bool BST::search(string val) {
	curr = top;
	do {
		if (curr->GetData() == val) {

		}

	} while (curr != NULL);
}