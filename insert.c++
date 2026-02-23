#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void insert(vector<int> &a, int value)
{
    a.insert(a.end(), value); 
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    insert(a, 6); 
    cout << "After insertion: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}