// BSTree.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BSTree.h"
#include<iostream>
using namespace std;
int main()
{
	/*
	�ö����������ṹ��

				62
			   /  \
			 58	  88
			/    /  \
		  47    73	 99
	     /  \	      \
	   35	 51	       93
	    \                \
		 37				  95
	*/
	BSTree<int> t;
	t.insert(62);
	t.insert(58);
	t.insert(47);
	t.insert(51);
	t.insert(35);
	t.insert(37);
	t.insert(88);
	t.insert(73);
	t.insert(99);
	t.insert(93);
	t.insert(95);

	cout << endl << "���������" << endl;
	t.inOrder();
	cout << endl << "ǰ�������" << endl;
	t.preOrder();
	cout << endl << "���������" << endl;
	t.postOrder();

	/*BSNode<int>* t1 = nullptr;
	t1->value = 10;
	t1->lchild = nullptr;
	t1->rchild = nullptr;
	t1->parent = nullptr;
	cout<<t.predecessor(t1)<<endl;*/

	cout << "���Ԫ��:" << t.search_maximum() << endl;
	cout << "��СԪ��:" << t.search_minimun() << endl;

	cout << "ɾ��Ԫ��99" << endl;
	t.remove(99);

	cout << "���Ԫ��:" << t.search_maximum() << endl;

	t.destory();

	getchar();
	return 0;
}