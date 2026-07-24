#include<bits/stdc++.h>
using namespace std;

// Node class for the linked list
class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};

// Queue implementation using a singly linked list
class Queue{
    Node* front;
    Node* rear;
    int size;

public:
    // Constructor
    Queue(){
        front = rear = nullptr;
        size = 0;
    }

    // Insert an element at the rear of the queue
    void Push(int x){
        Node* newnode = new Node(x);

        if(front == nullptr){
            front = rear = newnode;
        }
        else{
            rear->next = newnode;
            rear = newnode;
        }

        size++;
    }

    // Remove the front element from the queue
    void Pop(){
        if(front == nullptr)
            return;

        Node* temp = front;
        front = front->next;
        delete temp;
        size--;

        // Reset rear when the queue becomes empty
        if(front == nullptr)
            rear = nullptr;
    }

    // Check whether the queue is empty
    bool isEmpty(){
        return front == nullptr;
    }

    // Return the current size of the queue
    int Size(){
        return size;
    }

    // Return the front element
    int Front(){
        if(front == nullptr){
            cout << "Queue is Empty\n";
            return -1;
        }

        return front->data;
    }

    // Return the rear element
    int Back(){
        if(front == nullptr){
            cout << "Queue is Empty\n";
            return -1;
        }

        return rear->data;
    }

    // Display all queue elements
    void display(){
        if(front == nullptr){
            cout << "Queue is Empty\n";
            return;
        }

        Node* temp = front;

        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main(){

    Queue q;

    // Insertion
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    q.Push(60);
    q.Push(70);

    q.display();

    // Deletion
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();

    q.display();

    // Queue status
    cout << boolalpha << q.isEmpty() << endl;
    cout << q.Size() << endl;

    // Insert more elements
    q.Push(90);
    q.Push(90);
    q.Push(90);

    q.display();
    cout << q.Size() << endl;

    // Remove all elements
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();

    q.display();
}