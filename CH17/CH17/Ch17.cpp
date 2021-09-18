#include<iostream>
using namespace std;

struct Node
{
	int x;
	Node* next;
};

bool find(Node*, int);
void destroy(Node*&);
void append(Node*&, int);
void print(Node*);
void remove(Node*&, int);

int main()
{
	Node* head = nullptr;

	append(head, 8);
	append(head, 5);
	append(head, 3);
	
	bool found = find(head, 7);
	if (found)
		cout << "Found it!\n";

	print(head);

	delete(head);
}


void append(Node*& h, int y)
{
	Node* n = new Node;
	n->x = y;
	n->next = nullptr;
	if(h==nullptr)
	{
		h = n;
		return;
	}
	Node *p= h;
	while (p->next != nullptr)
		p = p->next;
	p->next = n;
}

void print(Node* p)
{
	while (p != nullptr)
	{
		cout << p->x << endl;   
		p = p->next;
	}
}

bool find(Node* h, int y)
{
	while (h != nullptr)
	{
		if (h->x == y)
			return true;
		h = h->next;
	}
	return false;
}

void remove(Node*& h, int y)
{
	Node* p = h;
	Node* q = nullptr;
	while (p != nullptr && p->x != y)
	{
		q = p;
		p = p->next;
	}
	if (p = nullptr)
		return;
	if (q != nullptr)
		q->next = p->next;

	delete p;
}
