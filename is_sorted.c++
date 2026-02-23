#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void is_sorted(vector<int> &a)
{
    if (is_sorted(a.begin(), a.end())) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    is_sorted(a); 
    cout << "After checking if sorted: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}