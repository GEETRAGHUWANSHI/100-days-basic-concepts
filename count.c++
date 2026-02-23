#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void count(vector<int> &a, int value)
{
    int cnt  = std::count(a.begin(), a.end(), value); 
    cout << "Count of " << value << ": " << cnt << endl;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 2, 2};
    count(a, 2);
    cout << "After counting: ";
    for (int i : a) {
        cout << i << " ";
    }
    return 0;
}