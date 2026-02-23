#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find(vector<int> &a, int value)
{
    auto it = find(a.begin(), a.end(), value); //find() — Standard library function that searches for value in vector a
    if (it != a.end()) //it = iterator, Checks if the iterator is not equal to a.end(), If true → value was found, If false → value was not found
    {
        cout << "Found " << value << " at index " << distance(a.begin(), it) << endl;
    } 
    else
    {
        cout << "Value " << value << " not found" << endl;
    }
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6};
    find(a, 4);
    cout<< "after finding:";
    for (int i : a )  
    {
        cout << i << " ";
    }
}