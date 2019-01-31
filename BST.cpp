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

//will return the node* of the position of the searched item
Node* BST::search(string val) {
	curr = top;
	do {
		if (curr->GetData() == val) {
			return curr;
		}
		else {
			if (curr->GetData() <= val) {
				curr = curr->GetLeft();
			}
			else {
				curr = curr->GetRight();
			}
		}

	} while (curr != NULL);
	return NULL;
}

//finds the largest data element
string BST::largest() {
	curr = top;
	do {
		tmp = curr;
		curr = curr->GetLeft();
	} while (curr != NULL);
	return tmp->GetData();
}

//finds the smallest data element
string BST::smallest() {
	curr = top;
	do {
		tmp = curr;
		curr = curr->GetRight();
	} while (curr != NULL);
	return tmp->GetData();
}

int BST::height(string val) {
	curr = top;
	int hCounter = 0;
	do {
		if (curr->GetData() == val) {
			return hCounter;
		}
		else {
			if (curr->GetData() <= val) {
				curr = curr->GetLeft();
			}
			else {
				curr = curr->GetRight();
			}
			hCounter++;
		}
	} while (curr != NULL);

	return -1;
}

void BST::remove(string val) {
	Node* r;
	r = search(val);
	Node* p = r->GetPrev();

	//find largest left value
	if (p == NULL) {
		if (r->GetLeft() != NULL) {
			r->SetData(r->GetLeft()->GetData());
			tmp = r->GetLeft()
		}
	}
	if (r->GetLeft() == NULL && r->GetRight() == NULL)
	{
		if (r == p->GetLeft()) {
			p->SetLeft(NULL);
		}
		else {
			p->SetRight(NULL);
		}
	}
	else {
		if (r->GetLeft() != NULL) {
			r->SetData(r->GetLeft()->GetData());
			r->SetLeft(NULL);
		}
		else {
			r->SetData(r->GetRight()->GetData());
			r->SetRight(NULL);
		}
	}
}