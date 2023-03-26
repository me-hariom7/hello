#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    return fib(n-1) + fib(n-2);
}

bool isEven(int n) {
    if(n % 2 == 0) return true;
    else return false;
}

int linerSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) return i;
    }
    return -1;
}

int main() {
    cout << "Hello from Hell!" << endl;
    return 0;
}