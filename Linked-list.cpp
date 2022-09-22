#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
};
void print_fun(Node* head){
	Node *temp=head;
	while(temp->next){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<temp->data;
}
int main() {
    //creat the pointer 
	Node *head = NULL;
	Node *first=NULL;
	Node *second=NULL;
	// allocate the node 
	head=new Node;
	first=new Node;
	second=new Node;
	
	head->data=1;
	head->next=first;
	
	first->data=2;
	first->next=second;
	
	second->data=3;
	second->next=NULL;
	
	print_fun(head);
	
	
	
	
	return 0;
}
