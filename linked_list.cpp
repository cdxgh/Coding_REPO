#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this-> data = data;
		this-> next = NULL;

	}

};
void inseetAtTail(Node* &tail, int d){
	Node* temp = new Node(d);
	tail->next = temp;
	tail = tail->next;
}

void insertAtHead(Node* &head, int d){
	Node* temp = new Node(d);
	temp-> next = head;
	head = temp;

}
void inserAtPos(Node* &head, int pos, int d){
	if(pos==1){
		insertAtHead(head, d);
		return;
	}
	Node* temp= head;
	int cnt = 1;
	while(cnt < pos -1){
		temp = temp -> next;
		cnt++;
	}

	Node* nodeToinsert = new Node(d);
	nodeToinsert -> next = temp->next;
	temp->next = nodeToinsert;

}

void print(Node* &head){
	Node* temp = head;

	while(temp != 0){
		cout << temp-> data <<" ";
		temp = temp->next;


	}
	cout<<endl;

}

int main(){

	Node* node1 = new Node(10);
	// cout<< node1 -> data <<endl;
	// cout<<node1->next <<endl;
	

	Node* head = node1;
	Node* tail = node1;
    print(head);

	inseetAtTail(tail, 12);
	print(head);
	inseetAtTail(tail, 15);
	print(head);
	inserAtPos(head, 3, 22);
	print(head);

}