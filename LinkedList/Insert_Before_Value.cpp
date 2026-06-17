// Insert a new node before a given value X in the linked list
// Approach - Traverse till the node containing X and keep track
// of the previous node. Insert the new node between prev and current.
// Handle the special case when X is present at the head.
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
Node* insertBeforeValue(Node* head, int x, int val){
    Node* new_node = new Node(val);
    if(head == nullptr) return new_node;
    if(head->data == x){
        new_node->next = head;
        head = new_node;
        return head;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        if(temp->data == x){
            new_node->next = temp;
            prev->next = new_node;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    delete new_node;
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = convertArrToLL(arr);
    head = insertBeforeValue(head , 30 , 456);
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    return 0;
}
