#include<bits/stdc++.h>
using namespace std;

long long findNthFibonaci (long long n) {
    long long arr[n+2];
    arr[0] = 0;
    arr[1] = 1;
    for(long long i = 2; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}


int main() {
    int n;
    cin >> n;
    cout << findNthFibonaci(n);
}