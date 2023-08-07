#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min = 0;
    while (n > 0) {
        if (n >= 10) {
            n -= 10;
            min++;
        }
        else if (n >= 5) {
            n -= 5;
            min++;
        }
        else {
            n -= 1;
            min++;
        }
    }
    cout << min << endl;
}