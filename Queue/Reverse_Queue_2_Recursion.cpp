// Reverse Queue using Recursion
// Time Complexity: O(N)
// Space Complexity: O(N) (Recursion Call Stack)
#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int> &q){
    if(q.empty()) return;
    int x = q.front();
    q.pop();
    reverseQueue(q);
    q.push(x);
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverseQueue(q);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}