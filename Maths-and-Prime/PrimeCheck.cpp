#include <bits/stdc++.h>
using namespace std;


// Approach 1: Brute Force
// TC: O(n)
// SC: O(1)


bool isPrimeBrute(int n){
    if(n <= 1) return false;

    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}


// Approach 2: Optimal
// TC: O(sqrt(n))
// SC: O(1)


bool isPrimeOptimal(int n){
    if(n <= 1) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(){
    int n;
    cin >> n;

    if(isPrimeOptimal(n))
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}
