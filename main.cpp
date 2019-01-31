#include <iostream>
#include <string>

#include "Node.h"
#include "BST.h"

using namespace std;

int main() {
	BST a;
	a.insert("c");
	a.insert("b");
	a.insert("a");
	a.insert("d");
	a.insert("e");

	cout << a.largest() << endl;
	cout << a.smallest() << endl;
//	cout << a.height("e") << endl;

	a.remove("c");

	system("pause");
	return 0;
}