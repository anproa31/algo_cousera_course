#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


ll findNthFibonaci (ll n) {
    ll arr[10000];
    arr[0] = 0;
    arr[1] = 1;
    ll i;
    for(i = 2; i <= n; i++) {
        arr[i] = (arr[i-1] + arr[i-2]);
    }
    return arr[n];
}




int main() {
    // ll n;
    // cin >> n;
for (int i = 0; i <= 100; i++)
{
    cout << i << " " << findNthFibonaci(i) << endl;
}

}