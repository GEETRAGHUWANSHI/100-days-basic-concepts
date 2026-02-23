#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sort(vector<int> &a)
{
    sort(a.begin(), a.end()); 
}

int main(){
    vector<int> a = {5, 3, 1, 4, 2};
    sort(a); 
    cout << "After sorting: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}