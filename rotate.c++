#include <iostream>
#include <vector> //use to easily run dynamic and contiguous memory
#include <algorithm> //generic algorithms like sort, reverse, rotate, etc.
using namespace std;

//void means the function does not return any value
void rotate(vector<int> &a)
{ 
    rotate(a.begin(), a.begin() + 1, a.end()); //+1 means rotate left by 1, -1 would mean rotate right by 1, 2|3|4|5
}

int main() {
    vector <int> a = {1, 2, 3, 4, 5};
    rotate (a);
    cout <<"after rotation: ";
    for (int i : a) //Iterates through each element in vector a and prints it followed by a space
    { 
      cout << i << "  ";
    }
    cout << endl;
}