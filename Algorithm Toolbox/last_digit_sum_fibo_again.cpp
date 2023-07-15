#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll pisano(ll m)
{
    ll prev = 0;
    ll curr = 1;
    ll res = 0;
 
    for(ll i = 0; i < m * m; i++)
    {
        ll temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
 
        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}

ll fibonacciModulo(ll n)
{  
    // Getting the period
    ll pisanoPeriod = pisano(10);
    n = n % pisanoPeriod;
    ll arr[n+2];
    arr[0] = 0;
    arr[1] = 1;
 
    for(ll i = 2; i < n - 1; i++)
    {
        arr[i] = (arr[i-1] + arr[i-2]) % 10;
    }
    return arr[n +1];
}


int main() {
    ll n;
    ll sum = 0;
    cin >> n;
    for(ll i = 0; i <= n; i++) {
        sum += fibonacciModulo(i);
    }
    cout << sum % 10 << endl;
    return 0;
}