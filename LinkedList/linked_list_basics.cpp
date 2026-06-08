// TRAVERSING A LINKED LIST
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
int main(){
    // Creating Node In Heap Memory
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    // Time to Link Them
    first->next = second;
    (*second).next = third;
    third->next = fourth;
    fourth->next = fifth;
    //Now Traversing
    Node* temp = first;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}
