// Delete the head node of the linked list
// Approach - Store the current head, move the head pointer
// to the next node, and delete the old head node.
// TC = O(1) and SC = O(1)
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
    }
};
Node* delHead(Node*head){
    if(head == nullptr) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i =1; i<arr.size(); i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    Node* Head = delHead(head);
    while(Head!= nullptr){
        cout << Head->data << " ";
        Head = Head->next;
    }
}
