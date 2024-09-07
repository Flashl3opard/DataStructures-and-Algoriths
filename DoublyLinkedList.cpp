#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

// Constructor
    Node(int data){
        this ->data = data;
        this ->prev = prev;
        this ->next = next;
    }
};


int main(){
    Node* node1 = new Node(5);
    cout<< node1->data;
    cout<< node1->prev;
    cout<< node1->next;
}
