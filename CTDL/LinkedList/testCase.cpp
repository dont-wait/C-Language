#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct SNode {
	int value;
	SNode* next;
};
//khởi tạo cấu trúc quản lí đầu và cuối ds
struct SList {
	SNode* head;
	SNode* tail;
};
void createList(Node* &head) {
    pHead = NULL;
}
//khởi tạo 1 node mới
SNode* createSNode(int x) {
	SNode* newNode = new SNode();
	
	newNode->value = x;
	newNode->next = NULL;
	return newNode;
}
int isEmpty(SList sl) {
	return sl.head == NULL;	//true
}
//chèn node vào đầu lk
int insertHead(SList &sl, SNode* p) {
	if(isEmpty(sl)) {
		sl.head = p;
		sl.tail = p;
	} else {
		p->next = sl.head;
		sl.tail = p;
	}
	return 1;
}
int insertTail(SList &sl, SNode*p) {
	if(isEmpty(sl)) {
		sl.head = p;
		sl.tail = p;
	} else {
		sl.tail->next = p;
		sl.tail = p; 
	}
	return 1;
}
int insertAfter(SList &sl, SNode* q, SNode* p) {
	if(q == NULL || p == NULL) 
		return 0;
	p->next = q->next;
	q.next = p;
	if(sl.tail == q)
		sl.tail = p;
	return 1;	
}
//chèn vào cuối sList

//in danh sách liên kết
void printLinkedList(node* head) {
	
	while(head != NULL) {
		cout << head->value;
		head = head->next;	
		if(head != NULL)
			cout << "->";
		else
			cout << "\n";
	}
	
}

int count(node* head) {
	int count = 0;
	while(head != NULL) {
		++count;
		head = head->next;
	}
	return count;	
}

int removeHead(SList &sl, SNode* head) {
	if(isEmpty(sl))
		return 0;
	SNode* p = new SNode;
	p = sl.head;
	sl.head = sl.head->next;
	p->next = NULL;
	delete(p);
}
//void addToHead(node** headNode, int value) {
//	
//	node* newNode = makeNode(value); 
//	 
//	newNode->next = *headNode;
//	*headNode = newNode;
//}
//void addToTail(node** headNode, int value) {
//	
//	node* newNode = makeNode(value);
//	if(headNode == NULL)
//		cout << newNode;
//	else {
//		node* lastNode = headNode;
//		while(headNode.next != NULL) {
//			lastNode = lastNode.next;
//		}
//		lastNode.next = newNode;
//	}
//	
//	
//}
int main(int argc, char** argv) {
	SNode n1 = createSNode(1);
	SNode n2 = createSNode(2);
	SNode n3 = createSNode(3);
	

	cout << "The size of Linked list: "<<count(head);
	return 0;
}