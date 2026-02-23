#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find_if(vector<int> &a, bool (*cond)(int))
{
    auto it = find_if(a.begin(), a.end(), cond);
    if (it != a.end()) {
        cout << "Found element satisfying condition at index " << distance(a.begin(), it) << endl;
    } else {
        cout << "No element satisfying condition found" << endl;
    }
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    find_if(a, [](int x) { return x % 2 == 0; }); 
    cout << "After find_if: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}