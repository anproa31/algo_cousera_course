#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll findNthFibonaci (ll arr[], ll n) {
    arr[0] = 0;
    arr[1] = 1;
    ll i;
    for(i = 2; i <= n; i++) {
        arr[i] = (arr[i-1] + arr[i-2]) % 10;
    }
    return arr[n];
}

int findLastDigit(int n)
{
    ll f[60] = {0};
    findNthFibonaci(f, 60);
    return f[n % 60];
}

int main() {
    ll m,n;
    ll arr[10000];
    ll sum = 0;
    cin >> m >> n;
    for(ll i = m; i <= n; i++) {
        sum += findLastDigit(i);
    }
    cout << sum % 10 << endl;
    return 0;
}