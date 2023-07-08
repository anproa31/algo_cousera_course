#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

// long long MaxPairwiseProduct(const vector<int>& numbers){
//     long long max_product = 0;
//     int n = numbers.size();
//     for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(((long long)numbers[i]) * numbers[j] > max_product){
//                 max_product = ((long long)numbers[i]) * numbers[j];
//             }
//         }
//     }
//     return max_product;
// }

long long MaxPairwiseProductFast(const vector<int>& numbers){
    int n = numbers.size();
    int max_index1 = -1;
    for(int i = 0; i < n; i++){
        if((max_index1 == -1) || (numbers[i] > numbers[max_index1])){
            max_index1 = i;
        }
    }
    int max_index2 = -1;
    for(int j = 0; j < n; j++){
        if((j != max_index1) && ((max_index2 == -1) || (numbers[j] > numbers[max_index2]))){
            max_index2 = j;
        }
    }
    return ((long long)(numbers[max_index1])) * numbers[max_index2];
}

int main() {
    // while(true){
    //     int n = rand() % 10 + 2;
    //     std::cout << n << "\n";
    //     vector<int> a;
    //     for(int i = 0; i < n; i++){
    //         a.push_back(rand() % 100000);
    //     }
    //     for(int i = 0; i < n; i++){
    //         std::cout << a[i] << ' ';
    //     }
    //     std::cout << "\n";
    //     long long res1 = MaxPairwiseProduct(a);
    //     long long res2 = MaxPairwiseProductFast(a);
    //     if(res1 != res2){
    //         std::cout << "Wrong answer: " << res1 << ' ' << res2 << "\n";
    //         break;
    //     }
    //     else{
    //         std::cout << "OK\n";
    //     }
    // }
    int n;
    std::cin >> n;
    vector<int> numbers(n);
    for(int i = 0; i < n; i++){
        std::cin >> numbers[i];
    }
    long long result = MaxPairwiseProductFast(numbers);
    std::cout << result << endl;
    return 0;
}