#include<iostream>
#include<fstream>
using namespace std;
// Khởi tạo cây nhị phân tìm kiếm các số nguyên
// khai báo cấu trúc 1 cái node
struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
typedef struct node NODE;
typedef NODE* TREE;
void ThemNode(TREE &t, int x)
{
	if (t == NULL)
	{
		NODE *p = new NODE;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		t = p;
	}
	else
	{
		// thêm node p sang bên nhánh trái
		if (x < t->data)
		{
			ThemNode(t->pLeft, x);
		}
		else if (x > t->data)
		{
			ThemNode(t->pRight, x);
		}
	}
}

//Tree Mytree;
void CreateTree(TREE &root)
{
    root = NULL;
}
// duyệt NLR
void NLR(TREE t)
{
	if (t != NULL)
	{
		cout << t->data << "  ";
		NLR(t->pLeft);
		NLR(t->pRight);
	}
}
// hàm đọc file
void Doc_File(TREE &t, ifstream &filein)
{
	int n;
	filein >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		filein >> x;
		ThemNode(t, x);
	}
}


