#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

struct Item
{
    long long cost;
    long long weight;
    double rate;
};

bool compare(Item i1, Item i2)
{
    return i1.rate > i2.rate;
}

int main()
{
    int n;
    long long W;
    cin >> n >> W;
    vector<Item> items(n);
    for (int i = 0; i < n; i++)
    {
        cin >> items[i].cost >> items[i].weight;
        items[i].rate = (double)items[i].cost / items[i].weight;
    }
    sort(items.begin(), items.end(), compare);
    double value = 0;
    for (int i = 0; i < n; i++)
    {
        if (W == 0)
        {
            cout << fixed << setprecision(4) << value << endl;
            return 0;
        }
        double a = min(items[i].weight, W);
        value += a * items[i].rate;
        W -= a;
    }
    cout << fixed << setprecision(4) << value << endl;
}