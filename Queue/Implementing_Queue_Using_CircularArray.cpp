// Implementing Queue using circular array
#include<bits/stdc++.h>
using namespace std;
class CircularQueue{
    int *arr;
    int front , rear , capacity , size;
public:
    CircularQueue(int n){
        capacity = n;
        front = rear = -1;
        size = 0;
        arr = new int[n];
    }
    bool isEmpty(){
        return size == 0;
    }
    bool isFull(){
        return size == capacity;
    }
    void Push(int x){
        if(isFull()){
            cout << "Queue Overflow\n";
            return;
        }
        if(isEmpty()){
            front = rear = 0;
        }
        else{
            rear = (rear+1) % capacity;
        }
        arr[rear] = x;
        size++;
    }
    void Pop(){
        if(isEmpty()){
            cout << "Queue Underflow\n";
            return;
        }
        if(front== rear){ // it means queue has only one element
            front = rear = -1;
        }
        else{
            front = (front+1) % capacity;
        }
        size--;
    }
    int Front(){
        if(isEmpty()){
            cout << "Empty Queue\n";
            return -1;
        }
        return arr[front];
    }
    int Back(){
        if(isEmpty()){
            cout << "Empty Queue\n";
            return -1;
        }
        return arr[rear];
    }
    int Size(){
        return size;
    }
    void display(){
        if(isEmpty()){
            cout << "Empty Queue\n";
            return ;
        }
        int i = front; // front is our starting point of our Queue not i = 0
        while(true){  // In circular array our rear can be smaller than the front that's why we should not use i<= rear;
            cout << arr[i] << " ";
            if(i == rear) break;
            i = (i+1) % capacity;
        }
        cout << endl;
    }
    ~CircularQueue(){
    delete[] arr;
}
};
int main(){
    CircularQueue q(7);
    q.Push(10);
    q.Push(20);
    q.Push(30);
    q.Push(40);
    q.Push(50);
    q.Push(60);
    q.Push(70);
    q.display();
    q.Pop();
    q.Pop();
    q.Pop();
    q.Pop();
    q.display();
    cout << boolalpha <<  q.isEmpty() << endl;
    cout << q.Size() << endl;
    q.Push(90);
    q.Push(90);
    q.Push(90);
    q.display();
    cout << q.Size() << endl;
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
    cout << q.Size() << endl;
    cout << boolalpha <<  q.isEmpty() << endl;
    q.display();
}