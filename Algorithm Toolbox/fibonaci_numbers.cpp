#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findNthFibonaci (ll n) {
    ll arr[n+2];
    arr[0] = 0;
    arr[1] = 1;
    for(ll i = 2; i <= n; i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
}


int main() {
    ll n;
    cin >> n;
    cout << findNthFibonaci(n);
}