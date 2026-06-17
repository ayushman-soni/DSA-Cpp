// Delete the node of the linked list with given position
// Approach - Traverse till position-1
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
Method - 1;
Node* delAtPosition_1(Node*head , int pos){
    if(head == nullptr) return nullptr;
    if(pos == 1){ // same as deleting head of the list
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node*temp = head;
    for(int i = 1 ; i<(pos-1) && temp != nullptr; i++){
        temp = temp->next;
    }
    if(temp == nullptr || temp->next == nullptr){
        return head;
    }
    Node* curr = temp->next;
    temp->next = curr->next;
    delete curr;
    return head;
}
Method - 2
Approach - Count while traversing
TC = O(N) and SC = O(1)
Node* delAtPosition_2(Node*head , int k){
    if(head == nullptr) return nullptr;
    if(k == 1){ // same as deleting head of the list
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node*temp = head;
    Node* prev = nullptr;
    int cnt = 0;
    while(temp!= nullptr){
        cnt++;
        if(cnt == k){
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
    head = delAtPosition_1(head , 4) << endl;
    head = delAtPosition_2(head ,5 );
    while(head!= nullptr){
        cout << head->data << " ";
        head = head->next;
    }
}
