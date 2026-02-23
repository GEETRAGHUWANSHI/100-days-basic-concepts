#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void erase(vector<int> &a, int value)
{
    a.erase(remove(a.begin(), a.end(), value), a.end());
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    erase(a,4);
    cout << "after erase:";
    for (int i : a )
    {
        cout << i << " ";
    }
    cout << endl;
}