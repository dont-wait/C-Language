#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
struct node {
	int data;
	node* next;
};
struct SList {
	node* head;
	node* tail;
};
void initLinkedList(SList& sl) {
	sl.head = NULL;
	sl.tail = NULL;
}
node* createNewNode(int x) {
	node* p = new node();
	if (p == NULL)
		cout << "CLEANED UP PLS";

	p->data = x;
	p->next = NULL;
	return p;
}
int isEmpty(SList sl) {
	return sl.head == NULL;

	//	if(sl.head == NULL)
	//		return 1;
	//	return 0;
}
//Câu chuyện về chàng trai lao công và và chủ chung cư
void printLinkedList(SList sl) {
	if (isEmpty(sl)) {
		cout << "'Danh sach rong";
		return;
	}
	node* p = sl.head;	//chủ nhà giao quyền quản lí căn chung cư
	//								cho anh lao công

//dọn tới khi nào không còn căn hộ nào nx thì thôi
	while (p != NULL) {
		cout << p->data;	//dọn nhà

		if (p->next != NULL)
			cout << "->";
		else
			cout << "\n";

		p = p->next;	//tới địa chỉ căn bên dọn tiếp
	}
}
int addToHead(SList& sl, node* p) {
	if (isEmpty(sl)) {
		sl.head = p;
		sl.tail = p;
	}
	else {
		p->next = sl.head;
		sl.head = p;
	}
	return 1;
}

int addToTail(SList& sl, node* p) {
	if (isEmpty(sl)) {
		sl.head = p;
		sl.tail = p;
	}
	else {
		sl.tail->next = p;
		sl.tail = p;
	}
	return 1;
}

int addAfter(SList& sl, node* q, node* p) {
	if (q == NULL || p == NULL) {
		return 0;
	p->next = q->next;
	q->next = p;
	if (sl.tail == q)
		sl.tail = p;
	return 1;
	}
}
	int removeHead(SList & sl)
	{
		
		if (isEmpty(sl))
			return 0;
		node* p = sl.head; //co dc thang dau roi
		sl.head = sl.head->next;	//doi thg sau di, xu li thang dau
		if (sl.head == NULL)
			sl.tail = NULL;
		delete p;
		return 1;
	}

	int removeTail(SList & sl) {
		if (isEmpty(sl))
			return 0;
		else if (sl.head == sl.tail)
			removeHead(sl);
		else {
			node* p = sl.head;
			while (p->next != sl.tail) {
				p = p->next;
			}
			// xóa phần tử cuối
			delete sl.tail;
			// cập nhật lại ptail
			sl.tail = p;
			sl.tail->next = NULL;
		}
		return 1;
	}
	int removeAfter(SList& sl, node* q) {
		if (q == NULL || q->next == NULL)
			return 0;
		node* p = q->next;
		q->next = p->next;
		if (sl.tail == p)
			sl.tail = q;
		delete p;
		return 1;
		
	}
	
	void printEvenLinkedList(SList sl) {

		if (isEmpty(sl)) {
			cout << "Danh sach rong";
			return;
		}
		node* p = sl.head;
		while (p != NULL) {
			if (p->data % 2 == 0) 
				cout << p->data << " ";
			p = p->next;
		}
	}
	int getSumLinkedList(SList sl) {
		if (isEmpty(sl)) {
			return 0; 	// tong = 0
		}
		int sum = 0;
		node* p = sl.head;
		while (p != NULL) {
			sum += p->data;
			p = p->next;
		}
		return sum;

	}
	int checkLastOddNode(SList sl) {
		return (sl.tail->data % 2 != 0);
	}
	int main(int argc, char** argv) {
		SList sl;
		initLinkedList(sl);
		
		node* p = createNewNode(0);
		addToHead(sl, p);
		addToTail(sl, createNewNode(1));
		addToTail(sl, createNewNode(2));
		addToTail(sl, createNewNode(3));
		addToTail(sl, createNewNode(4));
		addToTail(sl, createNewNode(5));
		addToTail(sl, createNewNode(6));
		cout << "The Linked List before removing\n";
		printLinkedList(sl);
		cout << "The Linked Lista after removing\n";

		//printf("The even numbers at list: ");
		removeHead(sl);
		removeTail(sl);
		removeTail(sl);
		removeTail(sl);
		removeTail(sl);


		printLinkedList(sl);

		//printEvenLinkedList(sl);
		/*printf("\n");
		
		printf ("sum of linked list: %d", getsumlinkedlist(sl));
		if (checklastoddnode(sl))
			cout << "\nthe odd number has existed\n";
		else
			cout << "\nnot found!!!\n";*/
		return 0;
	}