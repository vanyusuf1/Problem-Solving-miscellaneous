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
	print(head);

	return 0;


}