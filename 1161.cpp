#include <bits/stdc++.h>
using namespace std;

//节点
typedef struct node {
	char data;
	struct node *lchild, *rchild;
}*Btree;
 
string s;
int i;
//先序建立二叉树
void creat_btree(Btree &T) {
	if (i == s.size()) return;
	char c = s[i++];
	if (c == '#') T = NULL;
	else{
		T = new node;
		T->data = c;
		T->lchild = NULL;
		T->rchild = NULL;
		creat_btree(T->lchild);
		creat_btree(T->rchild);
	}
} 

//中序遍历
void mid_order(Btree &T) {
	if (T != NULL){
		mid_order(T->lchild);
		cout << T->data << ' ';
		mid_order(T->rchild);
	}
}

int main () {
	while(cin >> s){
		i = 0;
		Btree T;
		creat_btree(T);
		mid_order(T);
		cout << endl;
	}

	return 0;
}
