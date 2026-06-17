//Insert a new node at the Kth position of the linked list
//Approach - Traverse till (K-1)th node and adjust links
//TC = O(N) and SC = O(1)
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
Node* insertAtKthPos(Node*head , int k , int val){
    if(k<= 0) return head;
    Node* new_node = new Node(val);
    if(head == nullptr) return new_node;
    if(k == 1){ // Similar to insertion at head case
        new_node->next = head;
        head = new_node;
        return head;
    }
    Node* temp = head;
    for(int i = 1; i<(k-1) && temp != nullptr; i++){
        temp = temp->next;
    }
    if(temp == nullptr){
        delete new_node;
        return head;
    }
    new_node->next = temp->next;
    temp->next = new_node;
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = convertArrToLL(arr);
    head = insertAtKthPos(head , 3 , 45);
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
}
