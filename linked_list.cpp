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

	~Node(){
		int  val = this->data;
		if(this->next != NULL){
			delete next;
			this->next = NULL;
		}
		cout<<"memory is free for node with data"<<val<<endl;
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
void inserAtPos(Node* &tail, Node* &head, int pos, int d){
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
	if(temp->next == NULL){
		inseetAtTail(tail, d);
		return;
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

void deleteNode(int pos, Node* &head){
	if(pos == 1){
		Node* temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;

	}
	else{

		Node* curr = head;
		Node* prev = NULL;
		int cnt =1;
		while(cnt <= pos){
			prev = curr;
			curr = curr->next;
			cnt++;

		}
		prev->next = curr->next;
		curr->next = NULL;
		delete curr;
	}
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
	inserAtPos(tail,head, 3, 22);
	print(head);
	deleteNode(1, head);
	print(head);


}