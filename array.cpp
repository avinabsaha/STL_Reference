#include <iostream>
#include <array>

using namespace std;

int main(){

    // basic array
    int basic[3] = {1,2,3};

    // STL static array
    array<int,4> a = {1,2,3,4};

    // Getting size of STL array
    int size = a.size();

    // Traversing and printing array
    for (int i=0; i<size; i++){
        cout << a[i] << endl;
    }

    // Get array element at some definite location say 2, 
    cout << "Element at 2nd Index->" << a.at(2) << endl;

    // Check if array is empty
    cout << "Empty or not->" << a.empty() << endl;

    // Get first and last element of array
    cout << "First element-> " << a.front() << endl;
    cout << "Last element-> " << a.back() << endl;

    // Accessing element at each location is O(1)

    return 0;

}