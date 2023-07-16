

#include <iostream>
using namespace std;

long long calc_fib(long long n) {

    n = (n+2)%60;
    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    int res = 1;
    for(int i = 2; i<=n;i++){
        fib[i] = (fib[i-1]%10 + fib[i-2]%10)%10;
    }
    if(fib[n] == 0){
        return 9;
    }
    return (fib[n]%10-1);
}

int main() {
    long long n = 0;
    long long m =0;
    std::cin >> n;
    std::cin >> m;

    std::cout << (calc_fib(n) + calc_fib(m - 1)) % 10<< '\n';
    return 0;
}