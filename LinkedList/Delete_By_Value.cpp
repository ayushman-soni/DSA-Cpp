// Delete the first node having the given value
// Approach - Traverse the linked list and keep track of previous node
// If value is found, connect previous node to next node and delete current node
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
Node* delByValue(Node* head ,int val){
    if(head == nullptr) return nullptr;
    if(head->data == val){
        Node*temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = nullptr;
    while(temp != nullptr){
        if(temp->data == val){
            prev->next = prev->next->next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main(){
    vector<int> arr = {10,20,25,30,35,40,50};
    Node* head = convertArrToLL(arr);   
    head = delByValue(head , 20);
        while(head != nullptr){
            cout << head->data << " ";
            head = head->next;
        }
        cout << endl;
    return 0;
}
