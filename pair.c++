#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> minmax(vector<int> &a)
{
    auto p = minmax_element(a.begin(), a.end()); 
    return make_pair(*p.first, *p.second); 
} 

int main(){
    vector<int> a = {1, 2, 3, 4, 5};
    auto p = minmax(a);
    cout << "Minimum element: " << p.first << endl;
    cout << "Maximum element: " << p.second << endl;
    
    return 0;
}