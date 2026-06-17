// Delete the Tail of the linked list 
// Approach - Traverse till second last node
// TC = O(N) and SC =O(1) where N = size of the linked list 
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
Node* delTail(Node*head){
    if(head == nullptr) return nullptr;
    if(head->next == nullptr){ // same as deleting head of list
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    while(temp->next->next != nullptr){   // 10 20 25 30 36 325(temp is here) 326 X
        temp = temp->next;
    }
    Node* del_node = temp->next;
    temp->next = nullptr;
    delete del_node;
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
    head = delTail(head);
    while(head != nullptr){
        cout << head->data << " ";
        head = head->next;
    }
    return 0;
}
