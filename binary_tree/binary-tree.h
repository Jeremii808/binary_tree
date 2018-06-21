#include<iostream>
using namespace std;

struct binaryTree
{
	int data;
	binaryTree *left;
	binaryTree *right;
};

void ins(int n, binaryTree* &p);
void deltree(binaryTree* &p);
void preorder(binaryTree* leaf);
void inorder(binaryTree* leaf);
void postorder(binaryTree* leaf);

void ins(int n, binaryTree* &p)
{
	if (!p)
	{
		p = new binaryTree;
		p->data = n;
		p->left = p->right = 0;
		return;
	}

	if (n < p->data)
	{
		ins(n, p->left);
	}
	else if (n > p->data)
	{
		ins(n, p->right);
	}
}

void deltree(binaryTree* &p)
{
	delete p;
}

void preorder(binaryTree* leaf)
{
	if (leaf != 0)
	{
		cout << leaf->data << " ";
		//leaf->data;
		preorder(leaf->left);
		preorder(leaf->right);
	}
}

void inorder(binaryTree* leaf)
{
	if (leaf != 0)
	{
		inorder(leaf->left);
		cout << leaf->data << " ";
		//leaf->data;
		inorder(leaf->right);
	}
}

void postorder(binaryTree* leaf)
{
	if (leaf != 0)
	{
		postorder(leaf->left);
		postorder(leaf->right);
		cout << leaf->data << " ";
		//leaf->data;
	}
}
