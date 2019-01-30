#include <iostream>
#include <string>

#include "Node.h"

using namespace std;

int main() {
	Node* a = new Node;
	Node* b = new Node("Hello");

	cout << "a's data: " << a->GetData() << endl;
	cout << "b's data: "<< b->GetData() << endl;

	a->SetRight(b);
	cout << "a's right node's data: " << a->GetRight()->GetData() << endl;

	system("pause");
	return 0;
}