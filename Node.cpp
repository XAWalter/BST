#include <iostream>
#include <string>

#include "Node.h"

using namespace std;

//default constructor sets data to "none"
Node::Node() {
	data = "none";
	left = NULL;
	right = NULL;
}

//constructor with passed type string
Node::Node(string val) {
	data = val;
	left = NULL;
	right = NULL;
}

//getters
string Node::GetData() {
	return data;
}

Node* Node::GetLeft() {
	return left;
}

Node* Node::GetRight() {
	return right;
}

Node* Node::GetPrev() {
	return prev;
}

//setters
void Node::SetData(string val) {
	data = val;
}

void Node::SetLeft(Node* nLeft) {
	left = nLeft;
}

void Node::SetRight(Node* nRight) {
	right = nRight;
}

void Node::SetPrev(Node* nPrev) {
	prev = nPrev;
}