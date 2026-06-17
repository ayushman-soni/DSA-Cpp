// Insert a new node at the tail of the linked list
// Approach - Traverse till the last node and connect the new node
// TC = O(N) and SC = O(1)
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
Node* convertArrToLL(vector<int>& arr){
    if(arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i=1;i<arr.size();i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}
Node* insertAtTail(Node*head , int val){
    Node* new_node = new Node(val);
    if(head == nullptr) return new_node;
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new_node;
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = convertArrToLL(arr);
    head = insertAtTail(head, 459);
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
}
