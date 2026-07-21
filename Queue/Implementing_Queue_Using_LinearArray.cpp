// Queue Implementation using Linear Array

#include<bits/stdc++.h>
using namespace std;

class Queue{
    int *arr;      // Dynamic array
    int front;     // Points to front element
    int rear;      // Points to last element
    int capacity;  // Maximum size of queue

public:

    // Constructor
    Queue(int n){
        capacity = n;
        front = 0;
        rear = -1;
        arr = new int[n];
    }

    // Insert element
    void Push(int val){
        if(rear == capacity-1){
            cout << "Queue Overflow\n";
            return;
        }
        rear++;
        arr[rear] = val;
    }

    // Remove front element
    void Pop(){
        if(front > rear){
            cout << "Queue Underflow\n";
            return;
        }
        front++;
    }

    // Return front element
    int Front(){
        if(front > rear) return -1;
        return arr[front];
    }

    // Return last element
    int Back(){
        if(front > rear) return -1;
        return arr[rear];
    }

    // Check if queue is empty
    bool Empty(){
        return front > rear;
    }

    // Return current size
    int Size(){
        return rear - front + 1;
    }

    // Print queue
    void Display(){
        if(front > rear){
            cout << "Empty Queue\n";
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // Free allocated memory
    ~Queue(){
        delete[] arr;
    }
};