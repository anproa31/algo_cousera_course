#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    ll a,b;
    cin>>a>>b;
    cout<<a / gcd(a,b) * b;
    return 0;
}