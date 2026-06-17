// Insert a new node at the head of the linked list
// Approach - Create a new node and point it to current head
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
Node* insertAtHead(Node*head, int val){
    Node* new_node = new Node(val);
    if(head == nullptr) return new_node;
    new_node->next = head;
    head = new_node;
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = convertArrToLL(arr);
    head = insertAtHead(head,3500);
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    return 0;
}
