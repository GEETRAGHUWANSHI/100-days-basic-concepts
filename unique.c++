#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void unique(vector<int> &a)
{
    a.erase(unique(a.begin(), a.end()), a.end()); 
}

int main(){
    vector<int> a = {1, 2, 2, 3, 4, 4, 5};
    unique(a); 
    cout << "After unique: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}