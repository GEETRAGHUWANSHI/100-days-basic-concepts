#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void stable_partition(vector<int> &a, bool (*cond)(int))
{
    stable_partition(a.begin(), a.end(), cond); 
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    stable_partition(a, [](int x) { return x % 2 == 0; }); 
    cout << "After stable partition: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}