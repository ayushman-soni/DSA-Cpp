// Reverse Queue using Stack
// Time Complexity: O(N)
// Space Complexity: O(N)

#include<bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    stack<int> st;

    // Move all queue elements to stack
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    // Move all stack elements back to queue
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }

    // Print reversed queue
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
}