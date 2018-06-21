#include<iostream>
using namespace std;

#include"binary-tree.h"

int main()
{
	binaryTree* tree = 0;

	ins(30, tree);
	ins(10, tree);
	ins(20, tree);
	ins(50, tree);
	ins(40, tree);

	cout << "inorder:" << endl;
	inorder(tree);
	cout << endl;

	cout << "\npreorder:" << endl;
	preorder(tree);
	cout << endl;

	cout << "\npostorder:" << endl;
	postorder(tree);
	cout << endl;

	deltree(tree);

	system("pause");
	return 0;
}