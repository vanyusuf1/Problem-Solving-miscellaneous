#include<bits/stdc++.h>
using namespace std;
class node  {
public:
	int data;
	node* next;
	node(int d) {
		data = d;
		next = NULL;
	}
};
void insertathead(node* head, int data) {
	node* n = new node(data);
	n->next = head;
	head = n;
}
int length(node *head) {
	int len = 0;
	while (head != NULL) {
		head = head->next;
		len += 1;
	}
	return len;

}
void insertAtTail(node *head, int data) {
	if (head == NULL) {
		head = new node(data);
		return;
	}
	node *tail = head;
	while (tail->next != NULL) {
		tail = tail->next;
	}
	tail->next = new node(data);
	return;

}

void insertinmiddle(node *&head, int data, int position) {
	if (head == NULL || position == 0) {
		insertathead(head, data);
	}
	else if (position> length(head)) {
		insertAtTail(head, data);

	}
	else {
		int jump = 1;
		node* temp = head;
		while (jump <= position - 1) {
			temp = temp->next;
			jump += 1;
		}
		node *n = new node(data);
		n->next = temp->next;
		temp->next = n;
	}
}

void print(node* head) {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << endl;
}

int main() {
	node* head = NULL;
	insertathead(head, 5);
	insertathead(head, 4);
	insertathead(head, 1);
	insertathead(head, 7);
	insertAtTail(head, 8);
	insertinmiddle(head, 2, 3);
	print(head);

	return 0;


}