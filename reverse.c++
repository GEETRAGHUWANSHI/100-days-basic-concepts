#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(vector<int> &a)
{
    reverse(a.begin(), a.end()); 
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5}; //declares a vector of integers and initializes it with the values 1, 2, 3, 4, and 5
    reverse(a); 
    cout << "After reverse: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;
}