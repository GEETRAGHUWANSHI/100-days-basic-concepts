#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void push_back(vector<int> &a, int value)
{
    a.push_back(value); 
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    push_back(a, 6); 
    cout << "After push_back: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}