// Singly linked list 

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Node{
    public:
    int Data;
    Node* next ;

    Node(int data){
        this -> Data = data;
        this -> next = NULL;
    }
};

void InsertAtHead(Node* &head , int data){

    Node* temp = new Node(data);  //creating a temporary pointer to link the next node
    temp->next = head;
    head = temp;

}

void InsertAtTail(Node* &tail , int data){

    Node* temp = new Node(data);
    tail -> next = temp;
    tail = tail->next;
}


void print(Node* &head){ //For printing the Data of linked list
    Node* temp = head;
    while (temp != NULL){
        cout<< temp -> Data<<" ";
        temp = temp->next; 
    }
    cout<<endl;
}

int main(){
    Node*  node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head,12);
    InsertAtHead(head,15);
    InsertAtTail(tail,17);
    print(head);


}